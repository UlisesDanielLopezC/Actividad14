#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
#include<iomanip>

using namespace std;

class Computadora{

    string sistemaop;
    string procesador;
    int RAM;
    string espacio;

public:
    Computadora();
    Computadora(const string &sistemaop,
                const string &procesador,
                int RAM, const string &espacio);

    void setSistema(const string &sistemaop);
    string getSistema();

    void setProcesador(const string &procesador);
    string getProcesador();

    void setRAM(int RAM);
    int getRAM();

    void setEspacio(const string &espacio);
    string getEspacio();

    friend ostream& operator<<(ostream &out, const Computadora &c){

        out << left;
        out << setw(13) << c.sistemaop;
        out << setw(16) << c.procesador;
        out << setw(12) << c.RAM;
        out << setw(8) << c.espacio;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c){

        cout << "Sistema Operativo: ";
        getline(cin, c.sistemaop);
        
        cout << "Procesador: ";
        getline(cin, c.procesador);

        cout << "RAM (GB): ";
        cin >> c.RAM; cin.ignore();

        cout << "Espacio: ";
        getline(cin, c.espacio);

        cout << endl;

        return in;
    }

    bool operator==(const Computadora& c){

        return sistemaop == c.sistemaop;
    }

    bool operator==(const Computadora& c) const{

        return sistemaop == c.sistemaop;
    }

};

#endif