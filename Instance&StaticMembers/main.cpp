/*
 * Each instance of a class has its own copies of the class’s instance variables.
 * If a member variable is declared static , however, all instances of that
 *class have access to that variable. If a member function is declared
 * static , it may be called without any instances of the class being defined.
 */
#include <iostream>
#include "Tree.h"

int main() {
    // Define three Tree objects.
    //3 instances of the tree class are created
    //there is only one copy of the static objectCount variable
    Tree oak;
    Tree elm;
    Tree pine;

    // Display the number of Tree objects we have.
    cout << "We have " << pine.getObjectCount() << " trees in our program!\n";
    return 0;
}