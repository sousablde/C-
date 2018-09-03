#include <iostream>

using namespace std;

/*
 * each templated class can have multiple templated parameters
 *
 *
 */

template<class KeyType, class ValueType>
class KeyValuePair {
private:
    KeyType key;
    ValueType value;
public:
    KeyValuePair(KeyType k, ValueType v) : key(k), value(v) {
        cout << "Inside the class template (not a specialisation)" << endl;
    }

    KeyType getKey() const {
        return key;
    }

    ValueType getValue() const {
        return value;
    }

};

//this is an example ot customizing implementation and do a specialization
template<>//this announces the specialization
class KeyValuePair<string, string> {//all the parameters are specified as templated parameters
private:
    string key;
    string value;
public:
    KeyValuePair(string k, string v) : key(k), value(v) {
        cout << "Inside the complete template specialisation" << endl;
    }

    string getKey() const {
        return key;
    }

    string getValue() const {
        return value;
    }

};


//this is an example of a partial specialization
//only some of the parameters are specified
template<class KeyType>
class KeyValuePair<KeyType, int> {
private:
    KeyType key;//here is the partial specialization
    int value;
public:
    KeyValuePair(KeyType k, int v) : key(k), value(v) {
        cout << "Inside the partial template specialisation!" << endl;
    }

    KeyType getKey() const {
        return key;
    }

    string getValue() const {
        return value;
    }

};

int main() {
    string firstName("B");
    string lastName("S");

    KeyValuePair<string, string> pair1(firstName, lastName);
    KeyValuePair<string, int> pair2(firstName, 1);
    KeyValuePair<float, float> pair3(9.2, 1.4);
}
