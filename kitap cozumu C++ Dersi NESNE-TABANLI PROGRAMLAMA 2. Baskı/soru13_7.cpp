#include <iostream>
using namespace std;
class Sporcu {
	string isim;
	string ulke;
public:
	 istream& operator>>(istream&);
	 ostream& operator<<(ostream&);
};
istream& Sporcu::operator>>(istream& girdi){
	cout << "Patencinin ismini giriniz:";
	girdi >> isim;
	cout << "Patencinin ulkesini giriniz:";
	girdi >> ulke;
	return girdi;
}
ostream& Sporcu::operator<<(ostream& cikti){
	cikti << "Isim:" << isim << endl;
	cikti << "Ulke:" << ulke << endl;
	return cikti;
}
class Patenci: public Sporcu{
	double skor[10];
	double ortalamaDegeri;
public:
	friend istream& operator>>(istream&, Patenci&);
	double ort();
	friend ostream& operator<<(ostream&, Patenci&);
};
istream& operator>>(istream& girdi, Patenci& nesne){
	int i;
	cout << "Skorlar:";
	for(i=0;i<10;i++)
		girdi >> nesne.skor[i];
	return girdi;
}
ostream& operator<<(ostream& cikti, Patenci& nesne){
	cikti << "Ortalama:" << nesne.ort() << endl;
	return cikti;
}
double Patenci::ort(){
	double eb = 0;
	double ek = 0;
	int i = 0;
	double toplam = 0;
	while(i<10){
		toplam+=skor[i];
		if(skor[i]>eb) eb = skor[i];
		if(skor[i]<ek) ek = skor[i];
		i++;
	}
	toplam-=(eb+ek);
	ortalamaDegeri= toplam/8;
	return ortalamaDegeri;
}
int main(){
	Patenci yarismaci;
	yarismaci.Sporcu::operator>>(cin);
	cin>>yarismaci;
	yarismaci.Sporcu::operator<<(cout);
	cout<<yarismaci;
	return 0;
}
	
	
	
	
	