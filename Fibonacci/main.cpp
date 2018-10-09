#include <iostream>
#include <ctime>

using namespace std;

int fib(int n) {

    if (n <= 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int fibIterative(int n) {
    int current = 1, next = 1, previous = 1;
    for (int i = 3; i <= n; i++) {
        // first, put rabbit(i) into next
        next = current + previous;
        // now, set up previous and current for next
        previous = current;
        current = next;
    }
    return next;
}

int main() {

    time_t start = time(NULL);
    cout << "Fibonacci: " << fib(45) << endl;
    double fibTime = difftime(time(NULL), start);

    time_t beg = time(NULL);
    cout << "Iterative: " << fibIterative(45) << endl;
    double itTime = difftime(time(NULL), beg);

    cout << "Fib took " << fibTime << " seconds" << endl;
    cout << "Iterative took " << itTime << " seconds " << endl;

}