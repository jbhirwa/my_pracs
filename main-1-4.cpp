#include <iostream>
#include "person.h"

int main()
{
    int size = 5;
    PersonList personlist_ = createPersonList(size);

    for (int i = 0; i < size; i++)
        std::cout << personlist_.people[i].age << personlist_.people[i].name << std::endl;
    for (int i = 0; i < size; i++)
        personlist_.people[i].age = i + 1;

    PersonList personlist_2 = shallowCopyPersonList(personlist_);
    for (int i = 0; i < size; i++)
        std::cout << personlist_2.people[i].age << personlist_2.people[i].name << std::endl;
    return 0;
}