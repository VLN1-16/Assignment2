#ifndef INVALIDNAME_H
#define INVALIDNAME_H
#include <iostream>
#include <string>

class InvalidName{
    public:
        InvalidName(std::string message);
        std::string GetMessage();
    private:
        std::string message;

};

#endif
