#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main(){
    Computadora pc1 = Computadora( "Windows 10",
                                    "Pc_casa",
                                    "Lenovo",
                                    8.0,
                                    4);
    

    Computadora pc2;
    pc2.setOperativo("Ubuntu");
    pc2.setNombre("Oficina");
    pc2.setMarca("Asus");
    pc2.setRam(8);
    pc2.setNucleos(4);

    Laboratorio lab;
    Computadora pc3, pc4;
    
   
    cin >> pc4;
    //cout<< pc3;
    lab << pc1 << pc2 << pc4;
    lab.mostrar();
    //of.agregarComputadora(pc1);
    //of.agregarComputadora(pc3);
    
    

    //cout<< pc3;
    //Computadora pc4;
    //cin >> pc4;
    //lab << pc4;

    
/*
    cout << pc3.getOperativo() <<endl;
    cout << pc3.getNombre() <<endl;
    cout << pc3.getRam() <<endl;
    cout << pc3.getNucleos() <<endl;*/
    return 0;
    }

