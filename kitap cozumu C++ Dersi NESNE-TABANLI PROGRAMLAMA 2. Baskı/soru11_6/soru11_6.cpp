#include "Dikdortgen.h"
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"a noktasi (x,y):";
    cin>>x>>y;
    Nokta a(x,y);
    cout<<"b noktasi (x,y):";
    cin>>x>>y;
    Nokta b(x,y);
    Dikdortgen d(a,b);
    cout<<"Cevre:"<<d.cevre()<<endl;
    cout<<"Alan:"<<d.alan()<<endl;
    return 0;
}
