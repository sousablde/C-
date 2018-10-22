/*
Important: Please submit your final homework as a one file here for all the coding questions with name FirstnameLastname.cpp whether or not you opt to do this extra credit question. Preferred way is you write all your solutions as functions in a single main driver program and test in the same so that I can run this one driver program and grade.

Extra credit question:

Note though the marks as shown is 0, this question has 10 point extra credit. It may be bit difficult or may be bit open-ended. But I encourage all to try this question. Canvas has shortcoming in implementing the extra credit. So I will give fudge points up to 10. For example, if you did everything correct in this question I will add extra 10 marks using Canvas fudge point feature. So if you do all things correct in this homework you will earn 110 marks out of 100.

Test whether a given integer is a prime number is very crucial in many areas of computer science. Write a C++ recursive function to check whether a given integer is prime or not. In order to receive full credit, you must have two base cases and use the definition of prime numbers (Links to an external site.)Links to an external site. (linked inline) to figure them out. Sample result:

isPrime(2) -> true;

Please upload your file here.
*/
#include <iostream>

using namespace std;

bool isPrime(int n, int m);

int main() {
    int n = 3;
    cout << "the number " << n << endl;

    if (isPrime(n, (n - 1)) == true) {
        cout << " is Prime " << endl;
    } else {
        cout << " is not prime" << endl;
    }
}

bool isPrime(int n, int m) {
    if (n < 2) {
        return 0;
    } else if (m == 1) {
        return true;
    } else {
        if (n % m == 0) {
            return false;
        } else {
            return isPrime(n, m - 1);
        }
    }
}