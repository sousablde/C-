#include <iostream>
/*
 * As a reminder
 * each object has its own copy of the member variables and, the member
 * functions act on those member variables
 * but
 * if member variables are marked static they will be shared by all the objects of a class
 * static member variables must be defined outside of the class body (even if const)
 *
 */

using namespace std;

class ComplexNumber {
private:
    float realPart;
    float complexPart;
public:
    //declaring static member variable
    static int numObjectsCreated;
/*
 * each time the numObject is created static holds the count
 * it basically works as an Universal count of the number of objects
 * created throughout the class usage
 */

//this static method only accesses static member variables, not objects
    static int getNumObjectsCreated() {
        cout << "Inside the static method " << endl;
        return numObjectsCreated;
    }

    ComplexNumber() : realPart(0.0), complexPart(0.0) {
        // increment the static variable keeping track of objects created
        numObjectsCreated++;
        cout << "No arg-constructor called" << endl;
    }

    ComplexNumber(double c, double r) : realPart(r), complexPart(c) {
        // increment the static variable keeping track of objects created
        numObjectsCreated++;
        cout << "Inside the 2-argument constructor" << endl;
    }

    ComplexNumber(const ComplexNumber &rhs) :
            realPart(rhs.realPart), complexPart(rhs.complexPart) {
        // increment the static variable keeping track of objects created
        numObjectsCreated++;
        cout << "Inside the copy constructor" << endl;
    }

    ~ComplexNumber() {
        cout << "Inside the destructor: realPart = " << realPart << " complexPart = " << complexPart << endl;
    }

    float getRealPart() const { return realPart; }

    void setRealPart(float r) { realPart = r; }

};
//we declare the static variable inside the class
//defining static member variable outside of the class body
//do not forget scope resolution operator=refer to member outside of class
//this static definition should be in the cpp file if using multiple file

int ComplexNumber::numObjectsCreated = 0; // define the static variable


void printComplexNumberPassByValue(ComplexNumber c) {
    cout << "Inside printComplexNumber" << endl;
    cout << c.getRealPart() << endl;
    // Attempt to modify the function argument inside the functon
    c.setRealPart(3.14);
}

void printComplexNumberPassByReference(ComplexNumber &c) {
    cout << "Inside printComplexNumber" << endl;
    cout << c.getRealPart() << endl;
    // Attempt to modify the function argument inside the functon - succeeds!
    c.setRealPart(3.14);
}


void printComplexNumberPassByConstReference(const ComplexNumber &c) {
    cout << "Inside printComplexNumber" << endl;
    cout << c.getRealPart() << endl;
    // Attempt to modify the function argument inside the functon - Compiler catches it!
    // c.setRealPart(3.14);
}


int main() {
    cout << "Number of ComplexNumber objects created so far: " << ComplexNumber::numObjectsCreated << endl;
    cout << "Create one object " << endl;
    ComplexNumber c1(1, 2);

    cout << "Number of ComplexNumber objects created so far: " << ComplexNumber::numObjectsCreated << endl;
    cout << "Create one object " << endl;
    ComplexNumber c2(3, 3);

    cout << "Number of ComplexNumber objects created so far: " << ComplexNumber::numObjectsCreated << endl;
    cout << "Create one object " << endl;
    ComplexNumber c3(4.5, 5.3);

    //calling static member function outside of class
    cout << " Num objects created so far " << ComplexNumber::getNumObjectsCreated() << endl;
    cout << "create one object " << endl;
    ComplexNumber c4(1, 2);


}
