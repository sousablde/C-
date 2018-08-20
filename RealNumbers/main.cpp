#include "ComplexNumber.h"

int main() {

    //creating a variable of this class
    //an object named c
    ComplexNumber c;//call the no argument constructor

    c.print();
    cout<<endl;
    c.setMemberVariables(3.14, 5.3);
    cout<<endl;
    c.print();
    cout<<"done"<<endl;
}