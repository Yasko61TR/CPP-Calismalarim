#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
    int not1,not2,not3;

    double not_ortalama;

    cout << "Lutfen 1.ogrencinin notunu giriniz:" << endl;

    cin >> not1;

    cout << "Lutfen 2.ogrencinin notunu giriniz:" << endl;

    cin >> not2;

    cout <<"Lutfen 3.ogrencinin notunu giriniz:" << endl;
    
    cin >> not3;

    not_ortalama=(not1+not2+not3)/3.0;

    cout << "Ogrencilerin not ortalaması(ondalikli): " << fixed << setprecision(2) << not_ortalama << endl ;

    cout << "Ogrencilerin not ortalaması(yuvarlamali):" << round(not_ortalama) << endl ;

    return 0;


}