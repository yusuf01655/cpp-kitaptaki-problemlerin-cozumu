#include <iostream>
using namespace std;
class Zaman{
    int s;
    int d;
    public:
        void oku();
        void yaz();
        void arttir(int dak);
};
class Ucus{
    int ucno;
    Zaman kalkis;
    Zaman varis;
    public:
    Ucus();
    void goster();
    void rotar(int);
};
void Zaman::oku(){
    cin>>s>>d;
}
void Zaman::yaz(){
    cout<<s<<":"<<d;
}
void Zaman::arttir(int dak){
    d+=dak;
    if(d>59){
        s++;
        d-=60;
    }
}
Ucus::Ucus(){
    cout<<"Ucus numarasi, kalkis ve varis saatlerini giriniz:";
    cin>>ucno;
    kalkis.oku();
    varis.oku();
}
void Ucus::rotar(int ddd){
    kalkis.arttir(ddd);
    varis.arttir(ddd);
}
void Ucus::goster(){
    cout<<"Ucus no:"<<ucno<<" kalkis:";
    kalkis.yaz();
    cout<<" varis:";
    varis.yaz();
    cout<<endl;
}
int main(){
    int ucus_sayisi,r_temp,i;
    cout<<"ucus sayisini giriniz:";
    cin>>ucus_sayisi;
    Ucus* nesne=new Ucus[ucus_sayisi];
    cout<<"Rotar bilgisini dakika degerinde giriniz:";
    cin>>r_temp;
    cout<<"Tum ucuslarda"<<r_temp<<" dakikalik rotar olacaktir."<<endl;
    i=0;
    while(i<ucus_sayisi){
        nesne[i].rotar(r_temp);
        i++;
    }
    cout<<"Guncellenmis ucus tarifesi:"<<endl;
    i=0;
    while(i<ucus_sayisi){
        nesne[i].goster();
        i++;
    }
return 0;
}
        
     

