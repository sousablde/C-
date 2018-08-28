#include <iostream>

using namespace std;

class Animal {
private:
    string name;

public:
    //constructor
    Animal() {
        cout << "Animal created." << endl;
    }

    //copy constructor
    Animal(const Animal &other) :
            name(other.name) {
        cout << "Animal created by copying." << endl;
    }

    //destructor
    ~Animal() {
        cout << "Destructor called" << endl;
    }

    //setter
    void setName(string name) {
        this->name = name;
    }

    //speak method
    void speak() const {
        cout << "My name is: " << name << endl;
    }
};


int main() {
    //the new operator allocates memory for a single object
    Animal *pCat1 = new Animal();
    //we can't call a setter on a pointer, only on an object
    //so we will have to to dereference syntax on pCat1
    //if we did it like this: *pCat1.setName("Freddy"); the dot operator would have higher precedence
    //so it would miss the the dereference in *pCat1
    //we could do this : (*pCat1).setName("Freddy"); and in this case we could use regular dot syntax
    //but, it is ugly, hence the use of ->
    //to use new we always have to use delete after to deallocate memory
    pCat1->speak();
    delete pCat1;

    cout << sizeof(pCat1) << endl;

    return 0;
}
