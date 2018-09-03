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

/*
 *
 * Returning Objects from functions
 * we can create a function that just creates an object
 * we are actually creating a temporary object in this function
 * so this calls a copy constructor and then it is called again in main
 * making this ineficient if we do not use pointers
 */
Animal *createAnimal() {
    //new allocates memory on the heap (bigger)
    Animal pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}
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
    //we can't call delete on null pointers
    pCat1->speak();
    delete pCat1;

    cout << sizeof(pCat1) << endl;
/*
 *
 * Returning Objects from functions
 * using pointers we won't be making a copy constructor in main anymore
 * only in the createAnimal() function
 * we are only passing a pointer around saving memory
 *
 */
    Animal *pFrog = createAnimal();
    pFrog->speak();

    delete pFrog;

    /*
     *
     * Allocating memory
     *
     */

    //this both allocates memory and instantiates the object
    Animal *p2Animal=new Animal;

    delete p2Animal;

    //this creates 10 animals
    Animal *p2Animal = new Animal[10];

    delete [] p2Animal;

    return 0;


}
