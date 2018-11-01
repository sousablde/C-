//
// Created by sousa on 10/30/2018.
//

#include "PrecondViolatedExcep.h"


PrecondViolatedExcep::PrecondViolatedExcep(const string &message) : logic_error(
        "Precondition Violated Exception: " + message) {
}  // end constructor

// End of implementation file.

