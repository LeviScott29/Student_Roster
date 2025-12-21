#ifndef DEGREE_H
#define DEGREE_H

#include <string>

enum DegreeProgram {
    SECURITY,
    NETWORK,
    SOFTWARE
};

// 
inline std::string DegreeProgramToString(DegreeProgram dp) {
    switch (dp) {
    case SECURITY:
        return "Security";
    case NETWORK:
        return "Network";
    case SOFTWARE:
        return "Software";
    default:
        return "Incorrect program:";
    }
}

#endif // DEGREE_H
