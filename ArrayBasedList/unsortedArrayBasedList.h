//
// Created by sousa on 11/1/2018.
//

#ifndef ARRAYBASEDLIST_UNSORTEDARRAYBASEDLIST_H
#define ARRAYBASEDLIST_UNSORTEDARRAYBASEDLIST_H

#include <iostream>

using namespace std;

class unsortedArrayBasedList {
private:
    int length;
    int info[100];

public://what is visible to the user so these can be called
    unsortedArrayBasedList();

    void makeEmpty();

    bool isFull() const;

    int getLenght() const;

    void insertItem(int item);

    void deleteItem(int item);

    void display();

};


#endif //ARRAYBASEDLIST_UNSORTEDARRAYBASEDLIST_H
