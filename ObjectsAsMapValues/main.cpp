#include <iostream>
#include <map>//storing key value pairs, works like key value table

using namespace std;


class Person {
private:
    string name;
    int age;
public:
    //to have a map work properly we need to have a constructor with no parameters so we can assign values to it

    Person() : name(""), age(0) {}

    Person(string name, int age) : name(name), age(age) {}

    //adding a copy constructor
    Person(const Person &other) {
        cout << "copy constructor running " << endl;
        name = other.name;
        age = other.age;
    }


    void print() const {
        cout << name << ": " << age << endl;
    }
};


int main() {

    map<int, Person> people;

    people[0] = Person("Mike", 40);
    people[1] = Person("Vic", 30);
    people[2] = Person("Raj", 20);

    people.insert((make_pair(55, Person("Bob", 45))));//copy constructor is called here


    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->first << ": " << endl;
        it->second.print();
    }

    return 0;
}