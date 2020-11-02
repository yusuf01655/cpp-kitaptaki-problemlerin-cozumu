#include <iostream>
using namespace std;
class Matris{
    int x[3][3];
public:
    friend istream& operator>>(istream&,Matris&);
    friend ostream& operator<<(ostream&,Matris&);
    Matris& operator+(Matris&);
    Matris(const int);
};
Matris::Matris(const int u){//
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            x[i][j]=u;
}
ostream& operator<<(ostream& cikti,Matris& nesne){//
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
            cikti<<nesne.x[i][j]<<" ";
        }
        cikti<<endl;
    }
    return cikti;
}
Matris& Matris::operator+(Matris& nesne){//
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            x[i][j]+=nesne.x[i][j];
    return *this;
}
istream& operator>>(istream& girdi,Matris& nesne){//
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            girdi>>nesne.x[i][j];
    return girdi;
}
int main(){
    Matris nesne1(0),nesne2(0);
    cout<<"Matrisi giriniz:"<<endl;
    cin>>nesne1;
    cout<<"Matrisi giriniz:"<<endl;
    cin>>nesne2;
    nesne1+nesne2;
    cout<<"Matrislerin toplami:\n";
    cout<<nesne1<<endl;
    return 0;
}
