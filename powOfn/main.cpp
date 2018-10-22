/*
Write a recursive C++ method, powOfn() to calculate the n th power of a given number, m. n is an integer and m is a double value.

Please copy paste your code here and change the formatting to "Preformatted" by selecting "Paragraph" drop-down menu above.
*/
#include <iostream>

using namespace std;

double powOfn(int n, double m);

int main() {
    int n = 3;
    double m = 4.0;
    cout << "the result for base " << n << " power " << m << " is " << powOfn(n, m) << endl;
}

double powOfn(int n, double m) {
    if (m == 0) {
        return 1;
    } else {
        return (n * powOfn(n, m - 1));
    }

}