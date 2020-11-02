#include "Nokta.h"
#include <cmath>
class Dikdortgen{
    Nokta a;
    Nokta b;
    public:
        float alan(){ return abs(a.x-b.x)*abs(a.y-b.y); }
        int cevre(){ return 2*(abs(a.x-b.x)+abs(a.y-b.y));}
        Dikdortgen(Nokta _a,Nokta _b):a(_a),b(_b){}
};
