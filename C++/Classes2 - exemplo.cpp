// Exemplo parcial, com:

// 1. Source (main function)

// 2. Matrizes.cpp

// 3. Matrizes.h

// Serve como exemplo e é parte apenas de um exercício:


////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Source


#include "Matrizes.h"




int main()
{
    int linhas;
    int colunas;
    cout << "Indique o numero de linhas e colunas da matriz:  \n";
    cin >> linhas >> colunas;

    // Inicialização de Matriz

    cout << endl << "Introduza os valores da matriz: \n";
    int** matriz = new int* [linhas];
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = new int[colunas];
    }
    Matriz::lerMatriz(matriz, linhas, colunas);
    Matriz::mostrarMatriz(matriz, linhas, colunas);
    Matriz::mainDiag(matriz, linhas, colunas);
    // Atenção - Fazer quadrado!!! Falta
    Matriz::verificaI(matriz, linhas, colunas);

}


////////////////////////////////////////////////////////////////////////////////////////////////

// 2. Matrizes.cpp


#include "Matrizes.h"






void Matriz::lerMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " ";
            cin >> matriz[i][j];
        }
    }
}

void Matriz::mostrarMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++)
    {
        cout << "\n";
        for (int j = 0; j < colunas; j++)
        {
            cout << matriz[i][j];
            cout << " ";
            cout << "\t";
        }
    }
    cout << endl;
}

void Matriz::mainDiag(int** matriz, int linhas, int colunas) {
    cout << endl;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == j) {
                cout << matriz[i][j];
                cout << " ";
            }
        }
    }
    cout << endl;
}

void Matriz::verificaI(int** matriz, int linhas, int colunas) {
    cout << endl;
    int truthCounter = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == j && matriz[i][j] != 1) {
                truthCounter++;
            }
            else {
                if (i != j && matriz[i][j] != 0)
                {
                    truthCounter++;
                }
            }
        }
    }
    if (truthCounter == 0 && linhas == colunas) {
        cout << endl << " Matriz Identidade.\n";
    }
    else {
        cout << endl << "Nao e a matriz identidade.\n";
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////

// 3. MAtrizes.h

#include<iostream>
using namespace std;

class Matriz {

private:

public:

	static void lerMatriz(int** matriz, int linhas, int colunas);
	static void mostrarMatriz(int** matriz, int linhas, int colunas);
	static void mainDiag(int** matriz, int linhas, int colunas);
	static void verificaI(int** matriz, int linhas, int colunas);


};


////////////////////////////////////////////////////////////////////////////////////////////////

