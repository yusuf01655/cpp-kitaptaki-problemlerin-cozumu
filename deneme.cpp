#include <iostream>
using namespace std;
class SanalSinif{
protected:
    string isim;
public:
  SanalSinif(string _isim):isim(_isim){};
  virtual string isimDondur() = 0;
};
class TelevizyonAcKomutu :public SanalSinif{
public:
  TelevizyonAcKomutu() :SanalSinif("Televizyon"){}
  string isimDondur();
};
string TelevizyonAcKomutu::isimDondur(){ return isim;}

int main(){}
