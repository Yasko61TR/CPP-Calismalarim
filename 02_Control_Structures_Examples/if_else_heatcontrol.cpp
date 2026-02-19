#include <iostream>

using namespace std;

int main (){

    int heat;

    cout << "Please enter the ambient temperature:" << endl ;

    cin >> heat ;

    if(heat >= 35){

        if(heat >=40){
            cout << "The ambient temperature is very high!" << endl;
        }else{
    cout << "he ambient temperature is not suitable." << endl ;
}

    }

    else {
    cout << "The ambient temperature is suitable." << endl ;
    }

    return 0;
}