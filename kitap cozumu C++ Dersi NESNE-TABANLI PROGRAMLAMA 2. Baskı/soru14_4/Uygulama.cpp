#include "Keman.h"
#include "Gitar.h"
#include "Piyano.h"
#include "Orkestra.h"
int main() {
	Orkestra orkestra;
	Keman keman;
	Piyano piyano;
	Gitar gitar;
	orkestra.enstrumanEkle(&keman);
	orkestra.enstrumanEkle(&piyano);
	orkestra.enstrumanEkle(&gitar);
	orkestra.eserCal("Pavane");
	return 0;
}