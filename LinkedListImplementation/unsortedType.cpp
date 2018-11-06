//
// Created by sousa on 11/5/2018.
//

#include "unsortedType.h"

//O(1)
UnsortedType::UnsortedType() {
    length = 0;
    start = NULL;
}

//O(n)
void UnsortedType::display() {

    Node *temp = start;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

//O(n)
void UnsortedType::deleteItem(int item) {
    if (start != NULL) {
        Node *temp = start;
        if (item == start->data) {
            start = start->next;
            delete temp;
            length--;
        } else {
            while (temp->next != NULL && (!(item == temp->next->data))) {
                temp = temp->next;
            }
            Node *target = temp->next;
            if (target != NULL) {
                temp->next = target->next;
                delete target;
                length--;
            }
        }
    }
}

//O(1)
void UnsortedType::insertItem(int item) {
    //adding a node to the front
    //we first created the start pointer pointing to NULL (in header file)
    //we then create a new node called temp
    Node *temp = new Node;
    //we set the new node call temp to its data
    temp->data = item;
    //we make the node temp point to the node start
    //at this point the node start is no longer the first node
    temp->next = start;
    //make the temp node be the new start
    start = temp;

    //increase length of list
    length++;
}

//O(1)
int UnsortedType::getLenght() const {
    return length;
}

//O(1)
bool UnsortedType::isFull() const {
    Node *location;

    try {
        location = new Node;
        delete location;
        return false;
    }
    catch (bad_alloc exception) {
        return true;
    }
}

//O(n)
void UnsortedType::makeEmpty() {
    Node *temp;
    while (start != NULL) {
        temp = start;
        start = start->next;
        delete temp;
    }
    length = 0;


}

//O(n)
UnsortedType::~UnsortedType() {
    makeEmpty();

}


