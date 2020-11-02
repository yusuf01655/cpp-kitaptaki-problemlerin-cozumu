#include "A.h"
#include "B.h"
class C : public A, public B {
	int z;
public:
	void yaz();
	C(int _u, int _v, int _y, int _z):A(_u,_v),B(_y), z(_z){}
}; 