//
// Created by sousa on 8/29/2018.
//

#ifndef INSTANCE_STATICMEMBERS_TREE_H
#define INSTANCE_STATICMEMBERS_TREE_H
using namespace std;

// Tree class
class Tree {
private:
    static int objectCount; //creating Static member variable.
    //only one copy of member in memory
    //a single copy of a class's  static member
    //variable
public:
    // Constructor
    Tree() { objectCount++; }

    // Accessor function for objectCount
    int getObjectCount() const {
        return objectCount;
    }
};

// Definition of the static member variable, written
// outside the class.
int Tree::objectCount = 0;

#endif //INSTANCE_STATICMEMBERS_TREE_H
