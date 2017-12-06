#include "Repositories.h"

Repositories::Repositories()
{
    //ctor
}

void Repositories::addSalaryRecord(const Model& model){

    ofstream fout;
    fout.open("Salary Records.txt", ios::app);
    if(fout.is_open()){
        fout << model;
        fout.close();
    }
    else{
        ///throw
    }
}

void Repositories::searchSalaryRecord(){
}
