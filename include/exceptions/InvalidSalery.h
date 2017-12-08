#ifndef INVALIDSALLERY_H
#define INVALIDSALLERY_H
#include <iostream>
#include <string>

class InvalidSalery{
    public:
        InvalidSalery(std::string message);
        std::string GetMessage();
    private:
        std::string message;

};

#endif
