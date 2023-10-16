// testeProgramacao.cpp



// Respostas Grupo I:

// 1.a
// 2.a
// 3.a
// 4.a

#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
   
    int counter = 0, aux = 0;
    // 1. Criacao de cartao de bingo


    // inicialização de uma matriz

    int** mat1 = new int* [5];

    for (int i = 0; i < 5; i++)
    {
        mat1[i] = new int[5];
    }

    while (aux != -1) {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 2 && j == 2) {
                    mat1[i][j] = -1;
                }
                else {
                    mat1[i][j] = rand() % 99 + 1;
                }
            }
        }

        // Validação do cartão


        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                for (int k = 0; k < 5; k++)
                {
                    for (int l = 0; l < 5; l++)
                    {
                        if (mat1[i][j] == -1)
                        {
                            continue;
                        }
                        else {
                            if ((mat1[i][j] == mat1[k][l]) && (i != k || j != l)) {
                                counter += 1;
                                break;
                            }
                        }
                    }
                }
            }
        }

        if (counter > 0) {
            cout << "Cartao invalido (tem pelo menos um numero repetido).\n";
            counter = 0;
        }
        else if (counter == 0) {
            counter = -1;
            break;
        }
    }



    // impressão de matriz

    cout << "\n\nCartao de Bingo\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\n";
        for (int j = 0; j < 5; j++)
        {
            cout << mat1[i][j] << "\t|";
        }
    }

    // reordenação do cartão

    cout << "\n\nCartao reordenado\n\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 && j == 2) {
                continue;
            }
            for (int k = 0; k < 5; k++) {
                for (int l = 0; l < 5; l++) {
                    if (k == 2 && l == 2) {
                        continue;
                    }
                    else {
                        if (mat1[i][j] < mat1[k][l]) {
                            aux = mat1[i][j];
                            mat1[i][j] = mat1[k][l];
                            mat1[k][l] = aux;
                        }
                    }
                }
            }
        }

    }

        // Re-impressão do cartão de bingo ordenado:

    for (int i = 0; i < 5; i++) {
        cout << "\n";
        for (int j = 0; j < 5; j++) {
            cout << mat1[i][j] << "\t|";
        }
    }
    cout << endl;

  
}