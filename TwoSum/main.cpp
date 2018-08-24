/*
 * given an array of ints return the indices such that
 * the two corresponding values add up to a specific target
 * assume exactly one solution may not use same element twice
 */
#include "ON2NaiveSolution.h"


int main() {
    const int SIZE=5;

    ON2NaiveSolution s1[SIZE];
    s1[0].setNums(0,2);
    s1[1].setNums(1,7);
    s1[2].setNums(2,11);
    s1[3].setNums(3,12);
    s1[4].setNums(4,15);
    s1[5].setNums(5,20);

    s1->getTarget(9);

    s1->find2Sum();



    return 0;
}