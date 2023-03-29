#include <iostream>

using namespace std;

class Ponto{
    float x, y, z;
public:
    Ponto(float px, float py, float pz);

    void setX(float px){px = x;};
    void setY(float py){py = y;};
    void setZ(float pz){pz = z;};

    float getX() {return x;} ;
    float getY() {return y;} ;
    float getZ() {return z;} ;

    float distancia(Ponto p2);
};

Ponto :: Ponto (float px, float py, float pz){
    x = px;
    y = py;
    z = pz; 
}

int main(){

    return 0;
}
