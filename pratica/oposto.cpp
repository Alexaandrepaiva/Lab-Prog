#include <iostream>
#include <cmath>

using namespace std;

class Ponto3d{
    float x, y, z;
public:
    // Ponto3d()
    //     :x(0), y(0), z(0) {}
    Ponto3d(float x = 0, float y = 0, float z = 0)
        :x(x), y(y), z(z) {}
    void visualizar(){
        cout << "( " << x << " , " << y << " , " << z << " )";
    }
    void oposto() {
        x *= -1;
        y *= -1;
        z *= -1;
    }
    float distancia() {
        return sqrt(x * x + y * y + z * z);
    }
};

int main(){
    Ponto3d p1;
    Ponto3d p2(3,5);
    Ponto3d p3(4,6,7);
    p3.oposto();
    p1.visualizar();p2.visualizar();p3.visualizar();
    cout << endl << p1.distancia() << " " << p2.distancia() << " " << p3.distancia();
    return 0;
}