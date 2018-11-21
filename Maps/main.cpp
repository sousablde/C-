#include <iostream>
#include <map>//storing key value pairs, works like key value table

using namespace std;


int main() {
    map<string, int> ages;  //int his case the string can be the name of the people and the int can be the age


    //to add items to the map we can use an overloaded array subscript operator
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Miles"] = 30;

    cout << ages["Raj"] << endl;//output will be 20

    //iterate through maps
    //the keys are unique, if we try to add a value to the same key we will overwrite it
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    //testing if value is in the map
    cout << ages["Sue"] << endl;//output will be 0, Sue will be there but with no age associated to it

    //better way to test values is by using:
    if (ages.find("Vicky") != ages.end()) {
        cout << "found Vicky " << endl;
    } else {
        cout << "this key was not found " << endl;

    }

    //alternative way to loop through this maps
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        pair<string, int> age = *it;

        cout << age.first << ": " << age.second << endl;
    }

    //based on the previous method of iterating through a map we have a different way to add things to table
    pair<string, int> addToMap("Peter", 100);//using a construtor directly
    ages.insert(addToMap);

    /*
     * other ways to add things in pairs:
     * ages.insert(pair<string, int>("Peter", 100));
     *
     * ages.insert(make_pair("Peter", 100));
     * */

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        pair<string, int> age = *it;

        cout << age.first << ": " << age.second << endl;
    }


    return 0;
}