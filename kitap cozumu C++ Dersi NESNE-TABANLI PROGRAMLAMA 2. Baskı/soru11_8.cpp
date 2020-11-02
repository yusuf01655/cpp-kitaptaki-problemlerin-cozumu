#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class VucutKutlesi{
    float boy;
    float kilo;
    string durum;
    public:
        VucutKutlesi(float _boy,float _kilo):boy(_boy),kilo(_kilo){}
        float vkiHesapla();
        float idealKiloHesapla();
        friend void testVkiHesapla();
        friend void testIdealKiloHesapla();
};
float VucutKutlesi::vkiHesapla(){
    return ((kilo)/(pow(boy,2)));
}
float VucutKutlesi::idealKiloHesapla(){
    return (pow(boy,2)*22);
}
void testVkiHesapla(){
    cout<<"VKI hesabi test ediliyor..."<<endl;
    VucutKutlesi insan(1.80,100.0);//fonksiyon icinde nesne olusturup, private üyeye erisemez miyiz??!
    cout<<"Kilo:"<<fixed<<insan.kilo<<" kg"<<endl;
    cout<<"Boy:"<<fixed<<insan.boy<<" m"<<endl;
    cout<<"Test basarisiz."<<endl;
    cout<<"Hesaplanan:"<<insan.vkiHesapla()<<endl;
}
void testIdealKiloHesapla(){
    cout<<"Ideal kilo hesabi test ediliyor..."<<endl;
    VucutKutlesi insan(1.80,100.0);
    cout<<"Kilo:"<<fixed<<insan.kilo<<" kg"<<endl;
    cout<<"Boy:"<<fixed<<insan.boy<<" m"<<endl;
    cout<<"Test basarili..."<<endl<<"Ideal kilo:"<<insan.idealKiloHesapla()<<endl;
}
int main(){
    testVkiHesapla();
    testIdealKiloHesapla();
    return 0;
}

    
