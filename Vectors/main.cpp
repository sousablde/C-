/*
 * a vector is like a resizeable array
 *vectors are template classes
 *
 *
 *
 *
 *
 *
 *
 *
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    //declaring a vector of type string
    vector<string> strings;

    //vectors can be pre-seized:
    //vector<string> strings(5);

    //can be used in a similar manner to an array
    //strings[3] = "dog";



    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    cout << strings[3] << endl;

    cout << strings.size() << endl;

    for (int i = 0; strings.size(); i++) {
        cout << strings[i] << endl;
    }

    //iterator overloads the star operator allowing it to work like a pointer
    //vector<string>::iterator it = strings.begin();

    //it ++; //also overloads the operator and accesses nect element
    //cout << *it<< endl; //by dereferencing we print the first element

    //iterating through vector
    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
        cout << *it << endl;
    }

    //ON VECTORS AND MEMORY

    //presized vector with 20 elements
    vector<double> numbers(20);

    cout << "Size: " << numbers.size() << endl;

    //determining max size of vector:
    int capacity = numbers.capacity();
    cout << "capacity: " << capacity << endl;

    for (int i = 0; i < 10000; i++) {
        if (numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            cout << "Capacity: " << capacity << endl;
        }
        numbers.push_back(i);
    }
    numbers.clear();
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;


    numbers.resize(100);//for it to work there has to be something in the vector
    cout << numbers[2] << endl;
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;


    return 0;
}