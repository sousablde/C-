//
// Created by sousa on 8/20/2018.
//

#include "ComplexNumber.h"

#ifndef REALNUMBERS_COMPLEXNUMBER_H
#define REALNUMBERS_COMPLEXNUMBER_H

/*
 * the :: refers to the scope resolution operator
 * forward declaration:
 * if there is a reference or a pointer to another class in my code then I
 * can forward declare it
 * if I have an object of the other class instantiated in my code I should just use the # file
 * the::refers to the scope resolution operator
 */

ComplexNumber::ComplexNumber() : realPart(0.0), complexPart(0.0 {

    cout << "Constructor with no arguments called " << endl;

}

ComplexNumber::ComplexNumber(double c, double r) : realPart(r), complexPart(c) {
    cout << "inside 2 argument constructor" << endl;

}

ComplexNumber::ComplexNumber(const ComplexNumber &rhs) : realPart(rhs.realPart), complexPart(rhs.complexPart) {
    cout << "inside copy constructor" << endl;
}

/*
  Implementation vs interface
  all member variable should be kept private
  public getters and setters should access those variables


 traditional class implementation
keyword class + class name
class ComplexNumber {
private://member functions and data only accessible inside class
    float realPart;
    float complexPart;
public://member functions and data accessible outside of class


    //creating my constructor
    ComplexNumber()
    {
        //this constructor does not initialize any
        //of the member variables
        cout << "Constructor with no arguments called "<<endl;
    }


    creating a constructor using an initialization list
    initialization lists a[[ear after the name of the constructor
    but before the body
    initialization lists are used considering the order
    of code execution

      initialization lists are required to make sure member
variables are constructed correctly instead of simply
     being reassigned

    ComplexNumber():realPart(0.0), complexPart(0.0)
    {
        cout << "Constructor with no arguments called "<<endl;

    }

    //second constructor
    ComplexNumber(double c, double r) : realPart(r), complexPart(c) {
        cout << "inside 2 argument constructor" << endl;
    }

    void setRealPart(double r) {
        realPart = r;
    }

    void setComplexPart(double c) {
        complexPart = c;
    }


    //destructor
    //frees the memory used by the constructor
    ~ComplexNumber() {
        delete[] realPart;
        delete[] complexPart;
    }


    //setter
    void setMemberVariables(double r, double c)
    {
        realPart=r;
        complexPart=c;
    }
    //getter
    float getComplexPart()
    {
        return complexPart;
    }
    //printing function
    void print()
    {
        cout<<"real part= "<<realPart<<" complex part = "<<complexPart<<endl;
    }

};
 */
#endif //REALNUMBERS_COMPLEXNUMBER_H
