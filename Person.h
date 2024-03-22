#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

struct Person
{
    std::string name;
    int age;
};

struct PersonList
{
    Person *people;
    int numPeople;
};

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

Person *createPersonArray(int n);
PersonList createPersonList(int n);
PersonList deepCopyPersonList(PersonList pl);
PersonList shallowCopyPersonList(PersonList pl);

#endif