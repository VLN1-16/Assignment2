#include "InvalidName.h"

InvalidName::InvalidName(std::string message){
    this->message = message;
}
std::string InvalidName::GetMessage(){
    return message;
}
