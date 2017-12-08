#ifndef INVALIDSSN_H
#define INVALIDSSN_H
#include <iostream>
#include <string>

class InvalidSSN{
    public:
        InvalidSSN(std::string message);
        std::string GetMessage();
    private:
        std::string message;

};

#endif
