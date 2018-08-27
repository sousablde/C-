#include <iostream>

using namespace std;

class Animal {
private:
    string name;

public:
    void setName(string name) { this->name = name; };//change name of the object
    //should be const because it is not changing instance data
    void speak() const { cout << "My name is: " << name << endl; }//does not change any instance data of the class

};

int main() {

    const int VALUE = 7;
    VALUE = 10; //since value is a const, this line does not compile
    cout << VALUE << endl;
    /*
     * output
     * 7
     */

    const double PI = 3.141592;
    cout << PI << endl;

    Animal animal;
    animal.setName("Freddy");
    animal.speak();

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

    return 0;
}
