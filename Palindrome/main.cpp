
/*
A string is a palindrome if it reads the same forward or backward. For example racecar or madam. Write a recursive function named 'isPalindrome' that takes a string as input and returns true if the string is a palindrome and false if it is not a palindrome. You can limit your solution to single case one word.

Examples: isPalindrome("madam") -> true.

Please copy paste your code here and change the formatting to "Preformatted" by selecting "Paragraph" drop-down menu above.
*/
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string test);

int main() {
    string test = "racecar";
    cout << "test word : " << test << " is " << endl;

    if (isPalindrome(test) == true) {
        cout << " a palindrome" << endl;
    } else {
        cout << " not a palindrome " << endl;
    }
    return 0;
}

bool isPalindrome(string test) {
    if (test.length() <= 1) {
        return true;
    } else if (test.at(0) == test.at((test.length()) - 1)) {
        test = test.substr(1, ((test.length()) - 2));

        return isPalindrome(test);
    } else {
        return false;
    }

}