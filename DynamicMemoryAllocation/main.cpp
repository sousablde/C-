#include <iostream>

/*
 * for successful use of dynamic memory allocation
 * keep the following in mind
 *
 * use new/delete for single variables of all types
 * use new[]/delete[] for array variables of all types
 * new allocates memory and delete deallocates it
 * clean up all pointer member variables in the destructor
 *
 * new first allocates memory and then calls the constructor
 * delete first calls the destructor and then deallocates memory
 *
 * cant pass arguments to constructor with new[]
 *
 *
 */

 /*
  * example 1
  *
  * //floatDynamic is a pointer variable dynamically allocated to a float
  * float *floatDynamic = new float (23.3);
  * cout << "dynamically assigned float has value = "<< *floatDynamic<<endl;
  * delete floatDynamic;
  *
  */

 /*
  * example 2
  *
  * //dynamically allocate memory and construct an object
  * ComplexNumber *cDynamic = new ComplexNumber(10,15);
  * cout << "Printing out dynamically allocated object " << endl;
  * //use arrow operator to access members of a class through pointer
  * //it dereferences a pointer and used the dot operator on that address
  * //so in this case this is the same as:
  * //(*cDynamic).print();
  * cDynamic->print()
  * delete cDynamic;
  *
  *
  * reminder for the ComplexNumber constructor
  *
  * ComplexNumber(double c, double r):realPart(r), complexPart(c)
  * {
  *     cout << "inside 2 argument constructor"<< endl;
  *  }
  *
  *  the this keyword can be used inside any member function of an object
  *  to refer to itself as if that object were any other variable
  *
  *  example 3
  *
  *  //using this
  *  void printThis()
  *  {
  *     cout << "The address of this object is: "<< this << endl;
  *     cout << "real part "<< this -> realPart<< "imaginary part ="<< this->complexPart<< endl;
  *  }
  *
  *  so, if I had this:
  *  cPlaceNew->printThis();
  *  cout<<cPlacedNew<<endl;
  *
  *  it would just print the address of the variable in printThis()
  *  this points to the same address in both cases
  *
  *
  */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}