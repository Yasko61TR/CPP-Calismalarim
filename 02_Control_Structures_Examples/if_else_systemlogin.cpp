#include <iostream>

using namespace std;

int main (){

    int pin=1234;
    int userLogin;

    cout << "Please enter your password" << endl;

    cin >> userLogin;

    if(userLogin==pin){
        cout << "Welcome to the system" << endl;
    }

    else{
        cout << "Incorrect password, please try again." << endl;
    }
    return 0;
}