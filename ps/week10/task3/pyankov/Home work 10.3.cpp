#include <iostream>
using namespace std;

struct Book
{
	string title;
	string author;
	string publishingHouse;
	string genre;
};

void printBook(Book library[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << "Title: \t\t\t" << library[i].title << endl;
		cout << "Author: \t\t" << library[i].author << endl;
		cout << "Genre: \t\t\t" << library[i].genre << endl;
		cout << "Publishing hous: \t" << library[i].publishingHouse << endl;
		cout << endl;

	}

}

void editBook(Book library[], int size, string nameBook)
{
	Book value;

	for (int i = 0; i < size; ++i)
	{
		if (library[i].title == nameBook)
		{
			value = library[i];
			cout << "\nTitle: \t\t\t" << library[i].title << endl;
			cout << "Author: \t\t" << library[i].author << endl;
			cout << "Genre: \t\t\t" << library[i].genre << endl;
			cout << "Publishing hous: \t" << library[i].publishingHouse << endl;
			break;
		}
		else
		{
			cout << "The book is not found" << endl;
		}
	}

	int userInput = 0;
	while (userInput < 1 || userInput >4)
	{
		cout << "\nPress 1 to change the author" << endl;
		cout << "Press 2 to change the name" << endl;
		cout << "Press 3 to change the genre" << endl;
		cout << "Press 4 to change the publishing house" << endl;
		cin >> userInput;
	}

	string newValue;

	if (userInput == 1)
	{
		cout << "Input new author" << endl;
		cin >> newValue;
		value.author = newValue;
	}

	if (userInput == 2)
	{
		cout << "Input new name" << endl;
		cin >> newValue;
		value.title = newValue;
	}

	if (userInput == 3)
	{
		cout << "Input new genre" << endl;
		cin >> newValue;
		value.genre = newValue;
	}

	if (userInput == 4)
	{
		cout << " publishing house" << endl;
		cin >> newValue;
		value.publishingHouse = newValue;
	}





}

int libMenu(int& select)
{



	while (select < 1 || select>8)
	{

		cout << "*********** Library ************" << endl;
		cout << "Press 1 to show all books" << endl;
		cout << "Press 2 to edit a book" << endl;
		cout << "Press 3 to search for books by author" << endl;
		cout << "Press 4 to search for books by name" << endl;
		cout << "Press 5 sorting an array by book name" << endl;
		cout << "Press 6 sorting an array by author" << endl;
		cout << "Press 7 sorting an array by publisher" << endl;
		cout << "Press 8 to exit" << endl;
		cin >> select;
		system("cls");
	}
	return select;
}

void searchBooksAuthor(Book library[], int size, string author)
{
	for (int i = 0; i < size; ++i)
	{

		if (library[i].author == author)
			printBook(library, 10);
		else
		{
			cout << "Nothing found";
		}
	}

}

void searchBookName(Book library[], int size, string name)
{
	for (int i = 0; i < size; ++i)
	{

		if (library[i].author == name)
			printBook(library, 10);
		else
		{
			cout << "Nothing found";
		}
	}

}

// Не знал что можно сразу строки сравнивать, думал нужно побуквенно со всем алфовитом самому сравнивать
// посмотрел у ребят
void sortByAuthor(Book library[], int size)
{
	Book tempBook;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (library[j].author > library[j + 1].author)
			{
				tempBook = library[j];
				library[j] = library[j + 1];
				library[j + 1] = tempBook;
			}
		}
	}
}

void sortByName(Book library[], int size)
{
	Book tempBook;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (library[j].title > library[j + 1].title)
			{
				tempBook = library[j];
				library[j] = library[j + 1];
				library[j + 1] = tempBook;
			}
		}
	}
}

void sortByPublish(Book library[], int size)
{
	Book tempBook;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (library[j].publishingHouse > library[j + 1].publishingHouse)
			{
				tempBook = library[j];
				library[j] = library[j + 1];
				library[j + 1] = tempBook;
			}
		}
	}
}

int main()
{
tryAgain:

	int userSelect = 0;

	Book one = { "1984","George Orwell","Ecsmo", "fantastic" };
	Book two = { "Dandelion wine","Ray Bradbury","Ecsmo","fantastic" };
	Book three = { "To kill a Mockingbird","Harper Lee","Fenix","Foreign classic" };
	Book four = { "The master and Margarita","Mikhail Bulgakov","Ecsmo","Mysticism" };
	Book five = { "Little prince","Antoine de Saint-Exupery","Fenix","Foreign classics" };
	Book six = { "Financier","Theodore Dreiser","Fenix","Foreign classics" };
	Book seven = { "Dead soul","Mikhail Bulgakov","Ecsmo","Drama" };
	Book eight = { "Morphine","Mikhail Bulgakov","Fenix","Drama" };
	Book nine = { "Driving Blind","Ray Bradbury","Ecsmo","fantastic" };
	Book ten = { "Go Set a Watchman","Harper Lee","Fenix","Counterculture" };

	const int size = 10;

	Book library[size] = { one,two,three,four,five,six,seven,eight,nine,ten };

	libMenu(userSelect);



	if (userSelect == 1)
		printBook(library, 10);

	if (userSelect == 2)
	{
		string nameBook;
		cout << "Enter the name of the book " << endl;
		cin >> nameBook;
		editBook(library, 10, nameBook);
	}

	if (userSelect == 3)
	{
		string inputAuthor;
		cout << " Write the author " << endl;
		cin >> inputAuthor;
		searchBooksAuthor(library, 10, inputAuthor);
	}

	if (userSelect == 4)
	{
		string inputName;
		cout << " Write the author " << endl;
		cin >> inputName;
		searchBookName(library, 10, inputName);

	}

	if (userSelect == 5)
	{
		sortByName(library, 10);
		printBook(library, 10);

	}

	if (userSelect == 6)
	{
		sortByAuthor(library, 10);
		printBook(library, 10);
	}

	if (userSelect == 7)
	{
		sortByPublish(library, 10);
		printBook(library, 10);
	}


	if (userSelect == 8)
		return 0;

	


	goto tryAgain;

}

