#include <iostream>

using namespace std;

/*
 * if a method is marked virtual in the base class then in the case Shape *sPtr2=new Circle(); sPtr2->print();
 * the method call will be directed to the print method in the derived class
 * this makes it dynamically bound and the method is chosen during run-time
 * this allows for something called run-time polymorphism
 * dynamic binding happens only for base class pointers/references holding derived class objects
 * virtual is the default in the case of java, use of virtual functions cause a performance hit
 * the compiler adds a hidden memeber variable for all virtual functions to any object with virtual functions
 *
 */
class Shape_NonVirtual {
private:
    string shapeType;
public:
    void print() {
        cout << "I am a shape, not sure of what type" << endl;
    }
};

/*
 * this base class has a method with virtual functions
 * the output from the class with virtual methods if we attempted to check for the sizeof the object s2
 * would be about 24 bytes because it would be the size of the hidden member in the form of a pointer
 */
class Shape_Virtual {
private:
    string shapeType;
public:
    virtual void print() {
        cout << "I am a shape, not sure of what type" << endl;
    }
};

class Circle_NonVirtual : public Shape_NonVirtual {
public:
    void print() {
        cout << "I am a circle" << endl;
    }
};


class Circle_Virtual : public Shape_Virtual {
public:
    void print() {
        cout << "I am a circle" << endl;
    }
};


int main() {
    //  Shape_Virtual s1;
    //Shape_NonVirtual s2;

    //  cout << "Size of object with vPtr is: " << sizeof(s1) << endl;
    //cout << "Size of object without vPtr is: " << sizeof(s2) << endl;


    Circle_Virtual c1;
    Circle_NonVirtual c2;


    /*cout << "Will the circles know their types?" << endl;
    cout << "Circle with the virtual function says:" << endl;
    c1.print();
    cout << "Circle without the virtual function says:" << endl;
    c2.print();
    */

    /*cout << "Now assign the circles to their base class types." << endl;
    Shape_Virtual s1 = c1;
    Shape_NonVirtual s2 = c2;

    cout << "NOW Will the circles know their types?" << endl;
    s1.print();
    s2.print();
    */

    /*
     * what we see in this example Shape_Virtual *sPtr1 (is a base class pointer) = new Circle_Virtual()(pointing to
     * derived class object);
     * when we call a print method in this case
     */
    cout << "Now assign the circles to their base class pointer types." << endl;
    Shape_Virtual *sPtr1 = new Circle_Virtual();
    Shape_NonVirtual *sPtr2 = new Circle_NonVirtual();

    cout << "NOW Will the circles know their types?" << endl;
    sPtr1->print();
    sPtr2->print();

    /*
     * when we assign the object circle to their base class shape without reference
     * it will produce the output "I am a shape, not sure what type", no virtual function is called
     * but, if we use reference the output will be:
     * "I am a circle "from the class with the virtual class
     * "I am a shape, not sure of what type" from the class without virtual method
     */

    cout << "Now assign the circles to their base class reference types." << endl;
    Shape_Virtual &sRef1 = c1;
    Shape_NonVirtual &sRef2 = c2;

    cout << "NOW Will the circles know their types?" << endl;
    sRef1.print();
    sRef2.print();


}
