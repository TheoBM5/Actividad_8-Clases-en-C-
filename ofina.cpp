
#include "oficina.h"
 

Oficina::Oficina()
{
    cont = 0;
}

void Oficina::agregarComputadora(const Computadora &p)
{
    if (cont < 5){
        arreglo[cont] = p;
        cont++;
    }
    else
    {
        cout << "Arreglo lleno" <<endl;
    }
    
}

void Oficina::mostrar()
{
    for(size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout << "Sistema Operativo: " << p.getOperativo() << endl;
        cout << "Nombre: " << p.getNombre() << endl;
        cout << "Ram: " << p.getRam() << endl;
        cout << "Cantidad de Nucleos: " << p.getNucleos() << endl;
        cout << endl;
    }
}