#include <iostream>
using namespace std;
class Atlet {
public:
	string isim;
	string cinsiyet;
	string ulke;

	istream& operator>>(istream&);
};
istream& Atlet::operator>>(istream& girdi) {
	cout << "Isim giriniz:";
	girdi >> isim;
	cout << "Cinsiyet giriniz: ";
	girdi >> cinsiyet;
	cout << "Ulke giriniz: ";
	girdi >> ulke;
	return girdi;
}
class YuzMetreKosucu : public Atlet {
public:
	int bitisZamani;
	static int kazananZaman;
	static string kazananIsim;
	friend istream& operator>>(istream&, YuzMetreKosucu&);
	YuzMetreKosucu();
};
int YuzMetreKosucu::kazananZaman = 0;
string YuzMetreKosucu::kazananIsim = "";
YuzMetreKosucu::YuzMetreKosucu() {
	cout << "Isim giriniz:";
	cin >> isim;
	cout << "Cinsiyet giriniz:";
	cin >> cinsiyet;
	cout << "Ulke giriniz:";
	cin >> ulke;
	cout << "Bitis zamani giriniz: ";
	cin >> bitisZamani;
	if (bitisZamani > kazananZaman) {
		kazananZaman = bitisZamani;
		kazananIsim = isim;
	}
}
istream& operator>>(istream& girdi, YuzMetreKosucu& nesne) {
	cout << "Bitis zamanini giriniz:";
	girdi >> nesne.bitisZamani;
	return girdi;
}
int main() {
	YuzMetreKosucu yarismaci[3];
	cout << "Kazanan ismi:" << YuzMetreKosucu::kazananIsim << endl;
	cout << "Kazananin bitis zamani: " << YuzMetreKosucu::kazananZaman << endl;
	return 0;
}
