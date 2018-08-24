#include <iostream>

using namespace std;

void manipulate(double value) {
    value = 10.0;
    cout << "value of int in manipulate is " << value << endl;
}

void manipulate2(double *value) {
    //no point having this here because what I am passing is the address
    //value = 10.0;

    //by dereferencing I will effectively be changing the value
    *value = 10.0;
    cout << "value of int in manipulate2 is " << *value << endl;
}

void changeSomething(double rvalue) {
    rvalue = 89.0;//this variable will not affect what is outputed in main
}

//this now becomes a reference to the svalue variable in main
void changeSomething2(double &rvalue) {
    rvalue = 89.0;//this variable will not affect what is outputed in main
}

int main() {
    int nValue = 8;
    nValue = 9;
    cout << "int value is " << nValue << endl;
    /*
     * output
     * int value is 9
     */

    //creating a pointer to an int equals the address of nValue
    int *pnValue = &nValue;
    cout << "pointer to int address  " << pnValue << endl;
    /*
     * output
     * pointer to int address  0x61ff18
     */

    //dereferencing the pointer gives the value the pointer points to
    cout << "int value via pointer  " << *pnValue << endl;
    /*
     * output
     * int value via pointer  9
     */

    double dValue = 123.4;
    cout << "dvalue is " << dValue << endl;
    manipulate(dValue);
    cout << "dvalue after calling manipulate function " << dValue << endl;
    /*
     * output of this sequence
     * dvalue is 123.4
     *value of int in manipulate is 10
     *dvalue after calling manipulate function 123.4
     */

    dValue = 567.8;
    cout << "dvalue before manipulate 2 " << dValue << endl;
    manipulate2(&dValue);
    cout << "dvalue after calling manipulate2 function " << dValue << endl;
    /*
     * output
     * dvalue before manipulate 2 567.8
     *value of int in manipulate2 is 10
     *dvalue after calling manipulate2 function 10
     */

    /*
     *
     * Pointers and Arrays
     *
     *
     */

    string texts[] = {"one", "two", "three"};

    //to get the number of elements in the array
    cout << sizeof(texts) / sizeof(string) << endl;
    /*
     * output
     * 3
     */

    //ouput the string array
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << texts[i] << endl;
    }
    /*
     * output
     * one
     *two
     *three
     */

    //this pointer only knows the size of the first block of data
    //so the for loop needs to be different
    //I can just dereference the pointer
    string *ptexts = texts;
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << *ptexts << endl;
        ptexts++;
    }
    /*
     * one
     *two
     *three
     */

    //pointing to beginning of array
    string *pElement = &(texts[0]);
    //to get the address to the end of the array
    string *pEnd = &(texts[2]);

    while (true) {
        cout << *pElement << " " << flush;
        //reaching the end of the array and ending the loop
        if (pElement == pEnd) {
            break;
        }
        pElement++;
    }
    /*
     * ouptut
     * one two three
     */


    /*
     *
     *
     * References
     *
     */
    int value1 = 8;
    int value2 = value1;
    value2 = 10;
    cout << "value 1 is " << value1 << " value2 is " << value2 << endl;

    int value3 = 8;
    //reference values just create aliases to existing variables
    int &value4 = value3;//value2 is a reference to value1 || value2 just becomes another name to value1
    value4 = 10;
    cout << "value3 is " << value3 << " value4 is " << value4 << endl;

    double svalue = 234.5;
    changeSomething(svalue);
    cout << "svalue after changeSomething function is " << svalue << endl;
    /*
     *output
     * value 1 is 8 value2 is 10
     *value3 is 10 value4 is 10
     *svalue after changeSomething function is 234.5
     *
     */
    changeSomething2(svalue);
    cout << "svalue after changeSomething function is " << svalue << endl;
    /*
     * output
     * svalue after changeSomething function is 89
     */
    
    return 0;
}