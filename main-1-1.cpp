#include <iostream>
#include "person.h"

int main()
{
    int size = 5;
    // persons is a pointer to person, therefore you need to -> in order to access the member variables
    Person *persons = createPersonArray(size);
    for (int i = 0; i < size; i++)
        std::cout << persons[i].age << persons[i].name << std::endl;
    return 0;
}