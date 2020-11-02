#include <iostream>
using namespace std;
class EPosta{
    int sayi;
    string* kelimeler;
    string alan;
    string yollayan;
public:
    static int adet;
    EPosta();
    void oku();
};
int EPosta::adet=0;
EPosta::EPosta(){
    int nesneSayisi=2;
    cout<<"Mesajdaki kelime sayisini giriniz:";
    cin>>sayi;
    kelimeler=new string[sayi];
    if(sayi>10) adet++;
    oku();
    
}
void EPosta::oku(){
    int sayac;    
    cout<<"Alanin soyadini giriniz:";
    cin>>alan;
    cout<<"Yollayanin soyadini giriniz:";
    cin>>yollayan;
    sayac=0;
    cout<<"Mesaji giriniz:";
    while(sayac<sayi){
        cin>>*(kelimeler+sayac);
        sayac++;
    }
}
int main(){
    int nesneSayisi=50;
    EPosta nesne[nesneSayisi];
    cout<<"10 kelimeden uzun mesajlarin sayisi:"<<nesne[0].adet<<endl;
    return 0;
}

