#include "Model.h"

Model::Model(string employeeName, string SSN, int year, int month, int employeeSalary){
    this->employeeName = employeeName;
    this->SSN = SSN;
    this->year = year;
    this->month = month;
    this->employeeSalary = employeeSalary;
}

string Model::getEmployeeName(){
    return this->employeeName;
}

string Model::getSSN(){
    return this->SSN;
}

int Model::getEmployeeSalary(){
    return this->employeeSalary;
}

int Model::getMonth(){
    return this->month;
}

int Model::getYear(){
    return this->year;
}

//Writing
ostream& operator << (ostream& out, const Model& model){
    out << model.employeeName << ", "
        << model.SSN << ", "
        << model.year << ", "
        << model.month << ", "
        << model.employeeSalary << endl;

    return out;
}
