#include <iostream>

#include "person.h"

int main(int, char**) {
    Person person(10);
    std::cout << "Person age is " << person.age() << std::endl;
}
