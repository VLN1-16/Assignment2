#include "Repositories.h"

Repositories::Repositories()
{
    //ctor
}

void Repositories::addSalaryRecord(const Model& model){
    ofstream fout("records.dat", ios::app | ios::binary);
    if(fout.is_open()){
        fout << model;
        fout.close();
    }
    else{
        throw genericError("Unable to open data file for writing");
    }
}

vector<Model> Repositories::searchSalaryRecord(char SSN[11]){
    // Search and print all the records for this SSN
    Model model;
    vector<Model> ssnmatch;
    ifstream fin("records.dat", ios::binary);
    if(fin.is_open()){
        while(!fin.eof()){
            fin >> model;
            if(fin.eof()) break;
            if(model.compareSSN(SSN)){
                ssnmatch.push_back(model);
            }
        }
    }
    fin.close();
    return ssnmatch;
}
vector<Model> Repositories::getSalaryRecords(){
    Model model;
    vector<Model> ssnmatch;
    ifstream fin("records.dat", ios::binary);
    if(fin.is_open()){
        while(!fin.eof()){
            fin >> model;
            if(fin.eof()) break;
                ssnmatch.push_back(model);
        }
    }
    fin.close();
    return ssnmatch;
}
