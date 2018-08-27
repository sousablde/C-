//
// Created by sousa on 8/23/2018.
//

#include "OnlognSolution.h"

OnlognSolution::OnlognSolution() {}

int OnlognSolution::getNums(int index)  {
     return nums[index];
}

void OnlognSolution::setNums(int index, int num) {
    nums[index] = num;
}

int OnlognSolution::getTarget() {
    return target;
}

void OnlognSolution::setTarget(int target) {

}

/*assuming a non sorted array I chose quicksort (O (nlogn))
to sort the array, divide and conquer algo
picks element as pivot and partitions array around pivot
*/

// utility function to swap two elements
void OnlognSolution::swap(int *numsi, int *numsj){
    int temp=*numsi;
    *numsi=*numsj;
    *numsj=temp;
}

// partitioning the elements in the array, select
// last element in the array as the pivot
// elements smaller than the pivot placed to the left
// larger elements placed to the right of the pivot

int OnlognSolution::partition (int nums[], int low, int high){
    int pivot = nums[high];

    //determining index for the smaller element
    int i =(low-1);
    for (int j = low; j <= (high - 1); j++) {
        // if current element<=pivot swap it to left
        if (nums[j] <= pivot) {
            i++; // increment index of smaller element
            swap(&nums[i], &nums[j]);
            //cout << "in partition if statement " << nums_array[i] << " "<< nums_array[j] << endl;
        }
    }

    swap(&nums[i + 1], &nums[high]);
    //cout << "in partition outside for loop " << nums_array[i + 1] << " "<< nums_array[high] << endl;

    return (i + 1);

}

void OnlognSolution::quickSort(int nums[], int low, int high){
    if (low < high) {
        /* pi is partitioning index, nums_array[p] is now
           at right place */
        int pi = partition(nums, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(nums, low, pi - 1);
        quickSort(nums, pi + 1, high);
    }
}

void OnlognSolution::findTarget(int target){

    for (int i = 0; i < 5; i++) {
        cout << "test find target function "<<nums[i]<<" and test target is "<< target << endl;
        if (nums[i] > target) {
            cout << "Element not found :(" << endl;
        }

        for (int j = i + 1; j < 5; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Result indexes: " << i << " and " << j << endl;
            } else if (nums[i] + nums[j] > target) {
                break;
            }
        }
    }
}

