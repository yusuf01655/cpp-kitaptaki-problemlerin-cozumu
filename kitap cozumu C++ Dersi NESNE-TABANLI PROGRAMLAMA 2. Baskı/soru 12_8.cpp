#include <iostream>
#include <cmath>
using namespace std;
class TamSayi{
    int deger;
public:
    friend istream& operator>>(istream&,TamSayi&);
    int operator[](const int);//nsn[0]
    
};

int TamSayi::operator[](const int limit){
    if(deger<pow(10,limit)){
        return -1;
    }
    else{
        return (deger/(int)pow(10,limit))%10;
    }
}
istream& operator>>(istream& girdi,TamSayi& nesne){
    girdi>>nesne.deger;
    return girdi;
}
int main(){
    TamSayi nsn;
    cin>>nsn;
    cout<<"Sayinin 0. basamagi:"<<nsn[0]<<endl;
    cout<<"Sayinin 2. basamagi:"<<nsn[2]<<endl;
    return 0;
}
