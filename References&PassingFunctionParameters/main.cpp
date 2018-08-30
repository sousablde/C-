#include <iostream>

using namespace std;

class ComplexNumber {
private:
    float realPart;
    float complexPart;
public:
    ComplexNumber() : realPart(0.0), complexPart(0.0) {
        cout << "No arg-constructor called" << endl;
    }

    ComplexNumber(double c, double r) : realPart(r), complexPart(c) {
        cout << "Inside the 2-argument constructor" << endl;
    }

    ComplexNumber(const ComplexNumber &rhs) :
            realPart(rhs.realPart), complexPart(rhs.complexPart) {
        cout << "Inside the copy constructor" << endl;
    }

    ~ComplexNumber() {
        cout << "Inside the destructor: realPart = " << realPart << " complexPart = " << complexPart << endl;
    }

    float getRealPart() const { return realPart; }

    void setRealPart(float r) { realPart = r; }

};

/*
 * Passing the complex number object itself
 * a copy of the complex number is made
 * the object is copied at the moment of the function call
 * an extra object is created
 * only the copy of the object has its values changed
 * what is in main remains the same
 * changes in the faction do not affect calling code
 */
void printComplexNumberPassByValue(ComplexNumber c) {
    cout << "Inside printComplexNumber" << endl;
    cout << c.getRealPart() << endl;
    // Attempt to modify the function argument inside the functon
    c.setRealPart(3.14);
}

/*
 * Passing a reference to the complex number
 * no extra object is created with the copy constructor
 * no need to use destructor
 * change made in the function reflects the calling code
 * the value is updated in main
 */
void printComplexNumberPassByReference(ComplexNumber &c) {
    cout << "Inside printComplexNumber" << endl;
    cout << c.getRealPart() << endl;
    // Attempt to modify the function argument inside the functon - succeeds!
    c.setRealPart(3.14);
}

/*
 * Passing a const reference to the complex number
 * the only difference to the previous function
 * is that we can't update the value of the object c
 * inside this function
 * it is a const
 */

void printComplexNumberPassByConstReference(const ComplexNumber &c) {
    cout << "Inside printComplexNumber" << endl;
    cout << c.getRealPart() << endl;
    // Attempt to modify the function argument inside the functon - Compiler catches it!
    // c.setRealPart(3.14);
}


int main() {
    ComplexNumber c(3.4, 5.3);
    cout << "Before passing by value " << c.getRealPart() << endl;
    printComplexNumberPassByValue(c);
    cout << "Aftere passing by value " << c.getRealPart() << endl;

    cout << "Before passing by non-const reference " << c.getRealPart() << endl;
    printComplexNumberPassByReference(c);
    cout << "After passing by non-const reference " << c.getRealPart() << endl;


    cout << "Before passing by const reference " << c.getRealPart() << endl;
    printComplexNumberPassByConstReference(c);
    cout << "After passing by const reference " << c.getRealPart() << endl;

}
