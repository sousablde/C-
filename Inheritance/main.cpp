#include <iostream>

using namespace std;

class Shape {
private:
    string shapeType;
public:
    Shape() {
        cout << "SHAPE: Inside the default constructor" << endl;
    }

    Shape(string s) : shapeType(s) {
        cout << "SHAPE: Inside the 1-argument constructor" << endl;
    }

    Shape(const Shape &rhs) {
        cout << "SHAPE: Inside the copy constructor" << endl;
        shapeType = rhs.shapeType;
    }

    ~Shape() {
        cout << "SHAPE: Inside the destructor" << endl;
    }

    Shape &operator=(const Shape &rhs) {
        cout << "SHAPE: Inside the assignment operator" << endl;
        // 1. check for self-assignment
        if (this != &rhs) {
            shapeType = rhs.shapeType;
        }
        // 5.  Return *this
        return *this;
    }

};

/*
 * inheritance models is-a relationships
 * hte constructor from the class shape is implicitly called
 * from the constructor of the circle
 * during the destruction of the circle the destructor of the shape
 * is implicitly called
 * shape is the base class
 * circle is the derived class
 * constructors are first called in the base class and only after in the derived class
 * destructors are first called in the derived classes and only after in the base class
 *when a class inherits from another class every object of the child class has a copy of the parent in it
 *a circle is-a shape
 * derived classes can access any member variables or member functions of the base class that are public or protected
 * but not if they are private
 */

class Circle : public Shape {
private:
    float radius;
public:
    Circle() : radius(0.0) {
        cout << "CIRCLE: Inside the default constructor" << endl;
    }

    Circle(string s, float r) : Shape(s), radius(r) {
        cout << "CIRCLE: Inside the 1-argument constructor" << endl;
    }

    Circle(const Circle &rhs) {
        cout << "CIRCLE: Inside the copy constructor" << endl;
        radius = rhs.radius;
    }

    ~Circle() {
        cout << "CIRCLE: Inside the destructor" << endl;
    }

    Circle &operator=(const Circle &rhs) {
        cout << "CIRCLE: Inside the assignment operator" << endl;
        // 1. check for self-assignment
        if (this != &rhs) {
            Shape::operator=(rhs);
            radius = rhs.radius;
        }
        // 5.  Return *this
        return *this;
    }

};


int main() {
    //Shape s("Some shape");
    cout << "Start of program" << endl;
    cout << endl << "Instantiate object c1" << endl;
    Circle c1("Some Shape", 3.5);
    cout << endl << "Instantiate object c2" << endl;
    Circle c2("Some other shape", 10.2);
    cout << endl << "Assign c1=c2" << endl;
    c1 = c2;
    cout << endl << "Instantiate object c3 (copy constructor)" << endl;
    Circle c3 = c1;
    cout << endl << "End of program" << endl;
}
