//
// Created by sousa on 10/30/2018.
//

#ifndef LINKEDLISTS_ARRAYLIST_H
#define LINKEDLISTS_ARRAYLIST_H

#include "ListInterface.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class ArrayList : public ListInterface<ItemType> {
private :
    static const int DEFAULT_CAPACITY = 100;
    ItemType items[DEFAULT_CAPACITY]; // Array of list items
    int itemCount; // Current count of list items
    int maxItems; // Maximum capacity of the list

public :
    ArrayList();

// Copy constructor and destructor are supplied by compiler
    bool isEmpty() const;

    int getLength() const;

    bool insert(int newPosition, const ItemType &newEntry);

    bool remove(int position);

    void clear();

/** @throw PrecondViolatedExcep if position < 1 or
position > getLength(). */
    ItemType getEntry(int position) const throw(PrecondViolatedExcep);

/** @throw PrecondViolatedExcep if position < 1 or
position > getLength(). */
    void setEntry(int position, const ItemType &newEntry)
    throw(PrecondViolatedExcep);

}; // end ArrayList
#endif //LINKEDLISTS_ARRAYLIST_H
