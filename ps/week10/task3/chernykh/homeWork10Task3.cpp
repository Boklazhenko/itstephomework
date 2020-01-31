#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Book
{
private:
    string ID;
    string TITLE;
    string AUTOR;
    string PUBLISHING;
    string GENRE;

public:
    static int const SIZE = 10;

    // Заполнение массива для тестов чтоб не вводить каждый раз.
    void fillingArray(Book arrBooks[])
    {
        for (int i = 0; i < Book::SIZE; i++)
        {
            arrBooks[i].ID = to_string(i + 1);
            arrBooks[i].TITLE = to_string(rand() % 10);
            arrBooks[i].AUTOR = to_string(rand() % 10);
            arrBooks[i].PUBLISHING = to_string(rand() % 10);
            arrBooks[i].GENRE = to_string(rand() % 10);
        }
    }

    // вывод в консоль 
    void print(Book arrBooks)
    {
        if (arrBooks.ID == to_string(1))
        {
            cout.width(7);
            cout << "ID |" << " Title\t\t|" << " Autor\t\t|" << " Publishing\t|" << " Genre\t\t|" << endl;
            for (int i = 0; i < 73; i++)
            {
                cout << "-";
            }
            cout << endl;
        }

        cout.width(5);
        cout << arrBooks.ID << " | ";
        cout << arrBooks.TITLE << "\t\t| ";
        cout << arrBooks.AUTOR << "\t\t| ";
        cout << arrBooks.PUBLISHING << "\t\t| ";
        cout << arrBooks.GENRE << "\t\t|" << endl;
        cout << endl;
    }

    // Изменение книги
    void editBook(Book& book)
    {
        cout << "Enter book title: "; cin >> TITLE; cout << endl;
        book.TITLE = TITLE;
        cout << "Enter book autor: "; cin >> AUTOR; cout << endl;
        book.AUTOR = AUTOR;
        cout << "Enter book publishing: "; cin >> PUBLISHING; cout << endl;
        book.PUBLISHING = PUBLISHING;
        cout << "Enter book genre: "; cin >> GENRE; cout << endl;
        book.GENRE = GENRE;
    }

    //Поиск книги по автору
    void searchForABookByAutor(Book books[], string autor)
    {
        bool flag = true;

        cout << "Books with the specified author:" << endl << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].AUTOR == autor)
            {
                if (i > 0 && i < 2)
                {
                    cout.width(7);
                    cout << "ID |" << " Title\t|" << " Autor\t\t|" << " Publising\t|" << " Genre\t\t|" << endl;
                    for (int i = 0; i < 73; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;
                }

                print(books[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Books with the specified author are not in the database." << endl;
        }

    }    //Поиск книги по названию

    //Поиск книги по названию
    void searchForABookByTitle(Book books[], string title)
    {
        bool flag = true;

        cout << "Books with the specified title:" << endl << endl;

        cout.width(7);
        cout << "ID |" << " Title\t|" << " Autor\t\t|" << " Publishing\t|" << " Genre\t\t|" << endl;
        for (int i = 0; i < 73; i++)
        {
            cout << "-";
        }
        cout << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].TITLE == title)
            {
                print(books[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Books with the specified author are not in the database." << endl;
        }
    }

    // Сортировка по названию
    void sortingArrayTitle(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].TITLE > books[j + 1].TITLE)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].ID = to_string(i + 1);
        }
    }

    // Сортировка по автору
    void sortingArrayAutor(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].AUTOR > books[j + 1].AUTOR)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].ID = to_string(i + 1);
        }
    }

    // Сортировка по издательству
    void sortingArrayPublishing(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].PUBLISHING > books[j + 1].PUBLISHING)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].ID = to_string(i + 1);
        }
    }
};

int main()
{
    Book arrBooks[Book::SIZE];
    Book books;
    srand(time(0));

    bool yesNo = true;
    int numMenu = 0;
    int temp;
    string tempStr;

    // Заполнение массива для тестов чтоб не вводить каждый раз.
    books.fillingArray(arrBooks);

    do
    {
        cout << "\t\tMENU" << endl;
        cout << "\t1. Print all books; " << endl; // При необходимости можно организовать бесконечный массив данных.
        cout << "\t2. Edit book; " << endl;
        cout << "\t3. Search book by autor; " << endl;
        cout << "\t4. Search book by title;" << endl;
        cout << "\t5. Sort array by title of books;" << endl;
        cout << "\t6. Sort array by autor of books;" << endl;
        cout << "\t7. Sort array by publising;" << endl;
        cout << "\t8. Exit." << endl; cout << endl;

        cout << "\tEnter menu number: "; cin >> numMenu; cout << endl;

        if (numMenu == 1)
        {
            for (Book number : arrBooks)
            {
                books.print(number);
            }

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 2)
        {
            cout << "Books in database: " << endl;
            for (Book number : arrBooks)
            {
                books.print(number);
            }
            cout << endl;

            cout << "Enter the id number of the book to change: "; cin >> temp;

            if (temp > 0 || temp <= 10)
            {
                books.editBook(arrBooks[temp - 1]);
            }
            else
            {
                cout << "Books with such Id are not in the database." << endl;
            }

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 3)
        {
            cout << "Enter autor: "; cin >> tempStr;

            books.searchForABookByAutor(arrBooks, tempStr);

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 4)
        {
            cout << "Enter title: "; cin >> tempStr;

            books.searchForABookByTitle(arrBooks, tempStr);

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 5)
        {
            books.sortingArrayTitle(arrBooks);

            for (Book number : arrBooks)
            {
                books.print(number);
            }

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 6)
        {
            books.sortingArrayAutor(arrBooks);

            for (Book number : arrBooks)
            {
                books.print(number);
            }

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 7)
        {
            books.sortingArrayPublishing(arrBooks);

            for (Book number : arrBooks)
            {
                books.print(number);
            }

            cout << endl;
            cout << "Press any button to return to the menu.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 8)
        {
            yesNo = false;
        }
    } while (yesNo);

    cout << endl << endl;
    system("pause>null");
}