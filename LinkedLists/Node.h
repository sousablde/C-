//
// Created by sousa on 10/30/2018.
//

#ifndef LINKEDLISTS_NODE_H
#define LINKEDLISTS_NODE_H


template<class ItemType>
class Node {
private:
    ItemType item; // A data item
    Node<ItemType> *next; // Pointer to next node
    Node<ItemType> *prev; // Pointer to previous node

public:
    Node();

    Node(const ItemType &anItem);

    Node(const ItemType &anItem, Node<ItemType> *nextNodePtr, Node<ItemType> *prevNodePtr);

    void setItem(const ItemType &anItem);

    void setNext(Node<ItemType> *);

    void setPrev(Node<ItemType> *);

    ItemType getItem() const;

    Node<ItemType> *getNext() const;

    Node<ItemType> *getPrev() const;
}; // end Node



#endif //LINKEDLISTS_NODE_H
