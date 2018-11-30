#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test {
private:
    string name;
public:
    Test(string name) : name(name) {}

    ~Test() {}

    void print() { cout << name << endl; }
};

int main() {

    //creating a stack of my object LIFO
    stack<Test> testStack;
    testStack.push(Test("Mike"));
    testStack.push(Test("Bea"));
    testStack.push(Test("Lara"));

//    Test &test1 = testStack.top();
//    testStack.pop();
//    test1.print();
//
//    testStack.pop();
//    Test test2 = testStack.top();
//    test2.print();

    while (testStack.size() > 0) {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    cout << endl;

    queue<Test> testQueue;
    testQueue.push(Test("Dad"));
    testQueue.push(Test("Mom"));
    testQueue.push(Test("Bro"));

    while (testQueue.size() > 0) {
        Test &test1 = testQueue.front();
        test1.print();
        testQueue.pop();
    }
    
    return 0;
}