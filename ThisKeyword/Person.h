//
// Created by sousa on 8/23/2018.
//

#ifndef THISKEYWORD_PERSON_H
#define THISKEYWORD_PERSON_H

#include <iostream>
#include <sstream>

using namespace std;


class Person {
private:
    string name;
    int age;

public:

    Person() : name("unnamed"), age(0) {};

    Person(string name, int age) : name(name), age(age) {};

    string toString();
};


#endif //THISKEYWORD_PERSON_H
