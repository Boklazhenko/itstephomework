// hw1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "StackInList.h"

int main()
{
	StackInList<int> st;
	std::cout << st.isEmpty() << std::endl;
	std::cout << st.size() << std::endl;
	st.push(77);
	st.push(88);
	std::cout << st.size() << std::endl;
	for (int i = 0; i <= st.size(); ++i) {
		std::cout << st.top() << std::endl;
		st.pop();
	}
	std::cout << st.size() << std::endl;
}

