#include "Enstruman.h"
class Gitar : public Enstruman {
public:
	Gitar():Enstruman("Gitar") {}
	void cal(string eser);
};