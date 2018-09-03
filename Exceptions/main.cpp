#include <iostream>

using namespace std;

/*
 * exceptions are a way to deal with run-time errors
 * we should never throw exceptions from inside a destructor 
 */


class InvalidComplexNumberError {
public:
    string errorMessage;

    InvalidComplexNumberError(string error) : errorMessage(error) {}

};

class ComplexNumber_Polar {
public:
    float modulus;
    float argument;

    ComplexNumber_Polar() : modulus(0.0), argument(0.0) {
        cout << "No arg-constructor called" << endl;
    }

    //in this constructor we check that the modulous is non-negative, else we throw an exception
    ComplexNumber_Polar(double amp, double arg) : modulus(amp), argument(arg) {
        if (amp < 0) {
            cout << "Modulus of a complex number can not be negative! Throwing an exception" << endl;
            throw InvalidComplexNumberError("Modulus can't be negative!");//this is simply an object of a class
            //we created ourselves
        }
        cout << "Inside the 2-argument constructor" << endl;
    }


};


int main() {
    ComplexNumber_Polar c(7.0, 45);
    ComplexNumber_Polar c1(-7.0, 45);


}
