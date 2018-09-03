#include <iostream>

using namespace std;
/*
 * let's imagine we want a generic compare function
 */

//define a template
template<class T>
int smartCompare(const T &a, const T &b) {
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}

//instantiate the template for the specific type I care about
int smartCompare(const string &a, const string &b) {
    int x, y = 0;
    bool convertStringToInt = true;
    std::string::size_type sz;   // alias of size_t
    // try and convert both strings to ints.
    // if possible - compare the 2 strings as numbers
    try {
        x = std::stoi(a, &sz);
    }
    catch (...) {
        cout << "Conversion to int failed " << a << endl;
        convertStringToInt = false;
    }

    try {
        y = std::stoi(b, &sz);
    }
    catch (...) {
        cout << "Conversion to int failed " << b << endl;
        convertStringToInt = false;
    }
    if (convertStringToInt == true) {
        cout << "Converted both strings to ints.." << x << "," << y << endl;
        return smartCompare(x, y);
    }
    // if not, then compare as strings after all
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;


}


int main() {
    int a = 5;
    int b = 10;
    int i = smartCompare(a, b);
    cout << i << endl;


    string firstName("Beatriz");
    string lastName("Sousa");
    i = smartCompare(firstName, lastName);
    cout << i << endl;

    i = smartCompare(string("100"), string("203"));
    cout << i << endl;


}
