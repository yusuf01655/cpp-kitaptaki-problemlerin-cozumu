#include <iostream>
using namespace std;
class Sinema{
    bool koltuk[21];
    public:
        int girilenKoltukSayisi;
        Sinema(bool b);
        bool yerVar();
        void yerAyir();
        void iptal();
        int kalanKoltuk();
};
Sinema::Sinema(bool b){
    int sayac=0;
    do{
        koltuk[sayac]=b;
        sayac++;
    }while(sayac<20);
}
bool Sinema::yerVar(){
    int varolanKoltukSayaci=0;
    int donguSayaci=0;
    do{
        if(koltuk[donguSayaci]==true) 
            varolanKoltukSayaci++;
        donguSayaci++;
    }while(donguSayaci<20);
    if( varolanKoltukSayaci==girilenKoltukSayisi){
        return 1;
    }else return 0;
}
void Sinema::yerAyir(){
    int sayac=0;
    cout<<"Koltuk sayisi:";
    cin>>girilenKoltukSayisi;
    while(((sayac<girilenKoltukSayisi))){
        if(koltuk[sayac]==true){
            koltuk[sayac]=false;
            sayac++;
        }
       
    }
    if(!yerVar()) cout<<girilenKoltukSayisi<<" koltuk reserve edildi."<<endl;
    
}
void Sinema::iptal(){
    int silinecekKoltukMiktari;
    cout<<"Koltuk sayisini giriniz:";
    cin>>silinecekKoltukMiktari;
    int silinecekKoltukSayaci=0;
    int sayac=0;
    while(((silinecekKoltukSayaci<silinecekKoltukMiktari)&&(sayac<20))){
        if(koltuk[sayac]==false){
            koltuk[sayac]=true;
            silinecekKoltukSayaci++;
        }
        sayac++;
    }
    if(silinecekKoltukSayaci>=silinecekKoltukMiktari){
        cout<<silinecekKoltukMiktari<<" koltuk silindi.";
    }
}
int Sinema::kalanKoltuk(){
    int _kalankoltuk=0;
    int donguSayaci=0;
    while(donguSayaci<20){
        if(koltuk[donguSayaci]==true){
            _kalankoltuk++;
        }
    donguSayaci++;
    }
    return _kalankoltuk;
}
int main(){
    Sinema salon[3]={Sinema(true),Sinema(true),Sinema(true)};
    char secenek;
    char s;
    int _seansSaati;
    cout<<"Lutfen asagidakilerden birini seciniz:"<<endl;
    cout<<"R: Rezervasyon"<<endl;
    cout<<"I: Iptal"<<endl;
    cout<<"K: kalan koltuk sayisi:"<<endl;
    cout<<"S: Son"<<endl;
    do{
        cout<<"Secenek:";
        cin>>secenek;
        switch(secenek){
        case 'R':
            cout<<"Seans saati (12,15,18):";
            cin>>_seansSaati;
            switch(_seansSaati){
            case 12:
                _seansSaati=0;
                break;
            case 15:
                _seansSaati=1;
                break;
            case 18:
                _seansSaati=2;
                break;
            default:
                cout<<"Yanlis ifade giriniz."<<endl;
                break;
            }
            salon[_seansSaati].yerAyir();
            
            break;
        case 'K':
            cout<<"Seans saati (12,15,18):";
            cin>>_seansSaati;
            switch(_seansSaati){
            case 12:
                _seansSaati=0;
                break;
            case 15:
                _seansSaati=1;
                break;
            case 18:
                _seansSaati=2;
                break;
            default:
                cout<<"Yanlis ifade girdiniz."<<endl;
                break;
            }
            cout<<salon[_seansSaati].kalanKoltuk()<<" koltuk reserve edilebilir."<<endl;
            break;
        case 'S':
            return 0;
            break;
        }
     
    
    }while(true);
    return 0;
}

            
    
