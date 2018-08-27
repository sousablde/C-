//
// Created by sousa on 8/23/2018.
//
/*
 * assuming that the array is ordered in ascending manner


a1<a2<a3< ... <an

(i, j) ai+aj = target

i<-  j<-n

if (ai+aj=t) return (i, j)

if (ai+aj>t) the sum is bigger than the target
the comparisons should be converging to closer to the value of t

if (ai+aj>t)--j

in this case if the value is smaller I shold decrement the value of i
if (ai+aj<t)++i

1)sort the array preferably nlogn algo
2)compare the sums of i, j until i>j and terminate at that point this can move at most n steps so the moving time is o(n)

the dominating step should be the sorting algorithm
 *
 */
#ifndef TWOSUM_ONLOGN_H
#define TWOSUM_ONLOGN_H

#include <iostream>
using namespace std;


class OnlognSolution {

private:
    int nums[5];
    int target;
public:
    OnlognSolution();

    int getNums(int index);

    void setNums(int index, int num);

    int getTarget();

    void setTarget(int target);

    void swap(int *numsi, int *numsj);

    int partition (int nums[], int low, int high);

    void quickSort(int nums[], int low, int high);

    void findTarget(int target);

};


#endif //TWOSUM_ONLOGN_H
