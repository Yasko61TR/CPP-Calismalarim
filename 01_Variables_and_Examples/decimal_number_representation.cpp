#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    double sayi=123.324;

    cout << "Varsayılan:" << sayi << endl;

    cout << fixed << setprecision(3)<< "İstenen:" << sayi << endl;

    return 0;
}