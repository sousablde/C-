//
// Created by sousa on 8/23/2018.
//
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

     int getNums(int index) ;

    void setNums(int index, int num);

    int getTarget() ;

    void setTarget(int target);

    void find2Sum();


};

/*
#endif //TWOSUM_ON2NAIVESOLUTION_H
*/