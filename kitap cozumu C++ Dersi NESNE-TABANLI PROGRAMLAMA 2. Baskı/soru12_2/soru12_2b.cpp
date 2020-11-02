//soru 2b.
#include <iostream>
using namespace std;
class Rasyonel {
	int pay;
	int payda;
public:
		Rasyonel(int _pay,int _payda):pay(_pay),payda(_payda){}
		int payAl() { return pay; }
		int paydaAl() { return payda; }
		friend bool operator>(const Rasyonel&, const double);
};
bool operator>(const Rasyonel& nesne, const double sayi) {
	return double(nesne.pay / nesne.payda) > sayi;
}
int main() {
	Rasyonel kesir1(5, 4);
	if (kesir1 > 0.25) cout << "bizim kesir buyuktur.." << endl;
	return 0;
}

