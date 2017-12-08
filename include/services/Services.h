#ifndef SERVICES_H
#define SERVICES_H

#include "Model.h"
#include "Repositories.h"
#include <vector>
#include <cstring>

class Services
{
    public:
        Services();
        void addSalaryRecord(const Model& model);
        void searchSalaryRecords(char ssn[11], ostream& out);
        int getTotalSalary(char ssn[11], int year);
        void getNameWithHighestSalary(int year,ostream& out);
    private:
        Repositories employeeRepo;
};

#endif // SERVICES_H
