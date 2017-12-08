#include "Services.h"

Services::Services()
{
    //ctor
}

void Services::addSalaryRecord(const Model& model){
    std::cout << "service" << std::endl;
    employeeRepo.addSalaryRecord(model);
    // model.print(cout);
}

void Services::searchSalaryRecords(char ssn[11], ostream& out){
    vector<Model> ssns = employeeRepo.searchSalaryRecord(ssn);
    for(int i = 0; i < ssns.size(); i++){
        ssns[i].print(cout);
    }
}
int Services::getTotalSalary(char ssn[11], int year){
    int result = 0;
    vector<Model> ssns = employeeRepo.searchSalaryRecord(ssn);
    for(int i = 0; i < ssns.size(); i++){
        if(ssns[i].getYear() == year){
            result += ssns[i].getEmployeeSalary();
        }
    }
    return result;
}
void Services::getNameWithHighestSalary(int year,ostream& out){
    int highest = 0;
    Model tmp;
    vector<Model> ssns = employeeRepo.getSalaryRecords();
    for(int i = 0; i < ssns.size(); i++){
        if(getTotalSalary(ssns[i].getSSN(),year) >= highest){
            tmp = ssns[i];
            highest = getTotalSalary(ssns[i].getSSN(),year);
        }
    }
    out << tmp.getEmployeeName();
}
