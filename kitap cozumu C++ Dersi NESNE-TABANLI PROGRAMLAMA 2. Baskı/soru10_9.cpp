#include <iostream>
using namespace std;
class Para{
    double liraDegeri;
    int elli,yirmiBes,on,bes,bir;
        public:
        void liraAta();
        void donustur();
        void yaz();
        Para(int,int,int,int,int);
};
void Para::liraAta(){
    cout<<"Miktarini lira olarak belirtiniz:";
    cin>>liraDegeri;
    cout<<liraDegeri<<" lira:"<<endl;
}
void Para::donustur(){
    elli=liraDegeri/0.50;
    liraDegeri-=elli*0.50;
    yirmiBes=liraDegeri/0.25;
    liraDegeri-=yirmiBes*0.25;
    on=liraDegeri/0.10;
    liraDegeri-=0.10*on;
    bes=liraDegeri/0.05;
    liraDegeri-=0.05*bes;
    bir=liraDegeri/0.01;
    liraDegeri-=bir*0.01;
}
void Para::yaz(){
    cout<<elli<<" 50 kurus,"<<endl;
    cout<<yirmiBes<<" 25 kurus,"<<endl;
    cout<<on<<" 10 kurus,"<<endl;
    cout<<bes<<" 5 kurus,"<<endl;
    cout<<bir<<" 1 kurus"<<endl;
}
Para::Para(int e,int yi,int o,int be,int bi){
    elli=e;
    yirmiBes=yi;
    on=o;
    bes=be,
    bir=bi;
}
int main(){
    Para nesne(0,0,0,0,0);
    nesne.liraAta();
    nesne.donustur();
    nesne.yaz();
    return 0;
}


