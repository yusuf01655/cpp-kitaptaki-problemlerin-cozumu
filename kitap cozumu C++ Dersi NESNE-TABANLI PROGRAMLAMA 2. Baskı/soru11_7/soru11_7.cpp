#include <iostream>
#include "Nokta.h"
#include "math.h"
#include "Dogru.h"
using namespace std;
float Dogru::egim(){
    return a;
}
Nokta Dogru::kesisim(Dogru& dogru){
    Nokta nsn;//hep yapýcý ve yýkýcý fonksiyonlar ugrastýrýyor..!
    nsn.x=((abs(dogru.b-b))/((a-dogru.a)));
    nsn.y=nsn.x*a+b;
    return nsn;
}
int main(){
    Dogru dogru1(2.0,4.0);
    Dogru dogru2(-2.0,2.0);
    cout<<"Dogru-1 Egim:"<<dogru1.egim()<<endl;
    cout<<"Dogru-2 Egim:"<<dogru2.egim()<<endl;
    Nokta k=dogru1.kesisim(dogru2);
    cout<<"Kesisim (K) noktasi (x,y):"<<k.xAl()<<","<<k.yAl()<<endl;
    return 0;
}
