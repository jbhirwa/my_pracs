#include "person.h"
#include <iostream>

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