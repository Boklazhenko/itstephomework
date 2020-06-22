//Реализовать шаблонный класс «Очередь» на основе двусвязного списка

#include "Deqeu.h"
#include <string>

using namespace std;

int main() 
{
	Deque<int> di;
	for (int i = 0; i < 10; ++i) {
		di.addBegin(i);
		di.addEnd(i);
	}

	while (!di.isEmpty())
		cout << di.outBegin() << ' ';
	cout << endl;

	Deque<string> ds;
	ds.addBegin("ALGOL");
	ds.addBegin("PASCAL");

	string s1("JAVA2");
	ds.addBegin(move(s1));

	string s2 = "FORTRAN";
	ds.addEnd(move(s2));
	ds.addEnd("PYTHON");

	while (!ds.isEmpty()) {
		cout << ds.End() << endl;
		ds.popEnd();
	}

	return 0;
}