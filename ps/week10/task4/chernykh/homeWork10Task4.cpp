#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Car
{
    static int const SIZE = 10;
    string ID;
    string TITLE;
    string COLOR;
    string NUMBER;

    // вывод в консоль 
    static void printCars(Car arrCars)
    {
        if (arrCars.ID == to_string(1))
        {
            cout.width(7);
            cout << "ID |" << " Title\t|" << " Color\t\t|" << " Number\t\t|" << endl;
            for (int i = 0; i < 57; i++)
            {
                cout << "-";
            }
            cout << endl;
        }

        cout.width(5);
        cout << arrCars.ID << " | ";
        cout << arrCars.TITLE << "\t\t| ";
        cout << arrCars.COLOR << "\t\t| ";
        cout << arrCars.NUMBER << "\t\t| ";
        cout << endl;
    }

    // Редактирование машины
    void editCar()
    {
        cout << "Enter car model: "; cin >> TITLE; cout << endl;
        this->TITLE = TITLE;
        cout << "Enter car color: "; cin >> COLOR; cout << endl;
        this->COLOR = COLOR;
        cout << "Enter number: "; cin >> NUMBER; cout << endl;
        this->NUMBER = NUMBER;
    }

    //Поиск машины по номеру или части номера
    void searchForNumber(Car car[], string number)
    {
        bool flag = true;

        cout << "Cars with the specified number:" << endl << endl;

        cout.width(7);
        cout << "ID |" << " Title\t|" << " Color\t\t|" << " Number\t\t|" << endl;
        for (int i = 0; i < 57; i++)
        {
            cout << "-";
        }
        cout << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (car[i].NUMBER == number)
            {
                printCars(car[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "The car with the specified number is not in the database." << endl;
        }
    }
};

int main()
{
    Car arrCar[Car::SIZE];
    Car cars;
    srand(time(0));

    bool yesNo = true;
    int numMenu = 0;
    int temp;
    string tempStr;

    // Заполнение массива для тестов чтоб не вводить каждый раз.
    for (int i = 0; i < Car::SIZE; i++)
    {
        arrCar[i].ID = to_string(i + 1);
        arrCar[i].TITLE = to_string(rand() % 10);
        arrCar[i].COLOR = to_string(rand() % 10);
        arrCar[i].NUMBER = to_string(rand() % 10);
    }

    do
    {
        cout << "\t\tMENU" << endl;
        cout << "\t1. Print all cars; " << endl;
        cout << "\t2. Edit car; " << endl;
        cout << "\t3. Search car by number; " << endl;
        cout << "\t4. Exit." << endl; cout << endl;

        cout << "\tEnter menu number: "; cin >> numMenu; cout << endl;

        if (numMenu == 1)
        {
            for (Car number : arrCar)
            {
                Car::printCars(number);
            }

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 2)
        {
            cout << "Cars in database: " << endl;
            for (Car number : arrCar)
            {
                Car::printCars(number);
            }
            cout << endl;

            cout << "Enter number car id for edit: "; cin >> temp;

            if (temp > 0 || temp <= 10)
            {
                arrCar[temp - 1].editCar();
            }
            else
            {
                cout << "Car with such an Id are not in the database." << endl;
            }

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 3)
        {
            cout << "Enter number for search: "; cin >> tempStr;

            cars.searchForNumber(arrCar, tempStr);

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 4)
        {
            yesNo = false;
        }
    } while (yesNo);

    cout << endl << endl;
    system("pause>null");
}