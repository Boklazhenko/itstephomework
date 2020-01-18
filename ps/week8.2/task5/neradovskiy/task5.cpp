#include <iostream>

int main()
{
    std::cout << "Enter text:\n";
    const int size = 256;
    char line[size];
    gets_s(line, size);
    std::cout << "Enter simbold for search: ";
    char simbol;
    std::cin >> simbol;
    int count = 0;
    for (int i = 0; i < size; ++i)
        if (line[i] == simbol)
            ++count;
    std::cout << "In line " << count << " \"" << simbol << "\"" << std::endl;
}