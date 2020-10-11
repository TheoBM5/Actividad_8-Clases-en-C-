#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include "computadora.h"

using namespace std;
class Computadora
{
private:
    string sisOperativo;
    string NomEquipo;
    int Ram;
    int Cant_nucleos;

public:
    Computadora();
    Computadora(const string &sisOperativo, 
                const string &NomEquipo,
                int Ram,
                int Cant_nucleos);
    void setOperativo(const string &v);
    string getOperativo();
    void setNombre(const string &v);
    string getNombre();
    void setRam(int v);
    int getRam();
    void setNucleos(int v);
    int getNucleos();
};





#endif