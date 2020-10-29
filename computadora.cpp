#include "computadora.h"

Computadora::Computadora(){

}

Computadora::Computadora(const string &sistemaop,
                        const string &procesador,
                        int RAM, const string &espacio){

                            this->sistemaop = sistemaop;
                            this->procesador = procesador;
                            this->RAM = RAM;
                            this->espacio = espacio;

                        }

void Computadora::setSistema(const string &v){
    sistemaop = v;
}
string Computadora::getSistema(){
    return sistemaop;
}

void Computadora::setProcesador(const string &v){
    procesador = v;
}
string Computadora::getProcesador(){
    return procesador;
}

void Computadora::setRAM(int v){
    RAM = v;
}
int Computadora::getRAM(){
    return RAM;
}

void Computadora::setEspacio(const string &v){
    espacio = v;
}
string Computadora::getEspacio(){
    return espacio;
}