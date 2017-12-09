#ifndef SERVICES_H
#define SERVICES_H

#include "Model.h"
#include "Repositories.h"
#include <vector>
#include <cstring>
#include "InvalidName.h"
#include "InvalidSSN.h"
#include "InvalidSalery.h"
#include "genericError.h"
#include <time.h>

class Services
{
    public:
        Services();
        void addSalaryRecord(Model model);
        void searchSalaryRecords(char ssn[11], ostream& out);
        int getTotalSalary(char ssn[11], int year);
        void getNameWithHighestSalary(int year,ostream& out);
        void namecheck(char name[150]);
        void SSNcheck(char SSN[11]);
        void Salerycheck(int salery);
    private:
        Repositories employeeRepo;

        time_t theTime = time(NULL);
        struct tm *aTime = localtime(&theTime);

        int currentMonth = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
        int currentYear = aTime->tm_year + 1900; // Year is # years since 1900

};

#endif // SERVICES_H
