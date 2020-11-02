#ifndef NOKTA_H
#define NOKTA_H
class Nokta{
    int x;
    int y;
    public:
        int xAl(){ return x;}
        int xAta(int _x){x=_x; }
        int yAl(){ return y;}
        int yAta(int _y){y=_y;}
        friend class Dikdortgen;
        Nokta(int _x,int _y):x(_x),y(_y){}
        
};
#endif
