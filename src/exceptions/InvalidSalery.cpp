#include "InvalidSalery.h"

InvalidSalery::InvalidSalery(std::string message){
    this->message = message;
}
std::string InvalidSalery::GetMessage(){
    return message;
}
