#include <iostream>
#include "Person.h"

int main()
{
    int size = 5;
    PersonList personlist_ = createPersonList(size);
    for (int i = 0; i < size; i++)
        std::cout << personlist_.people[i].age << personlist_.people[i].name << std::endl;
    return 0;
}