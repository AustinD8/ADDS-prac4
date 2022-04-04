#ifndef REVERSE_H
#define REVERSE_H
#include <string>

class Reverse{
public:
    Reverse();
    int reverseDigit(int digit);
    std::string reverseString(std::string string);
private:
    int opDigit;
    std::string opString;
};
#endif