#include "UI.h"

UI::UI()
{
    //ctor
}

void UI::mainMenu(){

    while(true){
        cout << "Welcome" << endl;
        cout << "*******" << endl;
        cout << "Press 1 to add a new salary record" << endl;
        cout << "Press 2 to view salary records" << endl;
        cout << endl;

        char input;
        cin >> input;

        validateUserInput(input);
    }
}

void UI::validateUserInput(char input){
    // make a switch statment instead??
    if(input == '1'){
        modelService.addSalaryRecord(createNewRecord());
    }
    else if(input == '2'){
        // cout << "viewing salary records..." << endl;
        cout << "Please enter SSN to look for: ";
        char ssn[11];
        cin >> ssn;
        modelService.searchSalaryRecords(ssn, cout);
    }
    else{
        cout << "Not a valid input! Please try again." << endl;
    }
}
// Get input from user
// Input gets sent to repository through Services
Model UI::createNewRecord(){
    char SSN[10];
    char employeeName[150];
    int employeeSalary, month, year;

    cout << "Name of Employee: ";
    cin >> employeeName;
    cout << "SSN (Social security number): ";
    cin >> SSN;
    cout << "Enter a year to add/edit a salary record: ";
    cin >> year;
    cout << "Enter a month to add/edit a salary record(1-12): ";
    cin >> month;
    cout << "Salary for selected month: ";
    cin >> employeeSalary;

    Model model(employeeName, SSN, year, month, employeeSalary);
    model.print(cout);
    return model;
}

