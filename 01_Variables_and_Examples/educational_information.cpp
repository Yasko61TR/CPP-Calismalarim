#include <iostream>

using namespace std;

int main (){
    string isim="Yasin";
    int DogumYili=2006;
    bool SinifGectiMi=true ;
    char NotOrtalamasiHarf='B';
    float NotOrtalamasi=3.24f;
    double SinifOrtalamasi=3.08231469;

    cout << "Merhaba sayin " << isim << endl;
    cout <<"Dogum Yili:" << DogumYili << endl;
    cout <<"Sinifi gecti mi? :" << SinifGectiMi << endl;
    cout <<"Not Ortalamaniz: " << NotOrtalamasi << endl;
    cout << "Sinifinizin Ortalamasi: " << SinifOrtalamasi << endl;
    cout << "Aldiginiz Harf Notu :" << NotOrtalamasiHarf << endl;
    return 0;
}