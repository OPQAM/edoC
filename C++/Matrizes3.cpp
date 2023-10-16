// Multiplicação de Matrizes

#include <iostream>

using namespace std;

int main()
{
    int la, ca, cb;

    cout << "Multiplicacao de 2 matrizes\n";

    cout << "\nInserir linhas e colunas da matriz A: \n";
    cin >> la >> ca;

    int lb = ca;

    cout << "\nPara que a multiplicacao seja possivel, a matriz B tem que ter " << ca << " linhas."
        "introduza o numero de colunas da matriz B: \n";
    cin >> cb;

    cout << "\nA matriz-produto (Matriz C) tera " << la << " linhas e " << cb << " colunas.\n";

    // inicializacao das 3 matrizes: A, B, C

    int** matA = new int* [la];

    for (int i = 0; i < la; i++)
    {
        matA[i] = new int[ca];
    }

    // inicializacao de B

    int** matB = new int* [lb];

    for (int j = 0; j < lb; j++)
    {
        matB[j] = new int[cb];
    }

    // inicializacao de C

    int** matC = new int* [la];

    for (int k = 0; k < la; k++)
    {
        matC[k] = new int[cb];
    }

    // Introducao de valores

    cout << "\nIntroduza os valores da matriz A: \n";


    for (int i = 0; i < la; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            cout << " ";
            cin >> matA[i][j];
        }
    }

    cout << "\n Introduza os valores da matriz B: \n";

    for (int i = 0; i < lb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            cout << " ";
            cin >> matB[i][j];
        }
    }

    // A matriz-produto

    for (int i = 0; i < la; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            matC[i][j] = 0;
            for (int k = 0; k < ca; k++)
            {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    // Impressão

    cout << "\nMATRIZ A\n";
    for (int i = 0; i < la; i++)
    {
        cout << "\n";
        for (int j = 0; j < ca; j++)
        {
            cout << " " << matA[i][j];
        }
    }
    cout << "\n\nMATRIZ B\n";
    for (int i = 0; i < lb; i++)
    {
        cout << "\n";
        for (int j = 0; j < cb; j++)
        {
            cout << " " << matB[i][j];
        }
    }

    cout << "\n\nMatriz C (produto):\n";
        for (int i = 0; i < la; i++)
        {
            cout << "\n";
            for (int j = 0; j < cb; j++)
            {
                cout << " " << matC[i][j];
            }
        }
}