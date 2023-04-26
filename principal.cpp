#include <iostream>
#include "estructura.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int cant;
    cout << "Dime cuantas categorias deseas agregar: ";
    cin >> cant;
    for(int i = 0; i < cant; i++){
        cout << "Ingres el id; ";
        cin >> categorias[i].idCat;
        cout << "Ingrese el nombre: ";
        cin >> categorias[i].nombre;
    }
    cout << "\n\n\n";
    cout << "Mostar Categorias \n";
    cout << "============================\n";
    for(int i=0; i < cant; i++){
        cout << "ID: " << categorias[i].idCat << endl;
        cout << "Nombre: " << categorias[i].nombre << endl;
        cout << "=============================\n";
        
    }
    cout << "\n\n\n";

    int cantp;
    cout << "Cuantos producto quiere agregar: ";
    cin >> cantp;

    for (int i = 0; i < cantp; i++){
        cout << "Ingrese el ID: ";
        cin >> productos[i].id;
        cout << "Ingrese el nombre: ";
        cin >> productos[i].nombre;
        cout << "Ingrese la descripcion: ";
        cin >> productos[i].desc;
        cout << "Ingrese el precio: ";
        cin >> productos[i].precio;
    }
    cout << "\n\n\n";
    cout << "Mostrar categorias\n";
    cout << "=============================\n";
    for(int i = 0; i < cantp; i++){
        cout << "ID: " << productos[i].id << endl;
        cout << "Nombre: " << productos[i].nombre << endl;
        cout << "Descripcion: " << productos[i].desc << endl;
        cout << "Precio: " << productos[i].precio << endl;
        cout << "=============================\n";
    }
    
    return 0;
}
