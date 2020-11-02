#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Kitap{
	string isbn;
	string baslik;
	string yazar;
	float fiyat;
public:
	Kitap(string, string, string,float);
	~Kitap();
};
Kitap::~Kitap(){
	cout << "Kitap sinifi yikici fonksiyonu..!" << endl;
}
Kitap::Kitap(string _i,string _b,string _y,float _f):isbn(_i),baslik(_b),yazar(_y),fiyat(_f){}
class ElektronikKitap: public Kitap{
private:
	string url;
	float boyutMB;
public:
	ElektronikKitap(string _i,string _b,string _y,float _f,string _u,float _bo):Kitap(_i,_b,_y,_f),url(_u),boyutMB(_bo){}
	~ElektronikKitap();
};
ElektronikKitap::~ElektronikKitap(){
	cout << "Elektronik kitap yikici fonksiyonu..!" << endl;
}


class BasiliKitap: public Kitap{
private:
	string yayinEvi;
	int sayfaSayisi;
public:
	BasiliKitap(string,string,string,float,string,int);
	~BasiliKitap();
};
BasiliKitap::BasiliKitap(string _i,string _b,string _y,float _f,string _ya,int _s):Kitap(_i,_b,_y,_f),yayinEvi(_ya),sayfaSayisi(_s){}
BasiliKitap::~BasiliKitap(){
	cout << "BasiliKitap sinifi yikici fonksiyonu..!" << endl;
}
int main(){
	ElektronikKitap k2("112323","Cok bi cocuk","Can Yucel",6.40,"http://bubir.ornek.com.tr/kitap.pdf",34);
	BasiliKitap k3("","b","Elif Safak",34.5,"Palmiye",230);
	return 0;
}
	