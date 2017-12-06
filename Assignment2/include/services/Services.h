#ifndef SERVICES_H
#define SERVICES_H

#include "Model.h"
#include "Repositories.h"


class Services
{
    public:
        Services();
        void addSalaryRecord(const Model& model);

    private:
        Repositories employeeRepo;
};

#endif // SERVICES_H
