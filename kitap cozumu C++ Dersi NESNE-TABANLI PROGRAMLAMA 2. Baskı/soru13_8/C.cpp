#include <iostream>
#include "C.h"
using namespace std;
void C::yaz(){
	A::yaz();
	B::yaz();
	cout << z << endl;
}