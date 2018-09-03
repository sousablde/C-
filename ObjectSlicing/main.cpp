#include <iostream>

using namespace std;

/*
 * as a recap: passing functions as const references rather than by-value is advantageous
 * when an object is passed by value to a function as a function argument a temporary variable is created
 * this temporary variable is constructed using the copy constructor and then must be destructed too via the destructor
 * this constant calls to the constructor and the destructor become taxing on the program and it will affect things
 * in a performance sensitive application
 * slicing: if a function has a parameter of the type shape (base class) then the parameter is passed by value instead
 * of by-reference
 *also, unlike java do not use virtual functions in a constructor or destructor
 *
 */

class Shape {
private:
public:
    string shapeType;

    Shape() {
        shapeType = "Unknown";
        cout << "Inside the Shape constructor" << endl;
    }

    ~Shape() {
        cout << "Inside the Shape destructor" << endl;
    }

    virtual void print() const {
        cout << "I am a shape, and my size is " << sizeof(*this) << " bytes " << endl;
    }
};


class Rectangle : public Shape {
public:
    int rectangle_length;
    int rectangle_breadth;

    Rectangle() {
        cout << "Inside the Rectangle constructor" << endl;
    }

    ~Rectangle() {
        cout << "Inside the Rectangle destructor" << endl;
    }

    virtual void print() const {
        cout << "I am a rectangle,, and my size is " << sizeof(*this) << " bytes " << endl;
    }
};

//here is passing the parameter by value the compiler will slice the rectangle into a shape before copying (passing by
//by value) to the function-to avoid this problem PASS FUNCTION ARGUMENTS AS CONST REFERENCES
//this sliced object will lose track of its size and of all virtual functions
//only shape destructor is called causing memory leak
void callPrint_Sliced(Shape s) {
    cout << endl << "Slicing is about to occur" << endl;
    s.print();
}


//this is a good function that will not have object slicing (using reference)
void callPrint_NonSliced(const Shape &s) {
    cout << endl << "No slicing can occur here" << endl;
    s.print();
}


int main() {
    Rectangle r;
    callPrint_Sliced(r);
    callPrint_NonSliced(r);
}
