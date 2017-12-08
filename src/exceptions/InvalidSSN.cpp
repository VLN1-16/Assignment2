#include "InvalidSSN.h"

InvalidSSN::InvalidSSN(std::string message){
    this->message = message;
}
std::string InvalidSSN::GetMessage(){
    return message;
}
