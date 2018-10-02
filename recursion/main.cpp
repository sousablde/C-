#include <iostream>
#include <algorithm>

using namespace std;

/*
For function multiply, write the missing base case condition and action. This function will multiply two numbers x and
 y. You can assume that both x and y are positive.
*/
int multiply(int x, int y);

/*
Write the missing base case for function largest. Function largest should find the largest number in array numbers.
 When largest is first called, index will equal numbers.length-1.
*/
int largest(int numbers[], int len);

/*
The greatest common divisor (GCD) for a pair of numbers is the largest positive integer that divides both numbers
 without remainder. For function GCD, write the missing base case condition and action. This function will compute
 the greatest common divisor of x and y. You can assume that x and y are both positive integers and that x > y.
 Greatest common divisor is computed as follows:
GCD(x, 0) = x and GCD(x, y) = GCD(y, x % y).
*/
int GCD(int x, int y);

/*
For function log, write the missing base case condition and the recursive call. This function computes the log of n
 to the base b. As an example: log 8 to the base 2 equals 3 since 8 = 2*2*2. We can find this by dividing 8 by 2 until
 we reach 1, and we count the number of divisions we make. You should assume that n is exactly b to some integer power.
*/
int logCalc(int b, int n);

/*
For function sumtok, write the missing recursive call. This function returns the sum of the values from 1 to k.
*/
int sumToK(int k);


int main() {

    int numbers[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(numbers) / sizeof(numbers[0]);

    int x = 3;
    int y = 7;

    int b = 2;
    int n = 8;

    int k = 10;

    cout << "multiply function results: " << multiply(x, y) << endl;

    cout << "largest function results: " << largest(numbers, len) << endl;

    cout << "GCD function results: " << GCD(x, y) << endl;

    cout << "log function results: " << logCalc(b, n) << endl;

    cout << "sumToK function results: " << sumToK(k) << endl;


}

int multiply(int x, int y) {
    if (x == 1) {
        return y;
    } else {
        return multiply(x - 1, y) + y;
    }

}

int largest(int numbers[], int len) {

    //base case when array only has one element
    if (len == 1) {
        return numbers[0];
    } else {
        return max(numbers[len - 1], largest(numbers, len - 1));
    }

}


int GCD(int x, int y) {
    //case for division by 0
    if (x == 0 || y == 0) {
        return 0;
    }
        //base case, x and y are the same number
    else if (x == y) {
        return x;
    }
        //when x>y
    else if (x > y) {
        return (x % y, y);
    } else {//when y>x
        return GCD(y, x % y);
    }


}

int logCalc(int b, int n) {
    //base case when we look at log of 1
    if (n == 1) {
        return 0;
        //case for when base is same as n
    } else if (b == n) {
        return b;
    } else {
        return (log(n) / log(b));
    }
}

int sumToK(int k) {
    if (k <= 0) {
        return 0;
    } else if (k == 1) {
        return 1;
    } else {
        return k + sumToK(k - 1);
    }
}