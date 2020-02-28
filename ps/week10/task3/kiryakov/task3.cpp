#include <iostream>
#include <string>
using namespace std;

struct Book {
	string Name;
	string Author;
	string Publish;
	string Genre;
};

void printBook(Book book) {
	cout << "Author: " << book.Author << endl;
	cout << "Name: " << book.Name << endl;
	cout << "Publishing house: " << book.Publish << endl;
	cout << "Genre : " << book.Genre << endl << endl;
}
void printLibrary(Book library[], int size) {
	for (int i = 0; i < size; ++i)
		printBook(library[i]);
	cout << endl;
}

void searchForAuthor(Book library[], int size, string key) {

	for (int i = 0; i < size; ++i) {
		if (library[i].Author == key)
			printBook(library[i]);
	}
}
void searchForName(Book library[], int size, string key) {

	for (int i = 0; i < size; ++i) {
		if (library[i].Name == key)
			printBook(library[i]);
	}
}

void editBook(Book library[], int size, string key, string newValue) {
	for (int i = 0; i < size; ++i) {
		if (library[i].Name == key) {
			cout << "Enter new book`s name\n";
			getline(cin, newValue);
			library[i].Name = newValue;
			cout << "Enter new book`s author\n";
			getline(cin, newValue);
			library[i].Author = newValue;
			cout << "Enter new book`s publishing house\n";
			getline(cin, newValue);
			library[i].Publish = newValue;
			cout << "Enter new book`s genere\n";
			getline(cin, newValue);
			library[i].Genre = newValue;
		}
	}
}

void sortLibByName(Book library[], int size)  
{                                           
	Book tempBook;                           
	for (int i = 0; i < size - 1; i++) {    
		for (int j = 0; j < size - i - 1; j++) {
			if (library[j].Name > library[j + 1].Name)
			{
				tempBook = library[j];
				library[j] = library[j + 1];
				library[j + 1] = tempBook;
			}
		}
	}
}
void sortLibByAuthor(Book library[], int size)
{
	Book tempBook;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (library[j].Author > library[j + 1].Author)
			{
				tempBook = library[j];
				library[j] = library[j + 1];
				library[j + 1] = tempBook;
			}
		}
	}
}
void sortLibByPublish(Book library[], int size)
{
	Book tempBook;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (library[j].Publish > library[j + 1].Publish)
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
	Book book1 = { "Master and Margarita","Bulgakov","promo","novel" };
	Book book2 = { "Heart of a dog","Bulgakov","promo","novel" };
	Book book3 = { "Echo labirynths","Frai","rosa","fantasy" };
	Book book4 = { "Crime and punishment","Dostoevsky","rosa","novel" };
	Book book5 = { "Poems","Pushkin","svet","poem" };
	Book book6 = { "Poems","Lermontov","promo","poem" };
	Book book7 = { "It","King","promo","horror" };
	Book book8 = { "Hobbit","Tolkien","zarya","fantasy" };
	Book book9 = { "Woe from Wit","Griboedov","promo","novel" };
	Book book10 = { "All red","Hmelevskaya","rosa","humor detective" };
	const uint8_t size = 10;
	Book library[size] = { book1,book2,book3,book4,book5,book6,book7,book8,book9,book10 };
	printLibrary(library, size);
	string key;
	cout << "Books of which author do you want to see\n";
	getline(cin, key);
	cout << endl;
	searchForAuthor(library, size, key);
	cout << "Books whith which title do you want to see\n";
	getline(cin, key);
	cout << endl;
	searchForName(library, size, key);
	cout << "Books whith which title do you want to edit\n";
	getline(cin, key);
	cout << endl;
	string newValue;
	editBook(library, size, key, newValue);
	printLibrary(library, size);
	cout << "----------------------------" << endl;
	sortLibByName(library, size);
	printLibrary(library, size);
	cout << "----------------------------" << endl;
	sortLibByAuthor(library, size);
	printLibrary(library, size);
	cout << "----------------------------" << endl;
	sortLibByPublish(library, size);
	printLibrary(library, size);
	cout << "----------------------------" << endl;
}