#include <iostream>

using namespace std;

/*
 * multiple inheritance is not used in java
 * it is possible for a derived class object to end up with 2 copies of a base class object inside it
 * in this example both rectangle and rhombus inherit from the class shape (is-a relationship)
 * logically a square inherits from a rhombus and a rectangle which causes the diamond hierarchy
 * in java you can inherit from multiple interfaces but only one base class
 *
 *
 * to make sure that only 1 instance of the shape object shows up we use virtual inheritance
 * there is no need for scope resolution operator while accessing shape portions of a square
 * using virtual multiple inheritance
 */

class Shape {
private:
    string shapeType;
public:
    //this is a virtual function, it has no implementation in the shape class
    //or in java terminology a virtual function is an abstract method defined in a class
    virtual void print() = 0;

    Shape() {
        cout << "Inside the Shape constructor" << endl;
    }

    ~Shape() {
        cout << "Inside the Shape destructor" << endl;
    }
};

//the rectangle class inherits from shape-oblique inheritance
//it declares additional member variables
//it also has implementation of the print member function
class Rectangle : public Shape {
public:
    int rectangle_length;
    int rectangle_breadth;

    void print() {
        cout << "I am a rectangle" << endl;
    }

    Rectangle() {
        cout << "Inside the Rectangle constructor" << endl;
    }

    ~Rectangle() {
        cout << "Inside the Rectangle destructor" << endl;
    }
};

class Rhombus : public Shape {
public:
    float angleBetweenSides;

    void print() {
        cout << "I am a rhombus" << endl;
    }

    Rhombus() {
        cout << "Inside the Rhombus constructor" << endl;
    }

    ~Rhombus() {
        cout << "Inside the Rhombus destructor" << endl;
    }

};

//this implementation has to use the print from the base class since it does not have implementation
//it has info on both the classes inherited

class Square : public Rhombus, public Rectangle {
public:
    Square() {
        cout << "Inside the Square constructor" << endl;
    }

    ~Square() {
        cout << "Inside the Square destructor" << endl;
    }

};


int main() {
    Square s1;
    //s1.print();//what will be printed? the method in the rhombus or rectangle? neither, it is error
    //this case for the print method can't ve disambiguated

    //this is how to invoke specific print methods
    s1.Rectangle::print();
    s1.Rhombus::print();
}
