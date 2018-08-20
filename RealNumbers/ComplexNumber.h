//
// Created by sousa on 8/20/2018.
//

#ifndef REALNUMBERS_COMPLEXNUMBER_H
#define REALNUMBERS_COMPLEXNUMBER_H

#include <iostream>
using namespace std;

//keyword class + class name
class ComplexNumber {
private://member functions and data only accessible inside class
    float realPart;
    float complexPart;
public://member functions and data accessible outside of class

    /*
    //creating my constructor
    ComplexNumber()
    {
        //this constructor does not initialize any
        //of the member variables
        cout << "Constructor with no arguments called "<<endl;
    }
     */

    //creating a constructor using an initialization list
    //initialization lists a[[ear after the name of the constructor
    //but before the body
    //initialization lists are used considering the order
    //of code execution
    //
    ComplexNumber():realPart(0.0), complexPart(0.0)
    {
        cout << "Constructor with no arguments called "<<endl;

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


#endif //REALNUMBERS_COMPLEXNUMBER_H
