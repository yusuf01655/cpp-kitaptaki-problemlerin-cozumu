#include <iostream>
using namespace std;


class Kume{
    bool a[100];
public:
    int sayac;
    int ortak_sayi_sayisi;
    int* ptr_sayi;
    int kesisim[100];
    Kume();
    friend istream& operator>>(istream&,Kume&);
    Kume& operator*(Kume&);
    friend ostream& operator<<(ostream&,Kume&);
};

ostream& operator<<(ostream& cikti,Kume& nesne){
    int i;
    for( i=0;i<nesne.ortak_sayi_sayisi;i++){
        cikti<<nesne.kesisim[i]<<" ";
    }
    return cikti;
}
Kume& Kume::operator*(Kume& nesne){
    int i;int j;
    for( i=0;i<sayac;i++){
        for( j=0;j<sayac;j++){
            if(ptr_sayi[i]==nesne.ptr_sayi[j]){
                kesisim[ortak_sayi_sayisi]=ptr_sayi[i];
                ortak_sayi_sayisi++;
            }
        }
    }
    return *this;   
}
istream& operator>>(istream& girdi,Kume& nesne){
    int dizi[100];
    nesne.sayac=0;
    do{
        girdi>>dizi[nesne.sayac];
        if(dizi[nesne.sayac]==-1){ break;}
        nesne.sayac++;
    }while(true);
    delete[] nesne.ptr_sayi;
    nesne.ptr_sayi=new int[nesne.sayac];
    for(int i=0;i<nesne.sayac;i++){
        nesne.a[i]=true;
        nesne.ptr_sayi[i]=dizi[i];
    }
    return girdi;
}
Kume::Kume():sayac(2),ortak_sayi_sayisi(0){
int i;
    ptr_sayi=new int[sayac];
    for(i=0;i<sayac;i++)
        a[i]=0;
    for( i=0;i<sayac;i++)
        ptr_sayi[i]=0;
}
int main(){
    Kume nesne1,nesne2;
    cout<<"Kumeyi giriniz:";
    cin>>nesne1;
    cout<<"Kumeyi giriniz:";
    cin>>nesne2;
    nesne1*nesne2;
    cout<<"Kesisim:"<<nesne1<<endl;
    return 0;
}
