#include "ComplexNumber.h"

int main() {

    //creating a variable of this class
    //an object named c
    ComplexNumber c1, c2;//call the no argument constructor

    c1.print();//calling print member function using dot operator
    cout<<"c1 holds "<<endl;
    c2.print();//calling print member function using dot operator
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