#include <iostream>
#include "oficina.h"

using namespace std;

int main(){
    Computadora pc1 = Computadora( "Windows 10",
                                    "Pc_casa",
                                    8.0,
                                    4);
    

    Computadora pc3;
    pc3.setOperativo("Ubuntu");
    pc3.setNombre("Oficina");
    pc3.setRam(8);
    pc3.setNucleos(4);

    Oficina of;
    

    of.agregarComputadora(pc1);
    of.agregarComputadora(pc3);

    of.mostrar();
/*
    cout << pc3.getOperativo() <<endl;
    cout << pc3.getNombre() <<endl;
    cout << pc3.getRam() <<endl;
    cout << pc3.getNucleos() <<endl;*/
    return 0;
    }
