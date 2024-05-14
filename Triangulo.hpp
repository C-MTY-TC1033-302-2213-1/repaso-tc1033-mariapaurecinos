#ifndef TRIANGULO_HPP_
#define TRIANGULO_HPP_

#include "Punto.hpp"
#include <stdio.h>
#include <string>
#include <math.h>

class Triangulo{
private:
    Punto v1, v2, v3;

public:
Triangulo();
Triangulo(Punto _v1, Punto _v2, Punto _v3);

// acceso
Punto getVertice1();
Punto getVertice2();
Punto getVertice3();

// modificacicon
void setVertice1(Punto _v1);
void setVertice2(Punto _v2);
void setVertice3(Punto _v3);

// otros metodos
double perimetro();
double area();
std::string str();
};

#endif /*Triangulo_hpp*/