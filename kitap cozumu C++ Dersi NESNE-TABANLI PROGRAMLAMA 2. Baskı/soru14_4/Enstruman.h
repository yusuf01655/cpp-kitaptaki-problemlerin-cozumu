#ifndef ENSTRUMAN_H
#define ENSTRUMAN_H
#include <iostream>
using namespace std;
class Enstruman {
protected:
	string isim;
public:
	Enstruman(string _isim) : isim(_isim) {}
	virtual void cal(string eser) = 0;
};
#endif