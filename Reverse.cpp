#include "Reverse.h"
#include <string>
#include <cmath>
#include <iostream>

Reverse::Reverse(){
    opDigit=0;
}

int Reverse::reverseDigit(int digit){
    if (digit<10){
        int num=opDigit*10+digit;
        opDigit=0;
        return num;
    }else{   
        int rem = digit%10;
        opDigit=opDigit*10+rem;
        int num1 = reverseDigit(digit/10);
        return num1;
    }
}

std::string Reverse::reverseString(std::string string){

    if (string.length()<2){
        std::string word=opString+string;
        opString.clear();
        return word;
    }else{
        opString=opString+string.back();
        std::string word1=reverseString(string.erase(string.length()-1));
        return word1;
    }
}