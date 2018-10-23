#include <iostream>
#include <iomanip>
#include <algorithm>


using namespace std;
const double PI = 3.141592653589793238463;

/*
 * Question 5 Write a c++ function to print out multiplication table for 1 to 12. Your program should print a header row
 * and a header column to represent each number.
 */
void multiplicationTable() {
    int width = 4;

    for (int i = 1; i <= 12; i++) {
        cout << setw(width) << i << setw(width) << "|";

        for (int j = 1; j <= 12; j++) {
            if (i == 1) {
                cout << setw(width) << j;
                if (j == 12) {
                    cout << endl;
                }
            } else {
                cout << setw(width) << i * j;
                if (j == 12) {
                    cout << endl;
                }
            }
        }
    }
}

/*
 * Question 6
 * Write a C++ function to print out all unique letters of a given string. You are free to use any C++ standard library
 * function including STL and your middle school math knowledge here.
 */
void distinctPrinter(string s) {

    int len = s.length();
    const int MAX = 256;

    //stores count of characters
    int count[MAX];

    //saves index of each character
    int index[MAX];

    //initialize count and index
    for (int i = 0; i < MAX; i++) {
        count[i] = 0;
        index[i] = len;
    }

    //traverse string
    for (int j = 0; j < len; j++) {
        //check current character and count status
        char str = s[j];
        count[str]++;

        //if first time appearing set value in index
        if (count[str] == 1 && str != ' ') { index[str] = j; }

        //if character repeats remove from index
        if (count[str] == 2) { index[str] = len; }

    }
    sort(index, index + MAX);

    //printing out unique characters
    for (int k = 0; k < MAX && index[k] != len; k++) { cout << s[index[k]]; }
    cout << endl;

}

string pangramCheck(string &s) {

    //checker for alphabet presence
    vector<bool> check(26, false);

    int len = s.length();
    int indexes = 0;

    //traverse characters
    for (int l = 0; l < len; l++) {
        //dealing with upper and lower case
        if ('A' <= s[l] && s[l] <= 'Z') { indexes = s[l] - 'A'; }
        else if ('a' <= s[l] && s[l] <= 'z') { indexes = s[l] - 'a'; }

        //current character
        check[indexes] = true;
    }

    //traverse string and check for all character presence
    for (int m = 0; m <= 25; m++) {
        if (check[m] == false) {
            return "This string is not a pangram. ";
        }
    }
    return "This string is a pangram. ";

}

/*
 * Question 7
 * Shifting each element by given amount toward the left is called "left rotation" of an array. For example,
 * if 2 left rotations are performed on the array [1, 2, 3, 4, 5], then the array would become [3, 4, 5, 1, 2].
 * Given an array of integers and a number, "r" (how many rotations), perform "r" left rotations on the array.
 *
 */

void leftRotate(int rotator[]) {
    const int SIZE = 10;
    int r = 0;
    cout << "How many rotations -r- do you want? " << endl;
    cin >> r;
    cout << "rotated resulting array: " << endl;

    for (int i = 0; i < (SIZE - r); i++) {
        //cout << "current: " << rotator[i] << " rotated: " << rotator[i + r] << endl;
        rotator[i] = rotator[i + r];
        cout << rotator[i + r] << " ";
    }
    cout << endl;
}

/*
 * Question 8
 * Write a C++ ADT to represent an Ellipse. In the Cartesian coordinate system, an ellipse can be uniquely identified
 * by its x and y coordinates of the center, semi-major axis(a) and semi-minor axis (b). Other than getters and setters,
 * an ellipse involves two operations, calculate area and calculate the perimeter. Above ADT should be an abstract
 * class. Then write an Ellipse class to fully implement your ADT.
 */
class Shape {
protected:
    double a, b;

public:
    virtual double calcA(double a, double b) = 0;

    virtual double calcP(double a, double b) = 0;


};

class Ellipse : public Shape {
private:
    double dx, dy, c;

public:
    Ellipse() {}

    double getDx() const {
        return dx;
    }

    void setDx(double dx) {
        Ellipse::dx = dx;
    }

    double getDy() const {
        return dy;
    }

    void setDy(double dy) {
        Ellipse::dy = dy;
    }

    double getA() const {
        return a;
    }

    void setA(double a) {
        Ellipse::a = a;
    }

    double getB() const {
        return b;
    }

    void setB(double b) {
        Ellipse::b = b;
    }


    double getC() const {
        return c;
    }

    void setC(double c) {
        Ellipse::c = c;
    }

    double calcA(double a, double b) override {

        return (PI * a * b);
    }

    double calcP(double a, double b) override {
        double h = (pow((a - b), 2)) / (pow((a + b), 2));
        double peri = (PI * (a + b)) * (1 + ((3 * h) / 10 + sqrt(4 - 3 * h)));
        return peri;
    }
};

class Circle : public Ellipse {
public:
    double calcA(double a) {
        return (PI / 4 * (pow(a, 2)));
    }

    double calcP(double a) {
        return PI * a;
    }

};

/*
 * Write a C++ function to return the factorial of any given number <=30. Pass the number of as a parameter to the
 * function. Validate your parameter for >30 and <0 values. Test your program in a a driver program.
 *
 */
int factorial(int number) {
    if (number < 0 || number > 30) {
        cout << "the selected value is out of bounds " << endl;
    } else if (number > 1) {
        return (number * factorial(number - 1));
    } else {
        return 1;
    }

}

/*
 * Function templates (Links to an external site.)Links to an external site. are special function that can perform a
 * single operation across a variety of types. This way we can avoid rewriting same function for different types
 * specifically.
 * Write a C++ function template to support add operation. We can add two integers, float and double and strings.
 * When we add strings together, this operation can be considered as concatenating the two strings one after the other.
 * Call your function template to add two integers, two doubles, two strings in a driver program.
 *
 */
template<typename T>
T addi(T arg1, T arg2) {

    return (arg1 + arg2);
}

/*
 * Write your wrapper class for an array size 100 and use it to write your iterator class. Write a driver program
 * to print out an example array in steps of 3 using the iterator you designed.
 *
 */
class ArrayContainer {
private:
    vector<int> arr(

    100);

    void initializeArray() {
        for (int i = 0; i < 100; i++) {
            arr(i) = rand() % 101;

        }
    }

public:


};

/*
 * Main/Driver
 */
int main() {
    //question 5
    multiplicationTable();

    //question 6
    string s;
    cout << "Please enter test string for question 6: " << endl;
    getline(cin, s);
    distinctPrinter(s);
    string answer = pangramCheck(s);
    cout << answer << endl;

    //question 7
    int rotator[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    leftRotate(rotator);

    //question 8
    double a, b;
    cout << "Please enter a and b: " << endl;
    cin >> a >> b;

    if (a == b) {
        Circle c1;
        cout << "Circle area is: " << c1.calcA(a) << " Perimeter is: " << c1.calcP(a) << endl;

    } else {
        Ellipse e1;
        cout << "Ellipse area is: " << e1.calcA(a, b) << " Perimeter is: " << e1.calcP(a, b) << endl;
    }

    //question 9
    int number = 0;
    cout << "Please enter a number you want to find the factorial for: " << endl;
    cin >> number;
    cout << "Factorial of " << number << " = " << factorial(number) << endl;

    //question 10
    int int1 = 1, int2 = 2;
    double double1 = 1.11, double2 = 2.22;
    string s1 = "Pine", s2 = "cone";

    cout << "Adding with int: " << addi(int1, int2) << endl;
    cout << "Adding with double: " << addi(double1, double2) << endl;
    cout << "Adding with string: " << addi(s1, s2) << endl;

    return 0;
}

/*
 * output
 * C:\Users\sousa\Desktop\github\C++\HW\cmake-build-debug\HW.exe
   1   |   1   2   3   4   5   6   7   8   9  10  11  12
   2   |   2   4   6   8  10  12  14  16  18  20  22  24
   3   |   3   6   9  12  15  18  21  24  27  30  33  36
   4   |   4   8  12  16  20  24  28  32  36  40  44  48
   5   |   5  10  15  20  25  30  35  40  45  50  55  60
   6   |   6  12  18  24  30  36  42  48  54  60  66  72
   7   |   7  14  21  28  35  42  49  56  63  70  77  84
   8   |   8  16  24  32  40  48  56  64  72  80  88  96
   9   |   9  18  27  36  45  54  63  72  81  90  99 108
  10   |  10  20  30  40  50  60  70  80  90 100 110 120
  11   |  11  22  33  44  55  66  77  88  99 110 121 132
  12   |  12  24  36  48  60  72  84  96 108 120 132 144
Please enter test string for question 6:
absde
absde
absde
This string is not a pangram.
Please enter a and b:
2
2
3
3
Ellipse area is: 18.8496 Perimeter is: 46.8376
Please enter a number you want to find the factorial for:
3
3
Factorial of 3 = 6
Adding with int: 3
Adding with double: 3.33
Adding with string: Pinecone

Process finished with exit code 0

 *
 *
 */