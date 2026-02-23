#include <iostream>

using namespace std;

int main (){

    int i,j;

    for(i=1;i<=20;i++){
        if(i%2==0){
            cout << i  << " " ;
        }
        
    }
    cout << "\n" ;

    for(int j=1;j<=20;j++){
        if(j%2==1){
            cout <<  j << " ";
        }
    }
    return 0;
}