#include <iostream>
using namespace std;
class Konum{
    float enlem;
    float boylam;
public:
    Konum(float _enlem=0,float _boylam=0):enlem(_enlem),boylam(_boylam){}
    Konum operator()(const float,const float);
    friend ostream& operator<<(ostream&,Konum&);
};
ostream& operator<<(ostream& cikti,Konum& nesne){
    cikti<<"("<<nesne.enlem<<","<<nesne.boylam<<")"<<endl;
    return cikti;
}
Konum Konum::operator()(const float a,const float b){
    Konum temp;
    temp.enlem=enlem+a;
    temp.boylam=boylam+b;
    return temp;
}
int main(){
    Konum k1(32.34,-35.65),k2;//tamam.
    k2=k1(2.3,4.5);//tamam.
    cout<<k1;//tamam.
    cout<<k2;
    return 0;
}    
