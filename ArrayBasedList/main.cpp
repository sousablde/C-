#include <iostream>
#include "unsortedArrayBasedList.h"

using namespace std;

int main() {
    unsortedArrayBasedList o1;
    o1.insertItem(5);
    o1.insertItem(6);
    o1.insertItem(7);
    o1.insertItem(8);
    o1.insertItem(9);

    //display the list
    o1.display();

    //remove an item, moves last item to emptyed position
    o1.deleteItem(7);

    return 0;
}