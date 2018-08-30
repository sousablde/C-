#include <iostream>
/*
 * please use this as reference
 * https://en.wikibooks.org/wiki/C%2B%2B_Programming/Operators/Operator_Overloading
 */
using namespace std;

class ComplexNumber {
private:
    float realPart;
    float complexPart;
public:
    ComplexNumber(double c, double r) : realPart(r), complexPart(c) {
        cout << "Inside the 2-argument constructor" << endl;
    }

    /*
     * overloading the operator
     * we use the keyword operator to define what we want to overload
     * in this case &rhs refers to object b in main  in a+=b;
     * this is also a reference to a complex value ComplexNumber& to support operator chaining
     */
    const ComplexNumber operator+(const ComplexNumber &rhs) const {
        ComplexNumber result(this->realPart + rhs.realPart,
                             this->complexPart + rhs.complexPart);
        return result;
    }


    ComplexNumber &operator+=(const ComplexNumber &rhs) {
        this->realPart += rhs.realPart;//sums right hand side real part
        this->complexPart += rhs.complexPart;//sums right hand side imaginary part
        return *this; //we dereference and return a reference to self
    }

    ComplexNumber &operator++() {
        cout << "Inside the pre-increment operator" << endl;
        this->realPart++;
        this->complexPart++;
        return *this;
    }

    // a++ i.e. the post-increment
    const ComplexNumber operator++(int) {
        cout << "Inside the post-increment operator" << endl;
        ComplexNumber result(this->realPart, this->complexPart);
        this->realPart++;
        this->complexPart++;
        return result;
    }


    void setRealPart(double r) {
        realPart = r;
    }

    void setComplexPart(double c) {
        complexPart = c;
    }

    float getRealPart() {
        return realPart;
    }

    float getComplexPart() {
        return complexPart;
    }

    void print() {
        cout << "real = " << realPart << " complex = " << complexPart << endl;
    }

    friend ostream &operator<<(ostream &s, const ComplexNumber &c);

    friend istream &operator>>(istream &s, ComplexNumber &c);
};

ostream &operator<<(ostream &outputStream, const ComplexNumber &complexNumber) {
    outputStream << "real = " << complexNumber.realPart << " complex = " << complexNumber.complexPart << endl;
    return outputStream;
}

istream &operator>>(istream &inputStream, ComplexNumber &complexNumber) {
    inputStream >> complexNumber.realPart >> complexNumber.complexPart;
    return inputStream;
}

class Student {
private:
    char *studentName;
public:
    Student(const char *name) {
        cout << "Inside constructor: passed in string = " << name << endl;
        studentName = new char[50];
        strcpy(studentName, name);
        cout << "Initialized string to: " << studentName << endl;
    }

    ~Student() {
        cout << "Freeing up memory for string " << studentName << endl;
        delete[] studentName;
    }

    const Student &operator=(const Student &rhs) {
        // 1. check for self-assignment
        if (this != &rhs) {
            // 2.  Deallocate any memory that Student is using internally
            cout << "Freeing up memory for string " << studentName << endl;
            delete[] studentName;
            if (rhs.studentName != NULL) {
                // 3.  Allocate some memory to hold the contents of rhs
                studentName = new char[50];
                // 4.  Copy the values from rhs into this instance
                strcpy(studentName, rhs.studentName);
            }
        }
        // 5.  Return *this
        return *this;
    }


    void print() {
        cout << "StudentName:" << studentName << endl;
    }
};

int main() {
    ComplexNumber a(3, 5);
    ComplexNumber b(7, 6);
    ComplexNumber c(9, 11);

    a.print();
    a += b; //this will produce (3+7 and 5+6 so (10,11))
    a.print();

    ComplexNumber d = a + b;
    ComplexNumber e(0, 0);

    a.print();
    b.print();
    d.print();

    // will not compile, because operator+ returns a const, *NOT* a const reference
    (a + b) = e;

    //int x,y,z;
    //(x+y)=z; // will not compile for ints, should not compile for user-defined classes either

    cout << "Initial value of a" << endl;
    a.print();

    cout << "Now call the post-increment operator" << endl;
    ComplexNumber b = a++;

    cout << "Result of b=a++ was " << endl;
    b.print();


    cout << "Now the value of a is" << endl;
    a.print();

    cout << "Now call the pre-increment operator" << endl;
    ComplexNumber c = ++a;

    cout << "Result of c=++a was " << endl;
    c.print();

    cout << "Now the value of a is" << endl;
    a.print();

    //  int x,y;
    ++a = b; // should compile - because pre-increment returned non-const reference
    a++ ++;  // should not compile - because post-increment returned const

    ComplexNumber a(3, 5);
    cout << "Initial value of a" << a << endl;

    cin >> a;
    cout << "Final value of a" << a << endl;

    const char name1[50] = "Vitthal";
    Student student1(name1);
    student1.print();

    const char name2[50] = "Janani";
    Student student2(name2);
    student2.print();
    Student student3(name1);

    student1 = student2;
    cout << "After executing student1 = student2, values inside student2 are" << endl;
    student1.print();

    //int x=3,y=5,z=15;
    //(x = y) = z;
    cout << x << endl;
    cout << "Exiting the program - last line of code. Bye!" << endl;
    return 0;


}
