/*
Organização:
1 - Source
2 - .h
3 - .cpp




                                            ---INTRO---
//////////////////////////////////////////////////////////////////////////////////////////////

#include "Vetor.h"

int main()
{
    int tam = 10;
    cout << "vetor 1\n";
    int* v = new int[tam];
    Vetor::lerVetor(v, tam);
    Vetor::mostrarVetor(v, tam);
    cout << "vetor 2\n";
    int* v1 = new int[tam];
    Vetor::lerVetor(v1, tam);
    Vetor::mostrarVetor(v1, tam);
    cout << endl << "Media do vetor 1: " << Vetor::mediaVetor(v, tam);
    cout << endl << "Media do vetor 2: " << Vetor::mediaVetor(v1, tam);

}

//////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include<iostream>
using namespace std;

class Vetor {

private:

public:

    static void lerVetor(int* v, int t);
    static double mediaVetor(int* v, int t);
    static void mostrarVetor(int* v, int t);

};

//////////////////////////////////////////////////////////////////////////////////////////////

#include "Vetor.h"


void Vetor::lerVetor(int* v, int t) {
    for (int i = 0; i < t; i++)
    {
        cout << ": ";
        cin >> v[i];
    }
}

double Vetor::mediaVetor(int* v, int t) {
    double soma = 0, media;
    for (int i = 0; i < t; i++)
    {
        soma += v[i];
    }
    return soma / t;
}



void Vetor::mostrarVetor(int* v, int t) {
    for (int i = 0; i < t; i++)
    {
        cout << v[i] << '\t';
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////
                                    ---END of INTRO---
*/





