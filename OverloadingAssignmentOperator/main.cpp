#include <iostream>

using namespace std;

class Test {
private:
    int id;
    string name;
public:
    Test() : id(0), name("") {}

    Test(int id, string name) : id(id), name(name) {}

    void print() {
        cout << id << ": " << name << endl;
    }

    const Test &operator=(const Test &other) {
        cout << "Assignment running " << endl;
        id = other.id;
        return *this;
    }

    Test(const Test &other) {
        cout << "copy constructor running " << endl;
        id = other.id;
        name = other.name;
    }
};

int main() {
    Test test1(10, "Mike");
    cout << "Print test1 " << flush;
    test1.print();


    Test test2(20, "Bob");
    test2.print();

    Test test3;
    //test3 = test2=test1;

    test3.operator=(test2);
    cout << "Print test3 " << flush;
    test3.print();

    cout << endl;
    //copy initialization
    Test test4 = test1;
    test4.print();


    return 0;
}
/*
 * output
 * C:\Users\sousa\Desktop\github\C++\OverloadingAssignmentOperator\cmake-build-debug\OverloadingAssignmentOperator.exe
Print test1 10: Mike
20: Bob
Assignment running
Print test3 20:

copy constructor running
10: Mike

Process finished with exit code 0

 */