//	������� 3: 
//	�������� �������, ������� ��������� � ������ � ��������� ������� �������� ������.

#include <iostream>

void symb_ins(char* Line, int Size, int Pos, char Symb)
{
    setlocale(LC_ALL, "rus");

    for (int i = Size; i > Pos - 2; i--)                          //    ����� ������� ������ �� ����� �������
        Line[i + 1] = Line[i];

    Line[Pos - 1] = Symb;                                         //   ������� �������

    std::cout << "������ ����� ������� �������: ";
    std::cout << Line ;
}

void main()
{
    setlocale(LC_ALL, "rus");

    char line[100] = "abcdef";                                    //    ���������� �������� ������
    char symb = 'X';                                              //
    int pos = 3;                                                  //
    int size = 0;                                                 //

    while (line[size])                                            //    ������� ������� �������
        size++;

    std::cout << "�������� ������: ";
    std::cout << line << std::endl;

    symb_ins(line, size, pos, symb);
    std::cout << std::endl;
}