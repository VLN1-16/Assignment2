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
        cout << "Press 3 to get total salary for a given year and SSN" << endl;
        cout << "Press 4 to get the name of the employee with the highest total salary for a given year" << endl;
        cout << endl;

        char input;
        cin >> input;

        validateUserInput(input);
    }
}

void UI::validateUserInput(char input){
    // make a switch statment instead??
    if(input == '1'){
        try{
            modelService.addSalaryRecord(createNewRecord());
        }
        catch(InvalidName e){
            cout << "Exception was thrown with error :" << e.GetMessage()  << endl;
        }
        catch(InvalidSSN e){
            cout << "Exception was thrown with error : " << e.GetMessage() << endl;
        }
        catch(InvalidSalery e){
            cout << "Exception was thrown with error : " << e.GetMessage() << endl;
        }
        catch(genericError e){
            cout << "An internal error occured : " << e.GetMessage() << endl;
        }
    }
    else if(input == '2'){
        // cout << "viewing salary records..." << endl;
        cout << "Please enter SSN to look for: ";
        char ssn[11];
        cin >> ssn;
        modelService.searchSalaryRecords(ssn, cout);
        cout << endl;
    }
    else if(input == '3'){
        // cout << "viewing salary records..." << endl;
        cout << "Please enter SSN to look for: ";
        char ssn[11];
        cin >> ssn;
        cout << "Please enter year to look for: ";
        int year;
        cin >> year;
        cout << "The Employee with SSN " << ssn << " has salary for the year " << year << ": ";
        cout << modelService.getTotalSalary(ssn, year) << endl << endl;
    }
    else if(input == '4'){
        int year;
         cout << "Please enter the year you want to search for: ";
         cin >> year;
        cout << "The Employee with the highest salary for the year " << year << " is ";
        modelService.getNameWithHighestSalary(year,cout);
        cout << endl << endl;

    }
    else{
        cout << "Not a valid input! Please try again." << endl << endl;
    }
}
// Get input from user
// Input gets sent to repository through Services
Model UI::createNewRecord(){
    char SSN[11];
    string name;
    char employeeName[150];
    int employeeSalary, month, year;

    cout << "Name of Employee: ";
    // cin >> employeeName;
    getline(cin, name);
    getline(cin, name);
    for(int i = 0; i < 150; i++){
        employeeName[i] = name[i];
        if(name[i] == '\0') break;
    }
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
