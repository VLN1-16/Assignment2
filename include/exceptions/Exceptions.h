#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include "Services.h"
#include <time.h>


class Exceptions
{
    public:
        Exceptions();
        bool isNameValid(char employeeName[]);

        bool isSSNValid(char SSN[]);

        bool isMonthValid(int month);

        bool isYearValid(int year);

        bool isSalaryValid();


    private:
        // taken from stackoverflow.com
        time_t theTime = time(NULL);
        struct tm *aTime = localtime(&theTime);

        int currentMonth = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
        int currentYear = aTime->tm_year + 1900; // Year is # years since 1900
        };

#endif // EXCEPTIONS_H
