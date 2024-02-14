#include <iostream>
using namespace std;

class Rectangulo
{
private:
    int ancho, altura;

public:
    int esquinaX, esquinaY;

    Rectangulo();
    Rectangulo(int x, int y);
    Rectangulo (int x, int y, int w, int h);

    int getAncho();
    void setAncho(int w);
    int getAltura();
    void setAltura(int h);
    int getArea();
    void intersecta(Rectangulo rect);
};

int main()
{
    Rectangulo r1;
    Rectangulo r2 (8, 10);
    Rectangulo r3 (1, 1, 5, 15);

    r1.intersecta(r2);
    r1.intersecta(r3);
    r2.intersecta(r3);
}

Rectangulo::Rectangulo()
{
    ancho = 0;
    altura = 0;
    esquinaX = 0;
    esquinaY = 0;
}

 Rectangulo::Rectangulo(int x, int y)
 {
    ancho = 0;
    altura = 0;
    esquinaX = x;
    esquinaY = y;
 }

 Rectangulo::Rectangulo (int x, int y, int w, int h)
 {
    if(w < 0)
    w = 0;

    if(h < 0)
    h = 0;

    ancho = w;
    altura = h;
    esquinaX = x;
    esquinaY = y;
 }

 int Rectangulo::getAncho()
 {
     return ancho;
 }

 void Rectangulo::setAncho(int w)
 {
     if(w < 0)
     w = 0;

     ancho = 0;
 }

 int Rectangulo::getAltura()
 {
     return altura;
 }

 void Rectangulo::setAltura(int h)
 {
     if(h < 0)
     h = 0;

     altura = h;
 }

 int Rectangulo::getArea()
 {
     return ancho*altura;
 }

 void Rectangulo::intersecta(Rectangulo rect)
 {
     if(esquinaX <= rect.esquinaX+rect.getAncho() && esquinaX + ancho >= rect.esquinaX && esquinaY <= rect.esquinaY + rect.getAltura() && esquinaY + altura >= rect.esquinaY)
     {
         cout << "Los rectangulos intersectan" << endl;
     } else{
         cout << "Los rectangulos no intersectan" << endl;
     }
 }
