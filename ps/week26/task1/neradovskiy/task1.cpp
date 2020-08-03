#include <iostream>
#include "Dog.h"
#include "Parrot.h"
#include "Cat.h"


int main()
{
    Dog dog("Jack", 4);
    Cat cat("Muha", 4);
    Parrot parrot("Kesha", 2);
    std::cout << dog.getName() << " " << dog.getPawsCount() << std::endl;
    std::cout << cat.getName() << " " << cat.getPawsCount() << std::endl;
    std::cout << parrot.getName() << " " << parrot.getPawsCount() << std::endl;
}
