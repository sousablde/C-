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
        cout << name << ": " << age << flush;
    }

    bool operator<(const Person &other) const //all consts so no variable can be permanently changed
    {
        //compare the ages instead of just names (same names but different ages will be seen as 2 != entities
        if (name == other.name) {
            return age < other.age;
        } else {
            return name < other.name;

        }
    }
};


int main() {

    map<Person, int> people;

/*
    people[0]=Person("Mike", 40);
    people[1]=Person("Vic", 30);
    people[2]=Person("Raj", 20);

    people.insert((make_pair(55, Person("Bob", 45))));//copy constructor is called here
*/
    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 40)] = 30;//updates value in map
    people[Person("Vic", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;

    }

    return 0;
}
/*
 * output
 * C:\Users\sousa\Desktop\github\C++\ObjectsAsMapKeys\cmake-build-debug\ObjectsAsMapKeys.exe
   copy constructor running
   copy constructor running
   copy constructor running
   30: Mike: 40
   20: Raj: 20
   30: Vic: 30

Process finished with exit code 0
 *
 */