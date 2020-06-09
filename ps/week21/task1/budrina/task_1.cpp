//Есть строка символов, признаком конца, которой является «; ».
//В строке могут быть фигурные, круглые, квадратные скобки.
//Скобки могут быть открывающими и закрывающими.
//Необходимо проверить корректность расстановки скобок.
//При этом необходимо, чтобы выполнились следующие правила :
//1. Каждая открывающая скобка должна иметь справа такую
//же закрывающую.Обратное также должно быть верно.
//2. Открывающие и закрывающие пары скобок разных
//типов должны быть правильно расположены по отношению друг к другу.
//■ Пример правильной строки : ({ x - y - z }*[x + 2y] - (z + 4x));
//■ Пример неправильной строки : ([x - y - z}*[x + 2y) - {z + 4x)].
//Если все правила соблюдены выведите информационное
//сообщение о корректности строки, иначе покажите строку
//до места возникновения первой ошибки.

#include <iostream>
#include <stack>
using namespace std;

typedef unsigned int uint;
bool isBegEnd(int a, int b);
bool isExpr(const char* s, uint& pos);

struct Binfo {
	int  ch;
	uint pos;
	Binfo(void) {}
	Binfo(int c, uint p) :ch(c), pos(p) {}
};


int main() {
	uint p;
	char s1[] = "({x-y-z}*[x+2y]-(z+4x));";
	if (isExpr(s1, p))
		cout << "Good: " << s1 << endl;
	else
		cout << "Error, strpos: " << s1 + p << endl;


	char s2[] = "([x-y-z}*[x+2y)-{z+4x)].";
	if (isExpr(s2, p))
		cout << " Good: " << s2 << endl;
	else
		cout << "Error, strpos: " << s2 + p << endl;


	return 0;
}



bool isExpr(const char* s, uint& p) {
	const char* t = s;
	stack<Binfo> st;

	for (; *s; ++s) {
		switch (*s) {
		case '(':
		case '{':
		case '[':
			st.push(Binfo(*s, static_cast<uint>(s - t)));
			break;
		case ')':
		case '}':
		case ']':
			if (st.empty() || !isBegEnd(st.top().ch, *s)) {
				p = static_cast<uint>(s - t);
				return false;
			}
			st.pop();
			break;
		}
	}

	bool ret = st.empty();
	for (; !st.empty(); st.pop())
		p = st.top().pos;
	return !*s && ret;
}

bool isBegEnd(int a, int b) {
	return (a == '(' && b == ')') ||
		(a == '{' && b == '}') ||
		(a == '[' && b == ']');
}