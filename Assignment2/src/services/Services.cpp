#include "Services.h"

Services::Services()
{
    //ctor
}

void Services::addSalaryRecord(const Model& model){
    employeeRepo.addSalaryRecord(model);
    cout << model << endl;
}
