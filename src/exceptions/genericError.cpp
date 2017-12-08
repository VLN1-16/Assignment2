#include "genericError.h"
genericError::genericError(std::string message){
    this->message = message;
}
std::string genericError::GetMessage(){
    return this->message;
}
