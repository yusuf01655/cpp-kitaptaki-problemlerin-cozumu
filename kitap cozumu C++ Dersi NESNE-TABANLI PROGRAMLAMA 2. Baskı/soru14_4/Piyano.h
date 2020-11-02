#include "Enstruman.h"
class Piyano : public Enstruman {
public:
	Piyano():Enstruman("Piyano") {}
	void cal(string eser);
};