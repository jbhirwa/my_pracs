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
        personlist_.people[i].name = "Jane Doe";
    }
    return personlist_;
}

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList personlist_;
    personlist_.numPeople = pl.numPeople;
    personlist_.people = new Person[personlist_.numPeople];
    for (int i = 0; i < personlist_.numPeople; i++)
    {
        personlist_.people[i].age = pl.people[i].age;
        personlist_.people[i].name = pl.people[i].name;
    }
    return personlist_;
}