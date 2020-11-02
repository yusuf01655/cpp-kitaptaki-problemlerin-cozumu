#ifndef NOKTA_H
#define NOKTA_H
class Nokta{
    float x;
    float y;
    public:
        double xAl(){
            return x;
        }
        double yAl(){
            return y;
        }
        friend class Dogru;
        Nokta(float _x,float _y):x(_x),y(_y){}
        Nokta(){}
};
#endif
