//
// Created by sousa on 10/30/2018.
//
#include "ArrayList.h"

//The default constructor initializes the
//data members itemCount to zero and maxItems to DEFAULT_CAPACITY
template<class ItemType>
ArrayList<ItemType>::ArrayList() : itemCount(0),
                                   maxItems(DEFAULT_CAPACITY) {
} // end default constructor

//method isEmpty tests whether itemCount is zero, and getLength simply returns the value of
//itemCount
template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const {
    return itemCount == 0;
} // end isEmpty


template<class ItemType>
int ArrayList<ItemType>::getLength() const {
    return itemCount;
} // end getLength

//To insert a new entry at a given position in the array items , you must create
//room for the new entry by shifting the entries at and beyond this position toward the end of array.
template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition,
                                 const ItemType &newEntry) {
    bool ableToInsert = (newPosition >= 1) &&
                        (newPosition <= itemCount + 1) &&
                        (itemCount < maxItems);
    if (ableToInsert) {
// Make room for new entry by shifting all entries at
// positions >= newPosition toward the end of the array
// (no shift if newPosition == itemCount + 1)
        for (int pos = itemCount; pos >= newPosition; pos--)
            items[pos] = items[pos - 1];
// Insert new entry
        items[newPosition - 1] = newEntry;
        itemCount++; // Increase count of entries
    } // end if
    return ableToInsert;
} // end insert

//getEntry needs to return the value in items[position] , but we
//decided to enforce the method’s precondition by throwing an exception if position is out of bounds.
template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const
throw(PrecondViolatedExcep) {
// Enforce precondition
    bool ableToGet = (position >= 1) && (position <= itemCount);
    if (ableToGet)
        return items[position - 1];
    else {
        string message = "getEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw (PrecondViolatedExcep(message));
    } // end if
} // end getEntry

//method setEntry A client of the class cannot access the class’s private
//members directly
template<class ItemType>
void ArrayList<ItemType>::setEntry(int position, const ItemType &newEntry)
throw(PrecondViolatedExcep) {
// Enforce precondition
    bool ableToSet = (position >= 1) && (position <= itemCount);
    if (ableToSet)
        items[position - 1] = newEntry;
    else {
        string message = "setEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw (PrecondViolatedExcep(message));
    } // end if
} // end setEntry

//ultimately we need to avoid gaps in an array, it leads to several porblems:
//itemCount – 1 is no longer the index of the last entry in the array. You need another variable,
//lastPosition , to contain this index.
//Because the items are spread out, the method getEntry might have to look at every cell of the
//array even when only a few entries are present.
//When items[maxItems - 1] is occupied, the list could appear full, even when fewer than
//maxItems entries are present.
//so we need to do is shift the entries in the array so that a deletion does not leave a gap
template<class ItemType>
bool ArrayList<ItemType>::remove(int position) {
    bool ableToRemove = (position >= 1) && (position <= itemCount);
    if (ableToRemove) {
// Remove entry by shifting all entries after the one at
// position toward the beginning of the array
// (no shift if position == itemCount)
        for (int fromIndex = position, toIndex = fromIndex - 1;
             fromIndex < itemCount; fromIndex++, toIndex++)
            items[toIndex] = items[fromIndex];
        itemCount--; // Decrease count of entries
    } // end if
    return ableToRemove;
} // end remove

//To clear all of the entries from a list, our fi nal method simply sets itemCount to zero
template<class ItemType>
void ArrayList<ItemType>::clear() {
    itemCount = 0;
} // end clear

