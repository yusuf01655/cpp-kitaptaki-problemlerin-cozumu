//UML CÝZMEYÝ UNUTMA
#include <iostream>
using namespace std;
class SanalSinif {
protected:
	string isim;
public:
	SanalSinif(string _isim) : isim(_isim) {}
	virtual string isimiReturnEtmekIcin() = 0;
};
class TelevizyonAcKomutu :public SanalSinif {
public:
	TelevizyonAcKomutu() :SanalSinif("Televizyon") {}
	string isimiReturnEtmekIcin();
};
string TelevizyonAcKomutu::isimiReturnEtmekIcin() { return isim; }
class TelevizyonKapaKomutu :public SanalSinif {
public:
	TelevizyonKapaKomutu() :SanalSinif("Televizyon") {}
	string isimiReturnEtmekIcin();
};
string TelevizyonKapaKomutu::isimiReturnEtmekIcin() { return isim; }
class OtoparkKapiAcKomutu :public SanalSinif {
public:
	OtoparkKapiAcKomutu() :SanalSinif("Otopark Kapisi") {};
	string isimiReturnEtmekIcin();
};
string OtoparkKapiAcKomutu::isimiReturnEtmekIcin(){ return isim; }
class OtoparkKapiKapaKomutu :public SanalSinif{
public:
	OtoparkKapiKapaKomutu() :SanalSinif("Otopark Kapisi") {}
	string isimiReturnEtmekIcin();
};
string OtoparkKapiKapaKomutu::isimiReturnEtmekIcin() { return isim; }
class UzaktanKumanda{
	SanalSinif* _ac[1];
	SanalSinif* _kapa[1];
public:
	void ac();
	void kapa();
	void acmaKomutuAta(SanalSinif* nsn);
	void kapamaKomutuAta(SanalSinif* nsn);
	
};
void UzaktanKumanda::acmaKomutuAta(SanalSinif* nsn){
	_ac[0] = nsn;
}
void UzaktanKumanda::kapamaKomutuAta(SanalSinif* nsn){
	_kapa[0] = nsn;
}
void UzaktanKumanda::ac(){
	SanalSinif* ptr = _ac[0];
	cout << ptr->isimiReturnEtmekIcin() << " aciliyor..." << endl;
}
void UzaktanKumanda::kapa(){
	SanalSinif* ptr = _kapa[0];
	cout << ptr->isimiReturnEtmekIcin() << " kapaniyor..." << endl;
}
int main() {
	UzaktanKumanda kumanda;
	TelevizyonAcKomutu tvAcKomutu;//yapicisýna "televizyon" ata, 
	TelevizyonKapaKomutu tvKapaKomutu;
	kumanda.acmaKomutuAta(&tvAcKomutu);
	kumanda.kapamaKomutuAta(&tvKapaKomutu);
	kumanda.ac();//icine returnEt()'i kullanacam
	kumanda.kapa();
	OtoparkKapiAcKomutu kapiAcKomutu;
	OtoparkKapiKapaKomutu kapiKapaKomutu;
	kumanda.acmaKomutuAta(&kapiAcKomutu);
	kumanda.kapamaKomutuAta(&kapiKapaKomutu);
	kumanda.ac();
	kumanda.kapa();
	return 0;
}
