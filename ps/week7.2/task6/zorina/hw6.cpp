// Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
//Пользователь вводит a и b. Проиллюстрируйте работу функции примером.
//

#include <iostream>
using namespace std;
int findSum(int start, int end)
{
	if (start == end+1) // можно было сделать условие start>end, но тогда оно не дает выполнить перемену чисел местами, если 1ое>2го,
		return 0;  //если просто равно, тогда последний элемент не плюсуется, поэтому вот так сделала
	if (start>end)
	{
		int temp = start;
		start = end;
			end = temp;
	}
	return start + findSum(start + 1, end);
}

int main()
{
	int start, end;
	cout << "Input the first number\n";
	cin >> start;
	cout <<"Input the second number\n";
	cin >> end;
	cout << "The sum of all numbers between inputed number is "<<findSum(start, end);
}