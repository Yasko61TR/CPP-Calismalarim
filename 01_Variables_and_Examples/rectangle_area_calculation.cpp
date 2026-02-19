#include <iostream>

using namespace std;

int main (){
    string isim ;
    int en,boy,alan;

    cout << "Lutfen isminizi girer misiniz?" << endl;

    cin >> isim ;

    cout << "Merhaba " << isim << ".Alan hesaplamaya hosgeldin!" << endl ;

    cout << "Lutfen dikdortgenin boyunu giriniz(cm):" ;

    cin >> boy ;

    cout << "Lutfen dikdortgenin enini giriniz(cm):" ;
    
    cin >> en ;

    alan=boy*en;

    cout << "Dikdortgenin alani " << alan << " cm^2 cikar." << endl ;
    return 0;


}