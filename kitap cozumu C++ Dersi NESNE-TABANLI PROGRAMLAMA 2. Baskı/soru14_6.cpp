#include <iostream>
using namespace std;
class HastaFatura {
	string sinifinIsim;
	int sinifinHastanePayi;
	int sinifinIlacMasrafi;
public:
	virtual void odeme();
	HastaFatura(string,int,int);
	HastaFatura(){}
};
HastaFatura::HastaFatura(string _isim, int _hastanePayi, int _ilacMasrafi) {
	sinifinIsim = _isim;
	sinifinHastanePayi = _hastanePayi;
	sinifinIlacMasrafi = _ilacMasrafi;
}
void HastaFatura::odeme() {
	cout << "Hasta Ismi: " << sinifinIsim << " Toplam ucret: " << sinifinHastanePayi + sinifinIlacMasrafi << " lira." << endl; 

}
class SigortaliHastaFatura :public HastaFatura{
	string sigortaliIsim;
	int sigortaliHastanePayi;
	int sigortaliIlacMasrafi;
	string sigortaSirketiIsmi;
public:
	SigortaliHastaFatura(string,int,int,string);
	void odeme();

};
SigortaliHastaFatura::SigortaliHastaFatura(string s_isim, int s_hastanePayi, int s_ilacMasrafi, string s_sirketIsmi) {
	sigortaliIsim = s_isim;
	sigortaliHastanePayi = 0;
	sigortaliIlacMasrafi = s_ilacMasrafi * 0.2;
}
void SigortaliHastaFatura::odeme() {
	cout << "Hasta ismi: " << sigortaliIsim << " --- Sigorta:" << sigortaSirketiIsmi << " --- Toplam Ucret: " << sigortaliHastanePayi + sigortaliIlacMasrafi << " lira." << endl;
}
int main() {
	char s;
	string isim,sirket;
	int ilacMasrafi;
	int hastanePayi;
	HastaFatura* faturalar[20];
	for (int i=0; i<20; i++) {
		cout << "Hasta sigortali mi? (E/H):";
		cin >> s;
		cout << "Hastanin ismi:";
		cin >> isim;
		cout << "Hastane ucreti:";
		cin >> hastanePayi;
		cout << "Ilac masrafi:";
		cin >> ilacMasrafi;
		if (s=='E') {
			cout << "Sigorta sirketi:";
			cin >> sirket;
			faturalar[i] = new SigortaliHastaFatura(isim, hastanePayi, ilacMasrafi, sirket);
		}
		else 
			faturalar[i] = new HastaFatura(isim, hastanePayi, ilacMasrafi);
		faturalar[i]->odeme();	
	}


	return 0;
}