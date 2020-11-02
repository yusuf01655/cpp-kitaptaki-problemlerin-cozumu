#include <iostream>
#include <cmath>
using namespace std;
class Nokta{
    double x;
    double y;
public:
    friend class Dogru;
    Nokta(int _x,int _y):x(_x),y(_y){}
    friend ostream& operator<<(ostream&,Nokta&);
    Nokta();
};
class Dogru{
    double a;
    double b;
public:
    Dogru(double _a,double _b):a(_a),b(_b){}
    Dogru& operator++();
    void yaz();
    Dogru& operator++(int);
    friend ostream& operator<<(ostream&,Dogru&);
    Nokta operator-(const Dogru&);
};
int main(){
    Dogru d1(2.0,4.0); //tamam
    Dogru d2(-2.0,2.0);//tamam
    Nokta n=d1-d2;// - operatorunu Dogru turunde asýrý yukle=evet
    cout<<n; //ostream nokta operatoru asýrý yukle..!=evet
    ++d1; //tamam
    d1.yaz();//tamam.
    d1++;//tamam.
    cout<<d1;// friend ostream& operator<<operatorunu asýrý yukle=tamamdýr.
    return 0;
}

Nokta Dogru::operator-(const Dogru& nesne){
    Nokta nsn;
    nsn.x=(abs(nesne.b-b))/(abs(a-nesne.a));
    nsn.y=nsn.x*a+b;
    return nsn;
}
ostream& operator<<(ostream& cikti,Nokta& nesne){
    cikti<<"("<<nesne.x<<","<<nesne.y<<")"<<endl;
    return cikti;
}
Dogru& Dogru::operator++(){
    a=a+1;
    return *this;
}
void Dogru::yaz(){
    cout<<"y="<<a<<"x + "<<b<<endl;
}
Dogru& Dogru::operator++(int){
    b=b+1;
    return *this;
}
ostream& operator<<(ostream& cikti,Dogru& nesne){
    cikti<<"y="<<nesne.a<<"x + "<<nesne.b<<endl;
    return cikti;
}
Nokta::Nokta(){
    x=0;
    y=0;
}
