#include <iostream>
#include "unsortedType.h"

using namespace std;

int main() {
    UnsortedType o1;
    o1.insertItem(1);
    o1.insertItem(2);
    o1.insertItem(3);

    o1.display();

    o1.deleteItem(3);

    return 0;
}