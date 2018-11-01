//
// Created by sousa on 10/30/2018.
//

#ifndef LINKEDLISTS_PRECONDVIOLATEDEXCEP_H
#define LINKEDLISTS_PRECONDVIOLATEDEXCEP_H


#include <stdexcept>
#include <string>

using namespace std;


class PrecondViolatedExcep : public logic_error {
public:
    PrecondViolatedExcep(const string &message = "");
}; // end PrecondViolatedExcep

#endif //LINKEDLISTS_PRECONDVIOLATEDEXCEP_H
