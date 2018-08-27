#include <iostream>

using namespace std;

class Animal {
private:
    string name;

public:
    //constructor
    Animal() { cout << "Animal created.<<endl;" }

    //this constructor copies the fields for the other animal
    Animal(const Animal &other) {
        name = other.name;
        cout << "Animal created by copying" << endl;
    }

    void setName(string name) { this->name = name; };//change name of the object
    //should be const because it is not changing instance data

    void speak() const { cout << "My name is: " << name << endl; }//does not change any instance data of the class

};

int main() {
/*
 *
 * Use of const keyword
 *
 *
 */
    const int VALUE = 7;
    VALUE = 10; //since value is a const, this line does not compile
    cout << VALUE << endl;
    /*
     * output
     * 7
     */
    const double PI = 3.141592;
    cout << PI << endl;

    int value = 8;

    // const int * const pValue = &value;
    int *pValue = &value;

    //dereferencing the pointer and getting the value 8
    cout << *pValue << endl;

    int number = 11;
    pValue = &number; // Error with this: int * const pValue = &value;
    cout << *pValue << endl;
    /*
     * output is 11
     */

    //pointer to an int that is constant
    //can't change the int that the pointer points at
    const int *pValue = &value;
    cout << *pValue << endl;
    *pValue = 12; // Error with this: const int *pValue = &value; because we are trying to change the pointer value

    //with this we have a constant pointer to an int, int is not constant anymore, just the pointer is constant
    //since we can't reassign a pointer this: pValue = &number; will give error
    int *const pValue = &value;
    cout << *pValue << endl;

    /*
     *
     *
     * Copy constructors
     *
     *
     */
    Animal animal1;
    Animal animal2 = animal1;//assigning animal1 to animal2 means we are using a copy constructor to copy info from one
    //object to another
    animal1.speak();
    animal2.speak();
    /*
     * ouptput
     * My name is Freddy
     * My name is Freddy
     */

    //after adding the constructor inside the class:
    animal2.setName("Bob");
    animal2.speak();
    /*
     *
     * output
     *Animal Created
     * My name is Freddy
     * My name is Bob
     *
     */

    return 0;
}
