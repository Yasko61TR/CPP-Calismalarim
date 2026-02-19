#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){

    int number1,number2;
    int result;
    int transaction;// (+ / - / (divide) / *)

    cout << "Please enter a 1.number:" << endl;

    cin >> number1;

    cout << "Please enter a  2.number:" << endl;

    cin >> number2;

    cout << "Please enter the transaction number(1(+),2(-),3(/),4(*)):" << endl ;

    cin >> transaction;

    if(transaction==1){
        result=number1+number2;
    cout << "Result=" << result << endl;
    }else if(transaction==2){
        result=number1-number2;
    cout << "Result=" << result << endl;
    }else if(transaction==3){
    cout << "Result=" << fixed << setprecision(2) << (double)number1/number2 <<endl;
    }else if(transaction==4){
        result=number1*number2;
    cout << "Result=" << result << endl;
    }else{
        cout << "Please enter one of the required numbers for the transaction." << endl;
    }

    return 0;
}