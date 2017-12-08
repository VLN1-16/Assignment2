#include "Services.h"

Services::Services()
{
    //ctor
}

void Services::addSalaryRecord(Model model){
    // here most of the tests occur
    // test name of employee
    namecheck(model.getEmployeeName());
    SSNcheck(model.getSSN());
    Salerycheck(model.getEmployeeSalary());
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
void Services::namecheck(char name[150]){
    // can't be empty
    if(name[0] == '\0') return throw InvalidName("Name is empty");
    // name cannot start with a space
    if(name[0] == ' ') return throw InvalidName("Name cannot start with a space");
    // every element must be a space or a letter, nor have two spaces in a row
    bool lastwass = false;
    for(int i = 0; i < 150; i++){
        if(name[i] == '\0'){
            if(name[i - 1] == ' ') throw InvalidName("Name cannot end with a space"); // ends with a space
            break;
        }

        if( name[i] != ' ' && !isalpha(name[i]) ){ // If the user enters numbers or some shit
            throw InvalidName("Name can only include letters and spaces");
        }
        else{
            if(name[i] == ' ' && lastwass) throw InvalidName("Name can not include two spaces in a row"); // Lastwas space and now is space, two in a row
            else if(name[i] == ' ' && !lastwass) lastwass = true;
            else lastwass = false;
        }
    }
}
void Services::SSNcheck(char SSN[11]){
    for(int i = 0; i < 10; i++){
        if(!isdigit(SSN[i])) throw InvalidSSN("SSN should only include numbers");
    }
}
void Services::Salerycheck(int salery){
    if(salery < 0) throw InvalidSalery("sallery cannot be below 0");
}
