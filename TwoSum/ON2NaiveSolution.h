//
// Created by sousa on 8/23/2018.
/*Problem setup
given an array of integers, return indexes of the two numbers such that they add up to a specific target
you may assume that each input would have exactly one solution the same element can't be used twice

example:
given nums = [2,7,11,15], target = 9,
        because nums[0]+nums[1]=2+7=9,
return [0, 1]

approach to the problem:
we have the array:

a1,a2,a3....,an
        we want to find an i and a j such that their sum is equal to the wanted target

(i,j) ai+aj=target i!=j

        I can fix an element in the array and then iterate through all the other elements
int this way if none of the sums is the target, it mean that a5 is not part of the solution

the pseudocode approach would be:

for i <-1 to n (not using 0 indexing): O(n)
for j<-1 to n:O(n)
if (i!=j): O(1)
if (ai+aj===target):
return (i, j)
making this an O (n^2) approach
*/
/*
#ifndef TWOSUM_ON2NAIVESOLUTION_H
#define TWOSUM_ON2NAIVESOLUTION_H
*/
#include <iostream>

using namespace std;


class ON2NaiveSolution {
private:
    int nums[5];
    int target;
public:
    ON2NaiveSolution();

    int getNums(int index);

    void setNums(int index, int num);

    int getTarget();

    void setTarget(int target);

    void find2Sum();


};

/*
#endif //TWOSUM_ON2NAIVESOLUTION_H
*/