#ifndef PUNTO_HPP_
#define PUNTO_HPP_
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

class Punto{
private:
    double x,y;
public:
    //constructores
    Punto();
    Punto(double _x, double _y);

    // acceso
    double getX();
    double getY();

    // modificacion
    void setX(double _x);
    void setY(double _y);

    // otros métodos
    double calculaDistancia(Punto p);
    std::string str();

};

#endif /*Punto_hpp*/