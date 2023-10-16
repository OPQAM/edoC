#include "Matrizes.h"


// CORRIGIR (void, int, int* etc). Está tudo em Void -> cada matriz faz apenas 1 coisa, não várias.



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
// Só precisa de 1 ciclo. Alterar (? Sem dois ciclos, não tem j, e não podemos detetar quando i == j.......)

void Matriz::mainDiag(int** matriz, int linhas, int colunas, int* vecDiag, int tamanho) {
    cout << endl << "Diagonal principal:\n";
    cout << endl;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == j) {
                vecDiag[i] = matriz[i][j];
            }
        }
    }
    // apresentar vetor
    for (int i = 0; i < tamanho; i++) {
        cout << vecDiag[i] << " ";
    }
    cout << endl;
}

void Matriz::verificaQuad(int** matriz, int linhas, int colunas) {
    if (linhas == colunas) {
        cout << endl << "A matriz e quadrada.\n";
    }
    else {
        cout << endl << "A matriz nao e quadrada.\n";
    }

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

void Matriz::verificaTS(int** matriz, int linhas, int colunas) {
    bool verificacao = true;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i > j && matriz[i][j] != 0) {
                verificacao = false;
            }
        }
    }
    if (verificacao == true) {
        cout << endl << "A Matriz e triangular superior.\n";
    }
    else {
        cout << endl << "A matriz nao e triangular superior.\n";
    }
}

void Matriz::detetaMaiorMenor(int** matriz, int linhas, int colunas) {
    int menor = matriz[0][0];
    int maior = matriz[0][0];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            else {
                if (matriz[i][j] < menor) {
                    menor = matriz[i][j];
                }
            }
        }
    }
    cout << endl << "O menor valor da matriz e: " << menor << endl;
    cout << endl << "O maior valor da matriz e: " << maior << endl;
}