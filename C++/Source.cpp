#include "Vetor.h"

int main()
{
    int tam = 10;
    cout << "vetor 1\n";
    int* v = new int[tam];
    Vetor::lerVetor(v, tam);
    Vetor::mostrarVetor(v, tam);
    cout << endl << "vetor 2\n";
    int* v1 = new int[tam];
    Vetor::lerVetor(v1, tam);
    Vetor::mostrarVetor(v1, tam);
    cout << endl << "Media do vetor 1: " << Vetor::mediaVetor(v, tam);
    cout << endl << "Media do vetor 2: " << Vetor::mediaVetor(v1, tam);
    // cout << endl << "Moda do vetor 1: " << Vetor::modaVetor(v, tam);
    // cout << endl << "Moda do vetor 2: " << Vetor::modaVetor(v1, tam);
    Vetor::modaVetor(v, tam);
    cout << endl << "\nOrdenar: \n";
    Vetor::ordenarVetor(v, tam);

} 