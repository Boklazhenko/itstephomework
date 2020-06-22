
#include "Array.h"
using namespace std;

int main() {

	setlocale(0, "");
	system("mode con cols=70 lines=70");
	Array<int> test;

	cout << "метод \"GetSize\":\n";
	cout << test.getSize() << endl << endl;

	test.add(1);
	test.add(2);
	test.add(3);
	cout << "метод \"Add\":\n";
	test.show();

	cout << "метод \"GetUpperBound\":\n";
	cout << test.getUpperBound() << endl << endl;

	cout << "метод \"IsEmpty\":\n";
	cout << test.isEmpty() << endl << endl;

	cout << "метод \"GetSize\" (показываем количество элементов массива, под которые выделена память):\n";
	cout << test.getSize() << endl << endl;

	test.setSize(5);
	cout << "метод \"SetSize\" (устанавилваем размер равнывй 5):\n";
	cout << test.getSize() << endl << endl;

	test.setAt(3, 4);
	test.setAt(4, 5);
	cout << "метод \"SetAt\" (устанавилваем значение 4 и 5):\n";
	test.show();

	cout << "метод \"FreeExtra\" (устанавливаем размер 10, используем фри экстра):\n";
	test.setSize(10);
	test.freeExtra();
	cout << test.getSize() << endl << endl;

	cout << "метод \"GetAt\" (Получаем значение 3-го элемента):\n";
	cout << test.getAt(2) << endl << endl;

	cout << "метод \"operator[]\" (Получаем значение 3-го элемента):\n";
	cout << test[2] << endl << endl;

	Array<int> test2;
	test2 = test;
	cout << "метод \"operator=\" (создали второй массив и приравняли первому.)\n";
	test2.show();

	cout << "метод \"GetData\" (Получаем адрес массива):\n";
	cout << test.getData() << endl << endl;

	cout << "метод \"Append\" (Прибавили к первому массиву второй):\n";
	test.appEnd(test2);
	test.show();

	cout << "метод \"InsertAt\" (Вставили во вторую позицию цифру 256):\n";
	test.insertAt(2, 256);
	test.show();

	cout << "метод \"RemoveAt\" (Убрали со второй позиции цифру 256):\n";
	test.removeAt(2);
	test.show();

	return 0;
}