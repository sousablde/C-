#include <iostream>
#include <cmath>


#include "ComplexNumber.h"
#include "ComplexNumber_Polar.h"


ComplexNumber addTwoComplexNumbers
        (const ComplexNumber &cart,
         const ComplexNumber_Polar &polar) {
    float realPart = polar.modulus * cos(polar.argument * ComplexNumber::PI / 180);
    float complexPart = polar.modulus * sin(polar.argument * ComplexNumber::PI / 180);

    ComplexNumber result(realPart + cart.realPart, complexPart + cart.complexPart);
    return result;

}
//class School example on using friends classes

class Student {
private:
    string studentName;
public:
    Student(const char *name) : studentName(name) {
        cout << "Initialized string to: " << studentName << endl;
    }

    friend class School;//declare that class school is a friend giving access to private member variables

};

class School {
private:
    string schoolName;
public:
    School(const char *name) : schoolName(name) {
        cout << "Initialized string to: " << schoolName << endl;
    }

    void admitStudent(const Student &s) {
        cout << "Admitting student " << s.studentName << endl;
    }

    void expelStudent(const Student &s) {
        cout << "Expelling student " << s.studentName << endl;
    }


};


int main() {

    ComplexNumber cart(5, 5);
    ComplexNumber_Polar polar(10, 45);

    ComplexNumber sumOfTwoComplexNumbers = addTwoComplexNumbers(cart, polar);

    cout << "Real part = " << sumOfTwoComplexNumbers.getRealPart()
         << "Complex part = " << sumOfTwoComplexNumbers.getComplexPart() << endl;

    const char studentName[50] = "Vitthal";
    Student student(studentName);

    const char schoolName[50] = "St Johns";
    School school(schoolName);

    school.admitStudent(student);
    school.expelStudent(student);


}


