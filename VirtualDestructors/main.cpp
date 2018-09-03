#include <iostream>

using namespace std;

/*
 * any class that might ever be a base class should have a virtual destructor
 * for example if shape does not have a virtual destructor there will be memory leak
 * the shape destructor would be called but, not the rectangle destructor
 * derived class objects will only be cleaned up if the base class destructor is virtual
 * as of note, virtual functions should not have default parameters
 * default values are statically bound while virtual functions are dynamically bound
 * derived class function will be called but with the base class default values
 * any time the base class changes default values the derived class must do the same to stay in sync
 */

class Shape {
private:
public:
    string shapeType;

    virtual void print() {
        cout << "I am a shape" << endl;
    }

    Shape() {
        shapeType = "Unknown";
        cout << "Inside the Shape constructor" << endl;
        print(); //BAD!
    }

    virtual ~Shape() {
        cout << "Inside the Shape destructor" << endl;
        print();
    }
};


class Rectangle : public Shape {
public:
    int rectangle_length;
    int rectangle_breadth;

    virtual void print() {
        cout << "I am a rectangle" << endl;
    }

    Rectangle() {
        cout << "Inside the Rectangle constructor" << endl;
    }

    ~Rectangle() {
        cout << "Inside the Rectangle destructor" << endl;
    }
};


int main() {

    Shape *s = new Rectangle();
    delete s;
}
