#include <iostream>
using namespace std;
class A{
    int x;
public:
    A(int _x=0):x(_x){}
    friend ostream& operator<<(ostream&,A&);
    A operator+(const A&);
    A operator+=(const A&);
    friend bool operator>(const A& cagiran,int c);
    friend istream& operator>>(istream& a,A& nesne);
};
istream& operator>>(istream& a,A& nesne){
    a>>nesne.x;
    return a;
}
bool operator>(const A& cagiran,int c){
    return cagiran.x>c;
    
}
A A::operator+=(const A& g){
    x+=g.x;
    return A(x);
}
A A::operator+(const A& f){
    A temp;
    temp.x=x+f.x;
    return temp;
}
ostream& operator<<(ostream& asd,A& j){
    asd<<j.x;
    return asd;
}
int main(){
    A a1(5),a2(3),a3;
    cout<<a1<<endl;//
    a3=a1+a2;//
    cout<<a3<<endl;
    a1+=a2;//
    cout<<a1<<endl;
    if(a1>4) cout<<"true"<<endl;//
    cin>>a2;//
    cout<<a2;

    return 0;
}

