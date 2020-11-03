#include <iostream>
using namespace std;
class SanalSinif{
protected:
    string isim;
public:
  SanalSinif(string _isim):isim(_isim){};
  virtual string isimDondur() = 0;
};
class TelevizyonAcKomutu :public SanalSinif{
public:
  TelevizyonAcKomutu() :SanalSinif("Televizyon"){}
  string isimDondur();
};
string TelevizyonAcKomutu::isimDondur(){ return isim;}
class TelevizyonKapaKomutu :public SanalSinif{
public:
    TelevizyonKapaKomutu():SanalSinif("Televizyon"){};
    string isimDondur();
};
string TelevizyonKapaKomutu::isimDondur(){ return isim;}
class OtoparkKapiAcKomutu :public SanalSinif {
public:
    OtoparkKapiAcKomutu():SanalSinif("Otopark"){}
    string isimDondur();
};
string OtoparkKapiAcKomutu::isimDondur() {
    return isim;
}
class OtoparkKapiKapaKomutu :public SanalSinif{
    public:
    OtoparkKapiKapaKomutu :SanalSinif("Otopark"){}
    string isimDondur();
};
string OtoparkKapiKapaKomutu::isimDondur(){ return isim; }
class UzaktanKumanda{
    SanalSinif* acDizi[1];
    SanalSinif* kapaDizi[1];
public:
    void ac();
    void kapa();
    void acmaKomutuAta(SanalSinif* nsn);
    void kapamaKomutuAta(SanalSinif* nsn);
};
void UzaktanKumanda::ac(){
    SanalSinif* e = acDizi[0];
    cout << e->isimDondur() << " aciliyor..." << endl;
}
void UzaktanKumanda::kapa(){
    SanalSinif* e = kapaDizi[0];
    cout << e->isimDondur() << "kapaniyor...";
}
void UzaktanKumanda::acmaKomutuAta(SanalSinif* nsn){
    acDizi[0]=nsn;
}
void UzaktanKumanda::kapamaKomutuAta(SanalSinif* nsn){
    kapaDizi[0]=nsn;
}
int main(){
    UzaktanKumanda kumanda;
    TelevizyonAcKomutu tvAcKomutu;
    TelevizyonKapaKomutu tvKapaKomutu;
    kumanda.acmaKomutuAta(&tvAcKomutu);
    kumanda.kapamaKomutuAta(&tvKapaKomutu);
    kumanda.ac();
    kumanda.kapa();
    OtoparkKapiAcKomutu kapiAcKomutu;
    OtoparkKapiKapaKomutu kapiKapaKomutu;
    kumanda.acmaKomutuAta(&kapiAcKomutu);
    kumanda.kapamaKomutuAta(&kapiKapaKomutu);
    kumanda.ac();
    kumanda.kapa();
    return 0;
}
