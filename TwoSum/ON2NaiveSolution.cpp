//
// Created by sousa on 8/23/2018.
//

#include "ON2NaiveSolution.h"

#ifndef TWOSUM_ON2NAIVESOLUTION_H
#define TWOSUM_ON2NAIVESOLUTION_H

ON2NaiveSolution::ON2NaiveSolution() {}

int ON2NaiveSolution::getNums(int index) {
    return nums[index];
}

int ON2NaiveSolution::getTarget() {
    return target;
}

void ON2NaiveSolution::setTarget(int target) {
    ON2NaiveSolution::target = target;
}

void ON2NaiveSolution::setNums(int index, int num) {
    nums[index] = num;
}

void ON2NaiveSolution::find2Sum() {
    for (int i = 0; i < (sizeof(nums) / sizeof(int)); i++) {
        for (int j = 0; j < (sizeof(nums) / sizeof(int)); j++) {
            cout << "array test " << nums[i] << " i " << i << " " << nums[j] << " j " << j << endl;
            if (i != j) {
                if (nums[i] + nums[j] == target) {
                    cout << "solutions are index: " << i << " and " << j << endl;
                }
            }
        }
    }
}

#endif //TWOSUM_ON2NAIVESOLUTION_H
