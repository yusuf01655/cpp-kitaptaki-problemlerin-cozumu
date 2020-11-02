#include <iostream>
using namespace std;
class Kalem{
    string isim;
    double fiyat;
    int adet;
    public:
    static double toplam;
    Kalem();
};
double Kalem::toplam=0;
Kalem::Kalem(){
    cout<<"Kalemin ismini giriniz:";
    cin>>isim;
    cout<<"Kalemin fiyatini giriniz:";
    cin>>fiyat;
    cout<<"Kalemin adedini giriniz:";
    cin>>adet;
    toplam+=adet*fiyat;
}
int main(){
    Kalem esya[10];
    cout<<"Toplam tutar:"<<esya[0].toplam<<endl;
    return 0;
}
