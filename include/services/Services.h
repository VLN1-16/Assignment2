#ifndef SERVICES_H
#define SERVICES_H

#include "Model.h"
#include "Repositories.h"
#include <vector>

class Services
{
    public:
        Services();
        void addSalaryRecord(const Model& model);
        void searchSalaryRecords(char ssn[11], ostream& out); 
    private:
        Repositories employeeRepo;
};

#endif // SERVICES_H
