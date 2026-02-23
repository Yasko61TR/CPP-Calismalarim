#include <iostream>

using namespace std;

int main (){

   int number,factorial=1;

   cout << "Please a enter number: " << endl;

   cin >> number;

   for(int i=1;i<=number;i++){
    factorial=i*factorial;
   }

       cout << number << "!=" << factorial << endl;


   return 0;

   
   
}