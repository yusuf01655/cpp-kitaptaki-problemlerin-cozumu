#include <iostream>
using namespace std;
class Rasyonel {
	int pay;
	int payda;
public:
	Rasyonel(int _pay, int _payda) :pay(_pay), payda(_payda) {};
	int payAl() { return pay; }
	int paydaAl() { return payda; }
    bool operator>(const double tamsayi);
	
};
bool Rasyonel::operator>(const double tamsayi) {
	return double((payAl()) / (paydaAl()))>tamsayi;
}
int main() {
	Rasyonel _1kesir = Rasyonel(5, 4);
	if (_1kesir > 0.25) {
		cout << "kesirimiz buyuk..";
	}
	else
	{
		cout << "kesirimiz kucuk.";
	}
	return 0;
}
