#include "Laboratorio.h"
#include <fstream>
using namespace std;

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


void Laboratorio::respaldar_tabla()
{  
    ofstream archivo("computadorasTabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(12) << "SO";
        archivo << setw(10) << "Nombre";
        archivo << setw(10) << "Marca";
        archivo << setw(10) << "Ram";
        archivo << setw(10) << "Nucleos";
        archivo << endl;
        for(size_t i = 0; i < cont; i++){
            Computadora &p = arreglo[i];
            archivo << p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{  
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for(size_t i = 0; i < cont; i++){
            Computadora &p = arreglo[i];
            archivo << p.getOperativo() << endl;
            archivo << p.getNombre() << endl;
            archivo << p.getMarca() << endl;
            archivo << p.getRam() << endl;
            archivo << p.getNucleos() << endl;
        }
    }
    archivo.close();
}


void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()) {
        string temp;
        int ram;
        int nucleos;
        Computadora p;

        while(true)
        {
            getline(archivo, temp); //So
            if(archivo.eof()){
               break;
            }
            p.setOperativo(temp);

            getline(archivo, temp); //Nombre
            p.setNombre(temp);

            getline(archivo, temp); //Marca
            p.setMarca(temp);

            getline(archivo, temp);  //string to int 
            ram = stoi(temp);
            p.setRam(ram);

            getline(archivo, temp);  //string to int 
            nucleos = stoi(temp);
            p.setNucleos(nucleos);

            agregarComputadora(p);
        }

    }
    archivo.close();
}