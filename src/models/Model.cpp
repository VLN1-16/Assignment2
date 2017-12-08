#include "Model.h"

Model::Model(){
    // Option to start it empty for reading from file
}
Model::Model(char employeeName[150], char SSN[11], int year, int month, int employeeSalary){
    for(int i = 0; i < 150; i++){
        this->employeeName[i] = employeeName[i];
    }
    for(int i = 0; i < 11; i++){
        this->SSN[i] = SSN[i];
    }
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
bool Model::compareSSN(char SSN[11]){
    for(int i = 0; i < 11; i++){
        if(SSN[i] != this->SSN[i]) return false;
    }
    return true;
}
void Model::print(ostream& out){
    out << employeeName << " ";
    out << employeeSalary << " ";
    out << SSN <<  " ";
    out << month  << " ";
    out << year  << endl;
}
//Writing
ostream& operator << (ostream& out, const Model& model){
    out.write((char*)(model.SSN), sizeof(char) * 11);
    out.write((char*)(&model.year), sizeof(int));
    out.write((char*)(&model.month), sizeof(int));
    out.write((char*)(&model.employeeSalary),sizeof(int));
    out.write((char*)model.employeeName, sizeof(char) * 150);
    return out;
}
istream& operator >>(istream& is, Model& model){
    is.read((char*)(model.SSN), sizeof(char) * 11);
    is.read((char*)(&model.year), sizeof(int));
    is.read((char*)(&model.month), sizeof(int));
    is.read((char*)(&model.employeeSalary),sizeof(int));
    is.read((char*)(model.employeeName), sizeof(char) * 150);
    return is;
}
