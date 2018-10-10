/*
 *
 * notes: this is how binary search using recursion is described
 * in one of my favorite books on the subject: the dictionary example
 *
 * // Search a dictionary for a word by using a recursive binary search
 *if (the dictionary contains only one page )
 *    Scan the page for the word
 *else
 *{
 *    Open the dictionary to a point near the middle
 *    Determine which half of the dictionary contains the word
 *       if ( the word is in the fi rst half of the dictionary )
 *           Search the fi rst half of the dictionary for the word
         else
           Search the second half of the dictionary for the word
 *}
 * by reducing the problem by half each time we achieve a time
 * complexity of log n instead of the O(n) we would have with linear
 * search
 */
#include <iostream>
#include <cmath>

using namespace std;

int binSearch(int arr[], int targetValue, int leftIndex, int rightIndex) {
    int midpoint = (rightIndex + leftIndex) / 2;
    cout << midpoint;

    //our base case should be: the array only has one element
    if ((rightIndex == 0 && targetValue == arr[0]) || arr[midpoint] == targetValue) {
        return targetValue;
    } else if (arr[rightIndex] == targetValue || arr[leftIndex] == targetValue) {
        return targetValue;
    } else if (rightIndex - leftIndex == 1 || leftIndex == rightIndex && arr[leftIndex] != targetValue) {
        return -1;
    }
        //now the cases in which our targetValue is greater or smaller
        //than the value found at midpoint
        //if target is greater than the value at midpoint search on the
        //left portion (descending sorted), if smaller search right side
    else if (targetValue < arr[midpoint]) {
        return binSearch(arr, targetValue, midpoint, rightIndex);
    } else if (targetValue > arr[midpoint]) {

        return binSearch(arr, targetValue, leftIndex, midpoint);
    } else {
        return -1;
    }
}

int main() {
    int arr[] = {35, 28, 22, 18, 12, 8, 5};
    //int arr[]={35};
    int targetValue = 35;
    int arrLen = ceil(sizeof(arr) / sizeof(int));
    int rightIndex = arrLen + 1;
    int leftIndex = 0;

    if (binSearch(arr, targetValue, leftIndex, rightIndex) > 0) {
        cout << "your value was found. " << endl;
    } else
        cout << "your value was not found. " << endl;

    return 0;
}

