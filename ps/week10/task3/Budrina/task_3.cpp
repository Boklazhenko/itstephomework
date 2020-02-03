﻿/*
    Разработайте программу «Библиотека». Создайте структуру «Книга» (название, автор,
    издательство, жанр). Создайте массив из 10 книг. Реализуйте для него следующие возможности:
    - Редактировать книгу
    - Печать всех книг
    - Поиск книг по автору
    - Поиск книги по названию
    - Сортировка массива по названию книг
    - Сортировка массива по автору
    - Сортировка массива по издательству
*/

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <cstring>
using namespace std;

struct Book
{
private:
    string id;
    string title;
    string autor;
    string publishing;
    string genre;

public:
    static int const SIZE = 10;

    // Заполнение массива для тестов чтоб не вводить каждый раз.
    void fillingArray(Book arrBooks[])
    {
        for (int i = 0; i < Book::SIZE; i++)
        {
            arrBooks[i].id = to_string(i + 1);
            arrBooks[i].title = to_string(rand() % 10);
            arrBooks[i].autor = to_string(rand() % 10);
            arrBooks[i].publishing = to_string(rand() % 10);
            arrBooks[i].genre = to_string(rand() % 10);
        }
    }

    // вывод в консоль 
    void print(Book arrBooks)
    {
        if (arrBooks.id == to_string(1))
        {
            cout.width(7);
            cout << "ID |" << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
            for (int i = 0; i < 73; i++)
            {
                cout << "-";
            }
            cout << endl;
        }

        cout.width(5);
        cout << arrBooks.id << " | ";
        cout << arrBooks.title << "\t\t| ";
        cout << arrBooks.autor << "\t\t| ";
        cout << arrBooks.publishing << "\t\t| ";
        cout << arrBooks.genre << "\t\t|" << endl;
        cout << endl;
    }

    // Изменение книги
    void editBook(Book& book)
    {
        cout << "Введите название книги: "; cin >> title; cout << endl;
        book.title = title;
        cout << "Введите атора книги: "; cin >> autor; cout << endl;
        book.autor = autor;
        cout << "Введите издательство книги: "; cin >> publishing; cout << endl;
        book.publishing = publishing;
        cout << "Введите жанр книги: "; cin >> genre; cout << endl;
        book.genre = genre;
    }

    //Поиск книги по автору
    void searchForABookByAutor(Book books[], string autor)
    {
        bool flag = true;

        cout << "Книги с указанным автором:" << endl << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].autor == autor)
            {
                if (i > 0 && i < 2)
                {
                    cout.width(7);
                    cout << "ID |" << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
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
            cout << "Книги с указанным автором нет в базе." << endl;
        }

    }    

    //Поиск книги по названию
    void searchForABookByTitle(Book books[], string title)
    {
        bool flag = true;

        cout << "Книги с указанным названием:" << endl << endl;

        cout.width(7);
        cout << "ID |" << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
        for (int i = 0; i < 73; i++)
        {
            cout << "-";
        }
        cout << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].title == title)
            {
                print(books[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Книги с указанным названием нет в базе." << endl;
        }
    }

    // Сортировка по названию
    void sortingArrayTitle(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].title > books[j + 1].title)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].id = to_string(i + 1);
        }
    }

    // Сортировка по автору
    void sortingArrayAutor(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].autor > books[j + 1].autor)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].id = to_string(i + 1);
        }
    }

    // Сортировка по издательству
    void sortingArrayPublishing(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].publishing > books[j + 1].publishing)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].id = to_string(i + 1);
        }
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
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
        cout << "\t\tМЕНЮ" << endl;
        cout << "\t1. Печать всех книг; " << endl; // При необходимости можно организовать бесконечный массив данных.
        cout << "\t2. Редактировать книгу; " << endl;
        cout << "\t3. Поиск книг по автору; " << endl;
        cout << "\t4. Поиск книги по названию;" << endl;
        cout << "\t5. Сортировка массива по названию книг;" << endl;
        cout << "\t6. Сортировка массива по автору;" << endl;
        cout << "\t7. Сортировка массива по издательству;" << endl;
        cout << "\t8. Выход." << endl; cout << endl;

        cout << "\tВведите номер меню: "; cin >> numMenu; cout << endl;

        if (numMenu == 1)
        {
            for (Book number : arrBooks)
            {
                books.print(number);
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 2)
        {
            cout << "Книги в базе: " << endl;
            for (Book number : arrBooks)
            {
                books.print(number);
            }
            cout << endl;

            cout << "Введите номер id книги для изменения: "; cin >> temp;

            if (temp > 0 || temp <= 10)
            {
                books.editBook(arrBooks[temp - 1]);
            }
            else
            {
                cout << "Книги с таким Id нет в базе." << endl;
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 3)
        {
            cout << "Введите автора: "; cin >> tempStr;

            books.searchForABookByAutor(arrBooks, tempStr);

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 4)
        {
            cout << "Введите название: "; cin >> tempStr;

            books.searchForABookByTitle(arrBooks, tempStr);

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
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
            cout << "Нажми любую кнопку для возврата к меню.";
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
            cout << "Нажми любую кнопку для возврата к меню.";
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
            cout << "Нажми любую кнопку для возврата к меню.";
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
}

