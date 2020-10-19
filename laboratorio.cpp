#include "Laboratorio.h"
 

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
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

void Laboratorio::mostrar()
{
    cout << endl;
    cout << left;
    cout << setw(12) << "SO";
    cout << setw(10) << "Nombre";
    cout << setw(10) << "Marca";
    cout << setw(10) << "Ram";
    cout << setw(10) << "Nucleos";
    cout << endl;
    for(size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout << p;
        //cout << "Sistema operativo: " << p.getOperativo() << endl;
        //cout << "Nombre: " << p.getNombre() << endl;
        //cout << "Marca: " << p.getMarca() << endl;
        //cout << "Ram: " << p.getRam() << endl;
        //cout << "Numero de nucleos: " << p.getNucleos() << endl;
        //cout << endl;
    }
}
