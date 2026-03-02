#include <iostream>

using namespace std;

int area(int x,int y){
    int area=x*y;
    return area;
}

int kare_alani(int z){
    cout << "Kare alani=" <<  z*z << endl;
}

float Daire_alani(int r){
    float pi=3.14;
    cout << "Daire alani=" << pi*r*r << endl;
}

int main (){

    int x,y;

    cout << "X sayisini girin: " ;
    cin >> x ;
    cout << "\n" ;
    cout << "Y sayisini girin: " ;
    cin >> y ;

    cout << "Dikdortgen Alani=" << area(x,y) << endl;

    cout << "\n" ;

    cout << "--- Kare Alani ---" << endl;
    
    int z;

    cout << "Lutfen z sayisini giriniz: " ;

    cin >> z ;

    kare_alani(z);

    int r;

    cout << "Lutfen r sayisini giriniz:" ;

    cin >> r ;

    Daire_alani(r);









    
    return 0;
    
}