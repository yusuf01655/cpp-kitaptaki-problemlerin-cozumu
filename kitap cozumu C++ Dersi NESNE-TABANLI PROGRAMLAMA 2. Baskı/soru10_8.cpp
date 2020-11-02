#include <iostream>
using namespace std;
class Tarih{
    int gun;
    int ay;
    int yil;
    public:
        Tarih(int,int,int);
        void arttir();
        void goster();
};
Tarih::Tarih(int g,int a,int y){
    gun=g;
    ay=a;
    yil=y;
}
void Tarih::arttir(){
    int aylar[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sayac=ay-1;
    gun++;
    if(gun>aylar[sayac]){
        gun=1;
        ay++;
    }
    if(ay>12){
        ay=1;
        yil++;
    }
}
void Tarih:: goster(){
    cout<<gun<<"/"<<ay<<"/"<<yil<<endl;
}
int main(){
    Tarih tarih(30,7,2012);
    cout<<"Bugun:";
    tarih.goster();
    cout<<"Onumuzdeki 10 gun:"<<endl;
    int i=1;
    while(i<=10){
        tarih.arttir();
        tarih.goster();
        ++i;
    }
    return 0;
}
