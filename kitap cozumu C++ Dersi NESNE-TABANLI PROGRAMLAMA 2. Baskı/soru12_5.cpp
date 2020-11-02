//soru 12_5deyim...!
#include <iostream>
using namespace std;
class Renk {
	int rgb[3];
public:
	Renk(int, int, int);
	int operator[](const int);
	Renk();
	void goruntule();
	Renk operator+(const Renk&);
	friend Renk operator+(const int sayi, const Renk& nesne);
};
Renk Renk::operator+(const Renk& nesne) {
	Renk temp;
	temp.rgb[0] = rgb[0] + nesne.rgb[0];
	temp.rgb[1] = rgb[1] + nesne.rgb[1];
	temp.rgb[2] = rgb[2] + nesne.rgb[2];
	return temp;
}
Renk operator+(const int sayi, const Renk& nesne) {
	Renk temp;
	temp.rgb[0] = sayi + nesne.rgb[0];
	temp.rgb[1] = sayi + nesne.rgb[1];
	temp.rgb[2] = sayi + nesne.rgb[2];
	return temp;
}
void Renk::goruntule() {
	cout << "(" << rgb[0] << "," << rgb[1] << "," << rgb[2] << ")" << endl;
}
Renk::Renk() {
	for (int i = 0; i < 3; i++)
		rgb[i] = 0;
}
int Renk::operator[](const int i) {
	return rgb[i];
}
Renk::Renk(int r, int g, int b){
	rgb[0] = r;
	rgb[1] = g;
	rgb[2] = b;
}
int main() {
	Renk r1(255, 67, 123), r2(0, 34, 56), r3;
	r1.goruntule();
	r2.goruntule();
	r3 = r1 + r2;
	r3.goruntule();
	r2 = 20 + r2;
	r2.goruntule();
	r3.goruntule();
	cout << r1[0] << endl;
	cout << r1[1] << endl;
	cout << r1[2] << endl;
	return 0;
}
