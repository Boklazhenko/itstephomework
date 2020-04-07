#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

class Gauge
{
public:
    explicit Gauge(string operation) : _operation(move(operation)), _started(steady_clock::now()) {}

    ~Gauge()
    {
        cout << _operation << ": elapsed " << duration_cast<seconds>(steady_clock::now() - _started).count() << endl;
    }

private:
    string _operation;
    steady_clock::time_point _started;
};

class File
{
public:
    File(string filename)
    {
        _pFile = fopen(filename.c_str(), "a+");
    }

    ~File()
    {
        fclose(_pFile);
    }

    void writeInt(int integer)
    {
        srand(time(nullptr));

        Gauge gauge("To file int");

        for (int i = 0; i < 1000000000; ++i)
        {
            integer = rand() % 10;
            fprintf(_pFile, "%d", integer);
        }
    }

    char getRandomChar() {
        static char c = 'A' + rand() % 126;
        return c;
    }

    void writeChar(char* chars, const int size)
    {
        srand((unsigned)time(nullptr));

        Gauge gauge("To file char");

        for (int i = 0; i < 1000000000; ++i)
        {
            chars = new char[size + 1];
            for (int j = 0; j < size; ++j)
            {
                chars[j] = getRandomChar();
            }
            chars[size] = '\0';
            fprintf(_pFile, "%s", chars);
            delete[] chars;
        }
    }

    double getRandomDouble(double fMin, double fMax)
    {
        double f = (double)rand() / RAND_MAX;
        return fMin + f * (fMax - fMin);
    }

    void writeDouble(double d)
    {
        srand(time(nullptr));

        Gauge gauge("To file double");

        for (int i = 0; i < 1000000000; ++i)
        {
            d = getRandomDouble(0.1, 20.7);
            fprintf(_pFile, "%f", d);
        }
    }

    void writeBool(bool boolean)
    {
        srand(time(nullptr));

        Gauge gauge("To file bool");

        for (int i = 0; i < 1000000000; ++i)
        {
            boolean = rand() % 2;
            fprintf(_pFile, "%s", (boolean ? "true" : "false"));
        }
    }

private:
    FILE* _pFile;
};

int main()
{
    cout << "start" << endl;

    File fileInteger("testInt.txt"); //1429 sec 953MB
    fileInteger.writeInt(1);

    const int size = 5;
    char one[size];

    File fileChar("testChar.txt"); //2714 sec 4.65GB
    fileChar.writeChar(one, size);

    File fileDouble("testDouble.txt"); //4492 sec 7.93GB
    fileDouble.writeDouble(7.7);

    File fileBool("testBool.txt"); //1783 sec 4.19GB
    fileBool.writeBool(1);

    cout << "end" << endl;
}
