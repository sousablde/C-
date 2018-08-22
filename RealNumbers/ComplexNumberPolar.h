//
// Created by sousa on 8/22/2018.
//

#ifndef REALNUMBERS_COMPLEXNUMBERPOLAR_H
#define REALNUMBERS_COMPLEXNUMBERPOLAR_H

class ComplexNumber;


class ComplexNumberPolar {
private:
    float modulus;
    float argument;
public:
    ComplexNumberPolar(double r, double theta);

    float getModulus() const;

    void setModulus(float r);

    float getArgument() const;

    void setArgument(float theta);

    friend ComplexNumber addTwoComplexNumbers
            (const ComplexNumber &cart,
             const ComplexNumberPolar &polar);


};

#endif //REALNUMBERS_COMPLEXNUMBERPOLAR_H
