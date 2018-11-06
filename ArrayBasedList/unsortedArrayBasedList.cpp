//
// Created by sousa on 11/1/2018.
//

#include "unsortedArrayBasedList.h"

//O(1) running time does not change with size of list
unsortedArrayBasedList::unsortedArrayBasedList() {
    length = 0;//starting with empty list
}

//O(1)
void unsortedArrayBasedList::insertItem(int item) {
    if (isFull()) {
        return;
    }
    info[length] = item;
    length++;
}

//O(1)
void unsortedArrayBasedList::makeEmpty() {
    length = 0;//makes it empty to the user not on the machine
}

//O(n) the bigger the array the more comparisons need to be made
void unsortedArrayBasedList::deleteItem(int item) {
    for (int i = 0; i < 100; i++) {
        if (info[i] == item) {
            //we found our item
            info[i] = info[length - 1];
            length--;
        }
    }
}

//O(n)
void unsortedArrayBasedList::display() {
    for (int i = 0; i < length; i++) {
        cout << info[i] << endl;
    }

}

int unsortedArrayBasedList::getLenght() const {
    return length;
}

bool unsortedArrayBasedList::isFull() const {

    return (length == 10);
}








