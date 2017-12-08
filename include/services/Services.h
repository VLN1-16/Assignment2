#ifndef SERVICES_H
#define SERVICES_H

#include "Model.h"
#include "Repositories.h"
#include <vector>
#include <cstring>
#include "InvalidName.h"
#include "InvalidSSN.h"
#include "InvalidSalery.h"

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
};

#endif // SERVICES_H
