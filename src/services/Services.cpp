#include "Services.h"

Services::Services()
{
    //ctor
}

void Services::addSalaryRecord(const Model& model){
    employeeRepo.addSalaryRecord(model);
    // model.print(cout);
}

void Services::searchSalaryRecords(char ssn[11], ostream& out){
    vector<Model> ssns = employeeRepo.searchSalaryRecord(ssn);
    for(int i = 0; i < ssns.size(); i++){
        ssns[i].print(cout);
    }
}
