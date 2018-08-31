#include <iostream>
/*
 * When a base class method is marked virtual and a base class pointer/reference holds a derived class object
 * and the virtual method is called on that base class pointer
 * then, the derived class version of that method is called
 * A pure virtual function is a just a virtual function that has no implementation in the base class at all
 * a base class with one pure virtual function is called an abstract base class
 *abstract classes exist purely for inheritance purposes
 *
 * interface is a concept from java and csharp an an abstract base class with only pure virtual functions is called
 * an interface
 *run time polymorphism allows programmers to keep adding classes to existing systems
 * interfaces allow separation between implementation and design
 * 
 */
using namespace std;

class Shape {
private:
    string shapeType;
public:
    virtual void print() = 0;
    // a pure virtual function
    // (no implementation)
    //this makes Shape and abstract class
};


class Circle : public Shape {
public:
    void print() {
        cout << "I am a circle" << endl;
    }
};


int main() {
    //Shape s1; // Compile error: can not instantiate an abstract class
    Circle c1;
    c1.print();

}
