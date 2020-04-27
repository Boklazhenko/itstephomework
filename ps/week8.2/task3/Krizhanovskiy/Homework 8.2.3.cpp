//	Задание 3: 
//	Написать функцию, которая вставляет в строку в указанную позицию заданный символ.

#include <iostream>

void symb_ins(char* Line, int Size, int Pos, char Symb)
{
    setlocale(LC_ALL, "rus");

    for (int i = Size; i > Pos - 2; i--)                          //    Сдвиг массива вправо до места вставки
        Line[i + 1] = Line[i];

    Line[Pos - 1] = Symb;                                         //   Вставка символа

    std::cout << "Строка после вставки символа: ";
    std::cout << Line ;
}

void main()
{
    setlocale(LC_ALL, "rus");

    char line[100] = "abcdef";                                    //    Объявление исходных данных
    char symb = 'X';                                              //
    int pos = 3;                                                  //
    int size = 0;                                                 //

    while (line[size])                                            //    Подсчёт размера массива
        size++;

    std::cout << "Исходная строка: ";
    std::cout << line << std::endl;

    symb_ins(line, size, pos, symb);
    std::cout << std::endl;
}