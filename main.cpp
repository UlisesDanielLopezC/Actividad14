#include<iostream>
#include "arreglodinamico.h"
#include "computadora.h"

using namespace std;

int main(){

    ArregloDinamico<Computadora> arreglo;

    // agregar 5 computadoras, de las cuales 3 deben tener 
    // algún atributo (yo elegi sistema operativo) con la misma información, el cual
    // servirá para hacer la comparación en la búsqueda lineal
    Computadora c1{"Windows", "Intel Core i7", 16, "512 GB"};
    Computadora c2{"MacOS", "AMD Ryzen 3", 8, "128 GB"};
    Computadora c3{"Windows", "Intel X Series", 4, "256 GB"};
    Computadora c4{"Windows", "AMD Ryzen PRO", 32, "128 GB"};
    Computadora c5{"Linux", "Intel Core i3", 16, "1024 GB"};

    arreglo << c1 << c2 << c3 << c4 << c5;

    Computadora c6{"Unix", "AMD Ryzen 7", 16, "256 GB"};

    // buscar() una computadora existente y no existente
    Computadora *ptr1 = arreglo.buscar(c6);
    Computadora *ptr2 = arreglo.buscar(c4);

    // mostrar la computadora retornada por el método buscar()
    cout <<"Muestra retornada por el metodo buscar() 1:"<<endl;
    if(ptr1 != nullptr){
        cout << *ptr1 << endl;
    }else{
        cout <<"No existe." <<endl;
    }
    cout <<"Muestra retornada por el metodo buscar() 2:"<<endl;
    if(ptr2 != nullptr){
        cout << *ptr2 << endl;
    }else{
        cout <<"No existe." <<endl;
    }
    
    // buscar_todas() las computadoras usando un objeto
    // de tipo computadora definido previamente
    ArregloDinamico<Computadora*> ptrs = arreglo.buscar_todos(c3);

    // mostrar los elementos del Arreglo<Computadora*> retornado
    // por buscar_todos()
    cout <<"Muestra retornada por el metodo buscar_todos():"<<endl;
    if(ptrs.size() > 0){
        for(size_t i=0; i<ptrs.size(); i++){
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    }else{
        cout<< "No existen coincidencias" <<endl;
    }
    
    // Practicamente son las pruebas que se realizaron con
    // Arreglo<Personaje>

    return 0;
}