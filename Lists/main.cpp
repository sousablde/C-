#include <iostream>
#include <list>

using namespace std;

int main() {

    //in vectors we are restricted to where we can add or remove elements but not with lists
    //in the vector the elements are in continuous memory
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    list<int>::iterator iti = numbers.begin();
    iti++;
    numbers.insert(iti, 100);
    cout << "element: " << *iti << endl;


    list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;
    eraseIt = numbers.erase(eraseIt);
    cout << "element: " << *eraseIt << endl;



    //can only do forwards and backwards with iterator so only ++ or --

    for (list<int>::iterator it = numbers.begin(); it != numbers.end();) {
        if (*it == 2) {
            numbers.insert(it, 1234); //inserting elements before element 2
        }

        if (*it == 1) {
            it = numbers.erase(it);//erasing element 1 from the list
        } else {
            it++;
        }
        cout << *it << endl;
    }

    return 0;
}