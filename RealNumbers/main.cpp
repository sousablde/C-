#include "ComplexNumber.h"
#include "ComplexNumberPolar.h"

//this function accesses the private member data of both the
//the polar and the cartesian class
ComplexNumber addTwoComplexNumbers
        (const ComplexNumber &cart,
         const ComplexNumberPolar &polar) {
    float realPart = polar.modulus * cos(polar.argument * ComplexNumber::PI / 180);
    float complexPart = polar.modulus * sin(polar.argument * ComplexNumber::PI / 180);

    ComplexNumber result(realPart + cart.realPart, complexPart + cart.complexPart);
    return result;

}


int main() {

    ComplexNumber cart(5, 5);
    ComplexNumberPolar polar(10, 45);

    ComplexNumber sumOfTwoComplexNumbers = addTwoComplexNumbers(cart, polar);

    cout << "Real part = " << sumOfTwoComplexNumbers.getRealPart()
         << "Complex part = " << sumOfTwoComplexNumbers.getComplexPart() << endl;


}

/*
main implemetation for the single file extra class file
int main() {



    //creating a variable of this class an object named c
    //call the no argument constructor
    ComplexNumber c1, c2;


      c++ uses the copy constructor to create
      a copy of one object from another
      example
      ComplexNumber c1(1.4,1.4);
      ComplexNumber c2=c1;

    //calling print member function using dot operator
    c1.print();
    //calling print member function using dot operator
    cout<<"c1 holds "<<endl;
    c2.print();
    cout<<"c2 holds"<<endl;

    //updating c1
    c1.setMemberVariables(3.14, 5.3);
    cout<<endl;
    c1.print();
    cout<<"done"<<endl;

    //updating c2
    c2.setMemberVariables(4, 5.3);
    cout<<endl;
    c2.print();
    cout<<"done"<<endl;


}
*/