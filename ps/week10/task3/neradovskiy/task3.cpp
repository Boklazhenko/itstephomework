#include <iostream>

struct Book
{
	char title[100];
	char author[100];
	char publishingHouse[100];
	char genre[100];
};
void editBook(Book& book, int option, char value[]);
void printLibrary(Book library[], int size);
void printBook(Book book);
Book* searchAuthor(Book library[], int librarySize, char author[], int& sizeAfterSearch);
Book* searchTitle(Book library[], int librarySize, char title[], int& sizeAfterSearch);
void quickSortTitle(Book library[], int size);
void quickSortAuthor(Book library[], int size);
void quickSortPublishHouse(Book library[], int size);
enum Option { Title, Author, PublishingHouse, Genre };


int main()
{
	Book varAndPeace, idiot, markTwen, math, cookBook, stalker, eragon, metro2033, whiteTiger, karicWorld;
	varAndPeace = { "Var And Peace", "Tolstoy", "Booka", "Novel" };
	markTwen = { "On the lung", "Vasia", "Drozd", "Story" };
	idiot = { "Idiot", "Dostoevskiy", "Shabash pechat", "Novel" };
	math = { "Maths", "Vasia", "Shabash pechat", "Tutorial" };
	cookBook = { "Cooking book", "Vasia", "Shabash pechat", "Tutorial" };
	stalker = { "S.T.A.L.K.E.R.", "Vasia","Shabash pechat", "Fantasy" };
	eragon = { "Eragon", "Vasia", "Shabash pechat", "Fantasy" };
	metro2033 = { "Metro 2033", "Vasia", "Shabash pechat", "Fantasy" };
	whiteTiger = { "White tiger", "Vasia", "Shabash pechat", "Lit RPG" };
	karicWorld = { "World of Karik", "Vasia", "Shabash pechat", "Lit RPG" };
	const int size = 10;
	enum Option { Title, Autor, PublishingHouse, Genre };
	Book library[size] = { varAndPeace, idiot, markTwen, math, cookBook, stalker, eragon, metro2033, whiteTiger, karicWorld };
	printLibrary(library, size);
	char temp[] = "Vasia";
	editBook(idiot, 1, temp);
	printBook(idiot);
	std::cout << "#######################################\n";
	char autorForSearch[] = "Vasia";
	int sizeAfterSearch;
	Book* pScanAuthor = searchAuthor(library, size, autorForSearch, sizeAfterSearch);	//Возвращает указатель на кучу не забыть удалить
	if (pScanAuthor == nullptr) {
		std::cout << "Book not found";
	}
	else {

		printLibrary(pScanAuthor, sizeAfterSearch);
	}

	char titleForScan[] = "Var And Peace";
	Book* pScanTitle = searchTitle(library, size, titleForScan, sizeAfterSearch);
	if (pScanTitle == nullptr) {
		std::cout << "Book not found";
	}
	else {
		printLibrary(pScanTitle, sizeAfterSearch);
	}

	std::cout << "------------------\n";
	quickSortPublishHouse(library, size);
	printLibrary(library, size);
	delete[] pScanAuthor, pScanTitle;
}
void editBook(Book& book, int option, char value[]) {
	int size = strlen(value);
	if (option == 0) {
		for (int i = 0; i < size; ++i)
			book.title[i] = value[i];
		book.title[size] = '\0';
	}
	else if (option == 1) {
		for (int i = 0; i < size; ++i)
			book.author[i] = value[i];
		book.author[size] = '\0';
	}
	else if (option == 2) {
		for (int i = 0; i < size; ++i)
			book.publishingHouse[i] = value[i];
		book.publishingHouse[size] = '\0';
	}
	else if (option == 3) {
		for (int i = 0; i < size; ++i)
			book.genre[i] = value[i];
		book.genre[size] = '\0';
	}
}
void printLibrary(Book library[], int size) {
	for (int i = 0; i < size; ++i)
		printBook(library[i]);
	std::cout << std::endl;
}
void printBook(Book book) {
	std::cout << "Title: " << book.title << std::endl;
	std::cout << "Autor: " << book.author << std::endl;
	std::cout << "Publishing house: " << book.publishingHouse << std::endl;
	std::cout << "Genre: " << book.genre << std::endl;
	std::cout << "\n\n";
}
Book* searchAuthor(Book library[], int librarySize, char author[], int& sizeAfterSearch) {
	sizeAfterSearch = 0;
	for (int x = 0; x < librarySize; ++x)
		if (strcmp(library[x].author, author) == 0)
			sizeAfterSearch++;
	int count = 0;
	Book* afterSearch = new Book[sizeAfterSearch];
	for (int i = 0; i < librarySize; ++i)
		if (strcmp(library[i].author, author) == 0) {
			afterSearch[count++] = library[i];
		}
	return sizeAfterSearch > 0 ? afterSearch : nullptr;
}
Book* searchTitle(Book library[], int librarySize, char title[], int& sizeAfterSearch) {
	sizeAfterSearch = 0;
	for (int x = 0; x < librarySize; ++x)
		if (strcmp(library[x].title, title) == 0)
			sizeAfterSearch++;
	int count = 0;
	Book* afterSearch = new Book[sizeAfterSearch];
	for (int i = 0; i < librarySize; ++i)
		if (strcmp(library[i].title, title) == 0) {
			afterSearch[count++] = library[i];
		}
			return sizeAfterSearch > 0 ? afterSearch : nullptr;
}
void quickSortTitle(Book library[], int size) {
	int left = 0, right = size - 1;
	int centr;
	Book temp;
	centr = size / 2;
	do {
		while (strcmp(library[left].title, library[centr].title) < 0) {
			left++;
		}
		while (strcmp(library[right].title, library[centr].title) > 0)
		{
			right--;
		}
		if (strcmp(library[left].title, library[right].title) >= 0) {
			temp = library[left];
			library[left] = library[right];
			library[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);
	if (right > 0) quickSortTitle(library, right + 1);
	if (size > left) quickSortTitle(library + left, size - left);
}
void quickSortAuthor(Book library[], int size) {
	int left = 0, right = size - 1;
	int centr;
	Book temp;
	centr = size / 2;
	do {
		while (strcmp(library[left].author, library[centr].author) < 0) {
			left++;
		}
		while (strcmp(library[right].author, library[centr].author) > 0)
		{
			right--;
		}
		if (strcmp(library[left].author, library[right].author) >= 0) {
			temp = library[left];
			library[left] = library[right];
			library[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);
	if (right > 0) quickSortAuthor(library, right + 1);
	if (size > left) quickSortAuthor(library + left, size - left);
}
void quickSortPublishHouse(Book library[], int size) {
	int left = 0, right = size - 1;
	int centr;
	Book temp;
	centr = size / 2;
	do {
		while (strcmp(library[left].publishingHouse, library[centr].publishingHouse) < 0) {
			left++;
		}
		while (strcmp(library[right].publishingHouse, library[centr].publishingHouse) > 0)
		{
			right--;
		}
		if (strcmp(library[left].publishingHouse, library[right].publishingHouse) >= 0) {
			temp = library[left];
			library[left] = library[right];
			library[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);
	if (right > 0) quickSortPublishHouse(library, right + 1);
	if (size > left) quickSortPublishHouse(library + left, size - left);
}