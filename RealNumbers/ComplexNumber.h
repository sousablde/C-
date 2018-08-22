//
// Created by sousa on 8/20/2018.
//
#include <iostream>
#include <cmath>
using namespace std;

//forward declaration of the complexnumberpolar class
Class ComplexNumberPolar;


class ComplexNumber {
private:
    double realPart;
    double complexPart;
    static int numObjectsCreated;
public:
    const static double PI;

    ComplexNumber();

    ComplexNumber(double c, double r);

    ComplexNumber(const ComplexNumber &rhs);

    ~ComplexNumber();

    double getComplexPart() const;

    void setComplexPart(double c);

    //friend of the complex number class
    //functiom signature references the polar object

    friend ComplexNumber addTwoComplexNumbers(const ComplexNumber &cart, const ComplexNumber &polar);
};

