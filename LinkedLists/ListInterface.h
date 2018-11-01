//
// Created by sousa on 10/30/2018.
//
/*
1. The ADT list maintains its data by position. Each entry in a list is identifi ed by its position, which is given by an
integer, beginning with 1. Thus, the data in a list has an order, but that order is determined by the list’s client, not
the list itself.
2. You can insert a new entry into a list at a position that ranges from 1 to 1 greater than the current length of
the list. Thus, you can insert a new entry before the fi rst entry, after the last entry, or between two current
entries.
3. Inserting a new entry into a list renumbers any existing entries that follow the new one in the list.
4. You can remove an entry that is currently at a position that ranges from 1 to the current length of the list. Thus,
you can remove the fi rst entry, the last entry, or any interior entry.
5. Removing an entry from a list renumbers any existing entries that follow the deleted one in the list.
 */

#ifndef LINKEDLISTS_LISTINTERFACE_H
#define LINKEDLISTS_LISTINTERFACE_H

#include <iostream>
#include <string>

using namespace std;


template<class ItemType>
class ListInterface {
public :
/** Sees whether this list is empty.
@return True if the list is empty; otherwise returns false. */
    virtual bool isEmpty() const = 0;


/** Gets the current number of entries in this list.
@return The integer number of entries currently in the list. */
    virtual int getLength() const = 0;


/** Inserts an entry into this list at a given position.
@pre None.
@post If 1 <= position <= getLength() + 1 and the insertion is
successful, newEntry is at the given position in the list,
other entries are renumbered accordingly, and the returned
value is true.
@param newPosition The list position at which to insert newEntry.
@param newEntry The entry to insert into the list.
@return True if insertion is successful, or false if not. */
    virtual bool insert(int newPosition, const ItemType &newEntry) = 0;


/** Removes the entry at a given position from this list.
@pre None.
@post If 1 <= position <= getLength() and the removal is successful,
the entry at the given position in the list is removed, other
items are renumbered accordingly, and the returned value is true.
@param position The list position of the entry to remove.
@return True if removal is successful, or false if not. */
    virtual bool remove(int position) = 0;


/** Removes all entries from this list.
@post List contains no entries and the count of items is 0. */
    virtual void clear() = 0;


/** Gets the entry at the given position in this list.
@pre 1 <= position <= getLength().
@post The desired entry has been returned.
@param position The list position of the desired entry.
@return The entry at the given position. */
    virtual ItemType getEntry(int position) const = 0;


/** Replaces the entry at the given position in this list.
@pre 1 <= position <= getLength().
@post The entry at the given position is newEntry.
@param position The list position of the entry to replace.
@param newEntry The replacement entry. */
    virtual void setEntry(int position, const ItemType &newEntry) = 0;


}; // end ListInterface


#endif //LINKEDLISTS_LISTINTERFACE_H
