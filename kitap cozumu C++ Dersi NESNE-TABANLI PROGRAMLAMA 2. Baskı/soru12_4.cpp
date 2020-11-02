#include <iostream>
using namespace std;
class Tarih {
	int yil;
	int ay;
	int gun;
public:
	int yilAl();
	int ayAl();
	int gunAl();
	Tarih(int, int, int);
	Tarih() { yil = 0; gun = 0; ay = 0; }
};
Tarih::Tarih(int y, int a, int g) {
	yil = y;
	ay = a;
	gun = g;
}
int Tarih::yilAl() {
	return yil;
}
int Tarih::ayAl() {
	return ay;
}
int Tarih::gunAl() {
	return gun;
}
class Urun {
	int urunKodu;
	Tarih uretimTarihi;
	Tarih sonKullanmaTarihi;
public:
	Tarih sonKullanmaTarihiAl();
	Tarih uretimTarihiAl();
	int urunKoduAl();
	Urun(int,Tarih,Tarih);
};
int Urun::urunKoduAl() {
	return urunKodu;
}
Tarih Urun::uretimTarihiAl() {
	return uretimTarihi;
}
Tarih Urun::sonKullanmaTarihiAl() {
	return sonKullanmaTarihi;
}
Urun::Urun(int uK,Tarih uT,Tarih sKT) {
	urunKodu = uK;
	uretimTarihi = uT;
	sonKullanmaTarihi = sKT;
}
bool operator>(Tarih tn, Tarih n) {
	return (tn.yilAl() * 365 + tn.ayAl() * 30 + tn.gunAl()) > (n.yilAl() * 365 + n.ayAl() * 30 + n.gunAl());
}
int main() {
	Tarih uretim(2012, 07, 12);
	Tarih sonKullanma(2012, 07, 15);
	Urun sut(102, uretim, sonKullanma);
	int yil, ay, gun;
	cout << "Bugunun tarihini giriniz (yil ay gun):";
	cin >> yil >> ay >> gun;
	Tarih bugun(yil, ay, gun);
	if (bugun > sut.sonKullanmaTarihiAl()) {
		cout << "Gunu gecmis urun, lutfen kullanmayiniz..." << endl;
	}
	if (sut.sonKullanmaTarihiAl() > bugun) {
		cout << "urunu guvenle kullanabilirsiniz..." << endl;
	}
	return 0;
}
