#include "Person.h"
#include <iostream>

PersonList createPersonList(int n)
{
    PersonList personlist_;
    personlist_.numPeople = n;
    personlist_.people = new Person[n];

    for (int i = 0; i < n; i++)
    {
        personlist_.people[i].age = 1;
        personlist_.people[i].name = "John Doe";
    }
    return personlist_;
}