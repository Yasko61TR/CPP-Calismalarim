#include <iostream>

using namespace std;

int main() {
    
    int choice;

    cout << "Welcome to the System Management Panel!" << endl;

    do {
        
        cout << "1. Add New Data" << endl;
        cout << "2. Data Reporting" << endl;
        cout << "0. Exit" << endl;
        cout << "Please enter the operation number: ";
        
        cin >> choice;

        if (choice == 1) {
            cout << "> [Action] Opening data entry module...\n" << endl;
        }
        else if (choice == 2) {
            cout << "> [Action] Generating reports...\n" << endl;
        }
        else if (choice != 0) {
            cout << "> [Error] Invalid choice. Please try again.\n" << endl;
        }

    // '0' seçilmediği sürece döngü devam eder
    } while (choice != 0);

    cout << "Logging out..." << endl;
    cout << "Goodbye!" << endl;

    return 0;
}