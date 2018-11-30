#include <iostream>
#include <set>

using namespace std;

class Test {
    int id;
    string name;
public:
    Test(int id, string name) : id(id), name(name) {}

    void print() const { cout << id << ": " << name << endl; }

    bool operator<(const Test &other) const {
        return name < other.name;
    }
};


int main() {

    set<int> numbers;
    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(40);

    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }

    set<int>::iterator itFind = numbers.find(30);

    if (itFind != numbers.end()) {
        cout << "Found: " << *itFind << endl;
    }

    if (numbers.count(30)) {
        cout << "Number found " << endl;
    }

    set<Test> tests;
    tests.insert(Test(10, "Mike"));
    tests.insert(Test(20, "joe"));
    tests.insert(Test(30, "bea"));
    tests.insert(Test(40, "Paco"));

    for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
        it->print();
    }

    return 0;
}
/*
 * output
 * C:\Users\sousa\Desktop\github\C++\Sets\cmake-build-debug\Sets.exe
10
20
30
40
50
Found: 30
Number found
10: Mike
40: Paco
30: bea
20: joe

Process finished with exit code 0

 */