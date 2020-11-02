#include "Orkestra.h"
void Orkestra::enstrumanEkle(Enstruman* e) {
	enstrumanlar[x] = e;
	x++;
}
void Orkestra::eserCal(string eserAdi) {
	for (int i = 0; i < x; i++) {
		Enstruman* e = enstrumanlar[i];
		e->cal(eserAdi);
	}
}
int Orkestra::x = 0;