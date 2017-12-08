#include "Exceptions.h"

Exceptions::Exceptions()
{
    //ctor
}

// should only contain letters
// can contain more than a single word
bool Exceptions::isNameValid(char employeeName[150]){
    // get char array from user input
    bool ans;

    for(int i = 0; i < 150; i++){
        if(isalpha(employeeName[i]) || employeeName[i] == ' '){
                ans = true;
        }

        else{
            ///throw
            ans = false;
        }
    }

return ans;
}

// should be the length of 10
// should only hold numeric values
bool Exceptions::isSSNValid(char SSN[10]){
    bool ans;

    for(int i = 0; i < 10; i++){
        if(isdigit(SSN[i])){
                ans = true;
        }

        else{
            ///throw
            ans = false;
        }
    }

return ans;
}

// can only be numbered up to 12
// can not go to a month that has not happened
bool Exceptions::isMonthValid(int month){
    bool ans;
    int year = 0; //just for checking, should use the input year

    if(isYearValid(year)){
        if(currentYear == year){
            if(currentMonth < month){
                ans = false;
            }
            else{
                ans = true;
            }
        }
        else{
            ans = true;
        }
    }
    else{
        ans = false;
    }


return ans;
}

// has to current or previous years
// can not be future years
bool Exceptions::isYearValid(int year){
    bool ans;

    if(year <= currentYear){
        ans = true;
    }
    else{
        ans = false;
    }
return ans;
}

// has to be realistic numeric value for salary
bool Exceptions::isSalaryValid(){

return true;
}
