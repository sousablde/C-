//
// Created by sousa on 8/23/2018.
//

#include "Person.h"

/*removed this portion of code because I am using initialization lists for the constructor
Person::Person(){
    age=0;
    name=" ";
}
 */

/*
 * removed this portion of code because I am using initialization lists for the constructor
Person::Person(string name, int age){
    this->name=name;// we are refering to name the parameter created in the class as private


      it would be the same as having:
     Person::Person(string newName, int age){
      name = newName
      }
      if I tey to output this it will give me the memory location of the object

    this->age = age;
}
 */

string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str();
}




