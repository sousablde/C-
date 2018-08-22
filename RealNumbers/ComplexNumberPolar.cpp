//
// Created by sousa on 8/22/2018.
//

#include "ComplexNumberPolar.h"

class ComplexNumber;


ComplexNumberPolar::ComplexNumberPolar(double r, double theta) :
        modulus(r), argument(theta) {
    cout << "Inside the 2-argument constructor (Polar)" << endl;
}


float ComplexNumberPolar::getModulus() const { return modulus; }

void ComplexNumberPolar::setModulus(float r) { modulus = r; }

float ComplexNumberPolar::getArgument() const { return argument; }

void ComplexNumberPolar::setArgument(float theta) { argument = theta; }





