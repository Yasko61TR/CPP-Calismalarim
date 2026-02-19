#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int sonuc,sonuc1,sonuc2,sonuc3;
    int x,y;

    cout <<"Lutfen bir x icin bir deger giriniz:" << endl;

    cin >> x ;

    cout << "Lutfen bir y icin deger giriniz" << endl;

    cin >> y ;

    sonuc=pow(x,y);

    sonuc1=ceil(2.4);// ceil yukarı yuvarlar

    sonuc2=round(3.7);//raund hangi tarafa yakınsan oraya yuvarlar
    
    sonuc3=floor(5.3);// floor alt tamsayıya yuvarlar

    cout << " sonuc=" << sonuc << endl;

    cout << " sonuc1=" << sonuc1 << endl ;

    cout << " sonuc2=" << sonuc2 << endl ;

    cout << " sonuc3=" << sonuc3 << endl;

    
    return 0;
}