#include <iostream>

using namespace std;
/*
 * if we wanted to write a function to swap the value of 2 ints we would do:
 * void swap(int& a, int& b)
 * {
        T temp = a;
        a = b;
        b = temp;
        return 0;
    }
 * if we decided to swap 2 strings after this we would have to write a whole other function that would be virtually
 * identical
 * templates are a form of generic programming
 *templates are a form of sophisticated compile-time polymorphism
 *
 */

//here all we have to do is specify the type as a template parameter
//in this case instead of int or string it is just T
template<class T>
//tell the compiler we are creating a template parameter
int templatedSwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
    return 0;
}

int main() {
    int a = 5;
    int b = 10;
    //Swap(a,b);
    string firstName("Bea");
    string lastName("Sousa");

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Testing the int swap ~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "Before the swap, inside main "
         << "a = " << a
         << " b = " << b
         << endl;

    templatedSwap(a, b);


    cout << "After the swap, inside main "
         << "a = " << a
         << " b = " << b
         << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Testing the string swap ~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    cout << "Before the swap, inside main "
         << "a = " << firstName
         << " b = " << lastName
         << endl;

    templatedSwap(firstName, lastName);


    cout << "After the swap, inside main "
         << "a = " << firstName
         << " b = " << lastName
         << endl;

}
