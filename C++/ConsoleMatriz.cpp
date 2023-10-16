#include "Matrizes.h"




int main()
{
    int linhas;
    int colunas;
    cout << "Indique o numero de linhas e colunas da matriz:  \n";
    cin >> linhas >> colunas;
    int tamanho = 0;
    if (linhas > colunas) { // determinar o tamanho do vetor diagonal
        tamanho = colunas;
    }
    else {
        tamanho = linhas;
    }

    // Inicialização de Matriz

    cout << endl << "Introduza os valores da matriz: \n";
    int** matriz = new int* [linhas];
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = new int[colunas];
    }
    
    // Inicialização de vetor diagonal

    int* vecDiag = new int[tamanho];

   
    Matriz::lerMatriz(matriz, linhas, colunas); // escreve matriz
    Matriz::mostrarMatriz(matriz, linhas, colunas); // apresenta matriz
    Matriz::mainDiag(matriz, linhas, colunas, vecDiag, tamanho); // apresenta diagonal
    Matriz::verificaQuad(matriz, linhas, colunas); // verifica quadrada
    Matriz::verificaI(matriz, linhas, colunas); // verifica Identidade
    Matriz::verificaTS(matriz, linhas, colunas); // verifica Triangular Superior
    Matriz::detetaMaiorMenor(matriz, linhas, colunas);

}