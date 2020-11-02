#include <iostream>
#include <new>
using namespace std;
class Polinom{
    int *katsayi;
    int derece;
    public:
        Polinom(int d);
        void katsayiAta();
        void yaz();
        void topla(Polinom p);
        Polinom& operator+(const Polinom&);
};
Polinom& Polinom::operator+(const Polinom& p){
    int sayac=derece;
    do{
        katsayi[sayac]+=p.katsayi[sayac];
        sayac--;
    }while(sayac>=0);
    return *this;
}
Polinom::Polinom(int d){
    derece=d;
    katsayi=new int[d];
}
void Polinom::katsayiAta(){
    int sayac=derece;
    cout<<"Katsayilari giriniz:"<<endl;
    do{
        cout<<"katsayi "<<sayac<<": ";
        cin>>katsayi[sayac];
        sayac--;
    }while(sayac>=0);
}
void Polinom::yaz(){
    int sayac=derece;
    cout<<"(";
    cout<<katsayi[sayac]<<"x"<<sayac;
    sayac--;
    do{
        if(((katsayi[sayac]>0)&&(sayac==0))){
            cout<<"+"<<katsayi[sayac];
        }
        else if(((katsayi[sayac]>0)&&(sayac==1))){
            cout<<"+"<<katsayi[sayac]<<"x";
        }
        else if(((katsayi[sayac]>0)&&(sayac>0))){
            cout<<"+"<<katsayi[sayac]<<"x"<<sayac;
        }
        else if(((katsayi[sayac]==0)&&(sayac>=0))){
            cout<<"";
        }
        else if(((katsayi[sayac]<0)&&(sayac==0))){
            cout<<katsayi[sayac];
        }
        else if(((katsayi[sayac]<0)&&(sayac>0))){
            cout<<katsayi[sayac];
        }
        sayac--;
    }while(sayac>=0);
    cout<<")";
}
void Polinom::topla(Polinom p){
    int sayac=derece;
    do{
        katsayi[sayac]+=p.katsayi[sayac];
        sayac--;
    }while(sayac>=0);
}
int main(){
    int d;
    cout<<"Polinom derecesi giriniz:";
    cin>>d;
    Polinom p1(d),p2(d);
    p1.katsayiAta();
    p2.katsayiAta();
    p1.yaz();
    cout<<" + ";
    p2.yaz();
    cout<<" = ";
    p1=p1+p2;
    p1.yaz();
    return 0;
}



