

#include "Punto.hpp"
 //constructores
    Punto::Punto(){x = 0; y = 0;}
    Punto::Punto(double _x, double _y){;x = _x; y = _y;}

    // acceso
    double Punto::getX(){return x;}
    double Punto::getY(){return y;}

    // modificacion
    void Punto::setX(double _x){x = _x;}
    void Punto::setY(double _y){y = _y;}

    // otros métodos
    double Punto::calculaDistancia(Punto p){
        return sqrt( pow((p.x - x),2) + pow((p.y - y),2));
    }

    std::string Punto::str(){
        return '(' + std::to_string(x) +',' + std::to_string(y) + ')' ;
    }
