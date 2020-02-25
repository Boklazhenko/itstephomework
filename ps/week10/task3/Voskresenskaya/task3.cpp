// Разработайте программу «Библиотека». Создайте структуру «Книга» (название, автор, издательство, жанр). 
//Создайте массив из 10 книг. Реализуйте для него следующие возможности: 
//Редактировать книгу Печать всех книг Поиск книг по автору Поиск книги по названию 
//Сортировка массива по названию книг 
//Сортировка массива по автору Сортировка массива по издательству


#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
struct book {
	char name[30];
	char author[30];
	char publishingHouse[30];
	char gonre[30];
};
void printBook (book a)
{
	cout << "Название книги: " << a.name << endl;
	cout << "Имя автора: " << a.author << endl;
	cout << "Нфзвание издательства: " << a.publishingHouse << endl;
	cout << "Жанр: " << a.gonre << endl;
}
void editBook(book arr[], int size)
{
	
	int answer, i;
	cout << "Если Вы хотите изменить название книги, введите 1" << endl;
	cout << "Если Вы хотите изменить имя автора книги, введите 2" << endl;
	cout << "Если Вы хотите изменить название издательства, введите 3" << endl;
	cout << "Если Вы хотите изменить название жанра книги, введите 4" << endl;
	cout << "Если Вы не хотите редактировать информацию, введит 5" << endl;
	cin >> answer;
	if (answer > 0 && answer < 5)
	{
		cout << "Выберите номер книги, информацию по котoрой хотели бы изменить" << endl;
		cin >> i;
	}
	else
	{
		return;
	}
	while (answer != 5)
	{
		switch (answer)
		{
		case 1:
			cout << "Введите новое названее " << i << " книги" << endl;
			cin >> arr[i].name;
			break;
		case 2:
			cout << "Введите новое имя атора " << i << " книги" << endl;
			cin >> arr[i].author;
			break;
		case 3:
			cout << "Введите  новое название издательства " << i << " книги" << endl;
			cin >> arr[i].publishingHouse;
			break;
		case 4:
			cout << "Введите новое название жанра " << i << " книги" << endl;
			cin >> arr[i].gonre;
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Ошибка, введено некоректное значение." << endl;
			break;
		}
		cout << "Если Вы хотите изменить название книги, введите 1" << endl;
		cout << "Если Вы хотите изменить имя автора книги, введите 2" << endl;
		cout << "Если Вы хотите изменить название издательства, введите 3" << endl;
		cout << "Если Вы хотите изменить название жанра книги, введите 4" << endl;
		cout << "Если Вы не хотите редактировать информацию, введит 5" << endl;
		cin >> answer;
	}
}

book findByName(char name[], book arr[], int size)
{
	
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (_stricmp(name, arr[i].name) == 0)
		{
			return arr[i];
			++count;
		}
	}
	if (count == 0)
	{
		cout << "Книга с таким автором не найдена" << endl;
	}
	
}
book findByAuthor(char author[], book arr[], int size)
{

	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (_stricmp(author, arr[i].author) == 0)
		{
			return arr[i];
			++count;
		}
	}
	if (count == 0)
	{
		cout << "Книга с таким автором не найдена" << endl;
	}
}
void ShowBooks(book arr[], int size)
{
	cout << setw(5) << "Номер" << setw(25) << "Название книги" << setw(25) << "Имя автора" << setw(25)
		<< "Название издательства" << setw(25) << "Название жанра" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << setw(5) << i + 1 << setw(25) << arr[i].name << setw(25) << arr[i].author << setw(25)
			<< arr[i].publishingHouse << setw(25) << arr[i].gonre << endl;
	}
	cout << endl;
}
void sortBookName(book arr[], int size)
{
	char strName[32], strAuthor[32], strPublishingHouse[32], strGonre[32];
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (strcmp(arr[j].name, arr[j + 1].name) > 0)
			{
				strcpy_s(strName, arr[j].name);
				strcpy_s(strAuthor, arr[j].author);
				strcpy_s(strPublishingHouse, arr[j].publishingHouse);
				strcpy_s(strGonre, arr[j].gonre);
				strcpy_s(arr[j].name, arr[j + 1].name);
				strcpy_s(arr[j].author, arr[j + 1].author);
				strcpy_s(arr[j].publishingHouse, arr[j + 1].publishingHouse);
				strcpy_s(arr[j].gonre, arr[j + 1].gonre);
				strcpy_s(arr[j + 1].name, strName);
				strcpy_s(arr[j + 1].author, strAuthor);
				strcpy_s(arr[j + 1].publishingHouse, strPublishingHouse);
				strcpy_s(arr[j + 1].gonre, strGonre);
			}

		}
	}
}

void sortBookAuthor(book arr[], int size)
{
	char strName[32], strAuthor[32], strPublishingHouse[32], strGonre[32];
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (strcmp(arr[j].author, arr[j + 1].author) > 0)
			{
				strcpy_s(strName, arr[j].name);
				strcpy_s(strAuthor, arr[j].author);
				strcpy_s(strPublishingHouse, arr[j].publishingHouse);
				strcpy_s(strGonre, arr[j].gonre);
				strcpy_s(arr[j].name, arr[j + 1].name);
				strcpy_s(arr[j].author, arr[j + 1].author);
				strcpy_s(arr[j].publishingHouse, arr[j + 1].publishingHouse);
				strcpy_s(arr[j].gonre, arr[j + 1].gonre);
				strcpy_s(arr[j + 1].name, strName);
				strcpy_s(arr[j + 1].author, strAuthor);
				strcpy_s(arr[j + 1].publishingHouse, strPublishingHouse);
				strcpy_s(arr[j + 1].gonre, strGonre);
			}

		}
	}
}
void sortBookPublishingHouse(book arr[], int size)
{
	char strName[32], strAuthor[32], strPublishingHouse[32], strGonre[32];
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (strcmp(arr[j].publishingHouse, arr[j + 1].publishingHouse) > 0)
			{
				strcpy_s(strName, arr[j].name);
				strcpy_s(strAuthor, arr[j].author);
				strcpy_s(strPublishingHouse, arr[j].publishingHouse);
				strcpy_s(strGonre, arr[j].gonre);
				strcpy_s(arr[j].name, arr[j + 1].name);
				strcpy_s(arr[j].author, arr[j + 1].author);
				strcpy_s(arr[j].publishingHouse, arr[j + 1].publishingHouse);
				strcpy_s(arr[j].gonre, arr[j + 1].gonre);
				strcpy_s(arr[j + 1].name, strName);
				strcpy_s(arr[j + 1].author, strAuthor);
				strcpy_s(arr[j + 1].publishingHouse, strPublishingHouse);
				strcpy_s(arr[j + 1].gonre, strGonre);
			}

		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	const int quantityBook = 10;
	book library[quantityBook] =
	{ {"Маги без времени", "Лукьяненко Сергей", "Издательство АСТ", "Фэнтези"},
	{"Серьга Артемиды", "Устинова Татьяна", "Издательчтво Эксмо", "Детектив"  },
	{"Запрет на вмешательство", "Глебов Макс", "Издательство Миф", "Фантастика" },
	{"Город Женщин","Гилберт Элизабет", "StorySide AB", "Любовный роман"},
	{"Ореховый Будда", "Акуниy Борис", "Издательство АСТ", "Приключения"},
	{"Воспоминая о будующем", "Хазин Михаил", "РИПОЛ Классик", "Экономика"},
	{"Спасение печени", "Уильям Энтони", "Эксмо", "Здоровье"},
	{"Магия утра", "Хэл Элрод", "Манн, Иванов и Фербер", "Психология" },
	{"Магия кофе", "Майкл Джордан", "Издательство АСТ", "Кулинария" },
	{"Печенье счастья","Хан Черстин Лундберг", "StorySide AB", "Детская литература"} };

	char choice;
	do {
		cout << "Если Вы хотите редактровать  книгу, введите 1" << endl;
		cout << "Если Вы хотите напечатать список книг, введите 2" << endl;
		cout << "Если Вы хотите найти книгу по названию, введите 3" << endl;
		cout << "Если Вы хотите найти книгу по автору, введите 4" << endl;
		cout << "Если Вы хотите отсортированть книги по названию, введите 5" << endl;
		cout << "Если Вы хотите отсортированть книги по автору, введите 6" << endl;
		cout << "Если Вы хотите отсортированть книги по издательству, введите 7" << endl;
		cout << "Если Вы хотите выйти из программы, введите 8" << endl;
		cin >> choice;
		switch (choice)
		{
		case '1':
			editBook(library, quantityBook);
			break;
		case '2':
			ShowBooks(library, quantityBook);
			break;
		case '3':
			cout << "Название книги:" << endl;
			char nameBook[50];
			cin >> nameBook;
			book bookName = findByName(nameBook, library, quantityBook);
			printBook(bookName);
			break;
		case '4':
			cout << "Автор:" << endl;
			char authorBook[50];
			cin >> authorBook;
			book bookAuthor=findByAuthor(authorBook, library, quantityBook);
			printBook(bookAuthor);
			break;
		case '5':
			sortBookName(library, quantityBook);
			ShowBooks(library, quantityBook);
			break;
		case '6':
			sortBookAuthor(library, quantityBook);
			ShowBooks(library, quantityBook);
			break;
		case '7':
			sortBookPublishingHouse(library, quantityBook);
			ShowBooks(library, quantityBook);
			break;
		case '8':
			exit(0);
			break;
		default:
			cout << "Неправильный выбор\n";
			break;
		}
	} while (choice != '8');


	return 0;
}


