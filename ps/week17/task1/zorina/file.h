#pragma once
#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

class File {
public:
    File(string fileName);
    ~File();
    void write(int);
    void write(const char*);
    void write(double);
    void write(bool);
   
private:
    FILE* _pFile;
};

class Gauge {
public:
     Gauge(string operation);
    ~Gauge(); 

    private:
    string _operation;
    steady_clock::time_point _started;
};

