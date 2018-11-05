//
// Created by sousa on 11/5/2018.
//

#ifndef LINKEDLISTIMPLEMENTATION_UNSORTEDTYPE_H
#define LINKEDLISTIMPLEMENTATION_UNSORTEDTYPE_H

#include <iostream>
#include "node.h"

using namespace std;

class UnsortedType {

private:
    int length;
    Node *start;


public://what is visible to the user so these can be called
    UnsortedType();

    void makeEmpty();

    bool isFull() const;

    int getLenght() const;

    void insertItem(int item);

    void deleteItem(int item);

    void display();

    ~UnsortedType();

};


#endif //LINKEDLISTIMPLEMENTATION_UNSORTEDTYPE_H
