//HEADER - VETORES E MATRIZES//
#pragma once
#include<iostream>
using namespace std;

class Vetor {

private:

public:

    static void lerVetor(int* v, int t);
    static double mediaVetor(int* v, int t);
    static void mostrarVetor(int* v, int t);
    static void modaVetor(int* v, int t);
    static void ordenarVetor(int* v, int t);

};

//CPP//
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

void Vetor::ordenarVetor(int* v, int e) {
    int temporario = v[0]; // ordenar

    for (int i = 0; i < e - 1; i++)
    {
        for (int j = i + 1; j < e; j++)
        {
            if (v[j] < v[i]) {
                temporario = v[i];
                v[i] = v[j];
                v[j] = temporario;
            }
        }
    }

    for (int i = 0; i < e; i++) { // imprimir
        cout << " " << v[i];
    }

    // Podemos dar o maior:

    cout << endl << "Maior elemento do vetor: " << v[9];

    // E o menor:

    cout << endl << "Menor elemento do vetor: " << v[0];

}

void Vetor::modaVetor(int* v, int t) {
    int contagem = 1;
    int maiorContagem = 1;

    int** matModa = new int* [t];

    for (int i = 0; i < t; i++)
    {
        matModa[i] = new int[2];
    }

    for (int i = 0; i < t - 1; i++)
    {
        matModa[i][0] = v[0];
        matModa[i][1] = 1;
        matModa[9][0] = v[9];
        matModa[9][1] = 1;
        for (int j = i + 1; j < t; j++)
        {
            if (v[i] == v[j]) {
                contagem++;
                matModa[i][0] = v[i];
                matModa[i][1] = contagem;
                if (contagem > maiorContagem) {
                    maiorContagem = contagem;
                }
            }
        }

        contagem = 1;
    }


    // e da matriz:
    cout << endl << "\nMATRIZ\n";
    for (int i = 0; i < t; i++)
    {
        cout << "\n";
        for (int j = 0; j < 2; j++)
        {
            cout << " " << matModa[i][j];
        }
    }

    // Percorrer a matriz e escrever os maiores valores:

    cout << endl << "\nModa: " << endl;
    for (int i = 0; i < t; i++)
    {
        if (matModa[i][1] == maiorContagem) {
            cout << matModa[i][0] << " ";
        }
    }
}    
     
//// MAIN ////
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

////////////////////////////////////
//////////MATRIZES/////////////////
////////////////////////////////////


// Exemplo da aula anterior:

// O tpc que eu enviei: (alterar para nomes -> seguindo prof + ou -)
/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int nFuncionarios;


    cout << "Quantos funcionarios quer introduzir no sistema?\n";
    cin >> nFuncionarios;

    string** mat = new string * [nFuncionarios];

    for (int i = 0; i < nFuncionarios; i++)
    {
        mat[i] = new string[3];
    }

    for (int i = 0; i < nFuncionarios; i++)
    {
        cout << "ID do funcionario: " << i + 1 << ": ";
        cin >> mat[i][0];
        cout << "Nome do funcionario: " << i + 1 << ": ";
        cin >> mat[i][1];
        cout << "Salario do funcionario: " << i + 1 << ": ";
        cin >> mat[i][2];
    }

    for (int i = 0; i < nFuncionarios; i++)
    {
        if (stoi(mat[i][2]) > 1000) {
            cout << "ID: " << mat[i][0] << "  ";
            cout << "Nome: " << mat[i][1] << "  ";
            cout << "Salario: " << mat[i][2] << "  ";
        }
    }
}


*/

/*
int main() {

    int linhas = 3, colunas = 3;

    //criação das matrizes

    int** mat1 = new int* [linhas];
    for (int i = 0; i < linhas; i++)
    {
        mat1[i] = new int[colunas];
    }
    int** mat2 = new int* [linhas];
    for (int i = 0; i < linhas; i++)
    {
        mat2[i] = new int[colunas];
    }
    int** mat3 = new int* [linhas];
    for (int i = 0; i < linhas; i++)
    {
        mat3[i] = new int[colunas];
    }

    //preenchimento das matrizes 1 e 2
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Matriz 1 - linha " << i << " e coluna " << j << ": ";
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Matriz 2 - linha " << i << " e coluna " << j << ": ";
            cin >> mat2[i][j];
        }
    }

    //soma das matrizes

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


    //print das matrizes
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << mat3[i][j] << "\t";
        }
        cout << endl;
    }
}
*/


// ff. Dada uma matriz de L linhas e C colunas, indicar se estamos na presença de uma matriz quadrada.
/*
#include<iostream>

using namespace std;

int main() {
    int la, ca;
    cout << "inserir numero de linhas da matriz: " << endl;
    cin >> la;
    cout << "inserir numero de colunas da matriz: " << endl;
    cin >> ca;

    if (la == ca) {
        cout << "Matriz quadrada";
    }
    else {
        cout << "Nao quadrada";
    }
}



// gg. Ler duas matrizes, A e B, de LA e LB linhas e CA e CB colunas,
// respectivamente, e inserir o resultado da soma das matrizes
// A e B numa nova matriz C.
// (já feito em casa)

#include<iostream>

using namespace std;

int main() {
    int la, ca, lb, cb;
    cout << "inserir numero de linhas e colunas da matriz 1: " << endl;
    cin >> la >> ca;
    cout << "inserir numero de linhas e colunas da matriz 2: " << endl;
    cin >> lb >> cb;

    if (la == lb && ca == cb) {
        int** mat1 = new int* [la];
        int** mat2 = new int* [la];
        int** mat3 = new int* [la];
        for (int i = 0; i < la; i++)
        {
            mat1[i] = new int[ca];
            mat2[i] = new int[ca];
            mat3[i] = new int[ca];
        }
        cout << "Matriz 1" << endl;
        for (int i = 0; i < la; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                cout << "- ";
                cin >> mat1[i][j];
            }
        }

        // Imprimir 1:

        for (int i = 0; i < la; i++)
        {
            cout << "\t";
            for (int j = 0; j < ca; j++)
            {
                cout << "\t" << mat1[i][j];
            }
        }

        cout << "Matriz 2" << endl;
        for (int i = 0; i < la; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                cout << "- ";
                cin >> mat2[i][j];
            }
        }

        // Imprimir 2:

        for (int i = 0; i < la; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                cout << "\t" << mat2[i][j];
            }
        }

        cout << "\t";

        // soma de matrizes

        for (int i = 0; i < la; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }

        }

            // Imprimir 3

        for (int i = 0; i < la; i++)
        {
            for (int j = 0; j < la; j++)
            {
                cout << "\t" << mat3[i][j];
            }
        }
        cout << endl;
    }
    else {
        cout << "Impossivel somar matrizes com dimensoes diferentes. ";
    }
}

// Corrigir isto ^^ Para dar a matriz com boa apresentação.....
*/







// kk. Ler uma matriz de L linhas e C colunas e insira a diagonal principal da matriz num vector.
//i.A diagonal principal começa no elemento[0, 0] e vai até ao elemento[l - 1, c - 1].
/*
#include <iostream>

using namespace std;

int main()
{
    int tamanho, linhas, colunas;



    cout << "Inserir linhas e colunas: \n";
    cin >> linhas >> colunas;

    if (linhas > colunas) {
        tamanho = colunas;
    }
    else {
        tamanho = linhas;
    }
    int* vec = new int[tamanho];

    cout << "\n Introduza os valores da matriz: \n";

    int** mat = new int* [linhas];
    for (int i = 0; i < linhas; i++)
    {
        mat[i] = new int[colunas];
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " ";
            cin >> mat[i][j];
            if (i == j) {
                vec[i] = mat[i][j];
            }
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        cout << "|" << vec[i];
    }


}


// .ll
// ll. Ler uma matriz de L linhas e C colunas e mostrar o centro da matriz.
// i.Uma matriz pode ter 4 tipos de centros.




    NOTA 1:

    #include<iostream>
using namespace std;

int main(){

    int linhas = 3, colunas = 3;

    //criação das matrizes
    int ** mat1 = new int*[linhas];
    for (int i = 0; i < linhas; i++)
    {
        mat1[i] = new int[colunas];
    }
    int ** mat2 = new int*[linhas];
    for (int i = 0; i < linhas; i++)
    {
        mat2[i] = new int[colunas];
    }
    int ** mat3 = new int*[linhas];
    for (int i = 0; i < linhas; i++)
    {
        mat3[i] = new int[colunas];
    }

    //preenchimento das matrizes 1 e 2
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Matriz 1 - linha "<< i << " e coluna "<< j << ": ";
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Matriz 2 - linha "<< i << " e coluna "<< j << ": ";
            cin >> mat2[i][j];
        }
    }

    //soma das matrizes

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


//print das matrizes
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout <<  mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout <<endl;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout <<  mat2[i][j] << "\t";
        }
        cout << endl;
    }
    cout <<endl;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout <<  mat3[i][j] << "\t";
        }
        cout << endl;
    }
}

NOTA 2: vetores

#include<iostream>
using namespace std;

int main(){

    int tam;
    cout << "Inserir o tamanho do vetor: ";
    cin >> tam; //quantidade Posições

    //inicialização
    int *vec = new int[tam];
    //leitura
    for (int i = 0; i < tam; i++)
    {
        cout << "vetor[" << i << "]: ";
        cin >> vec[i];
    }
    //escrita
    for (int i = tam-1; i >= 0; i--) // i-- ~ i= i -1
    {
        cout << " " << vec[i];
    }


}

*/


// NOTA: fazer a multiplicação de duas matrizes.


#include <iostream>

using namespace std;

int main()
{
    int la, ca, cb;

    cout << "Multiplicacao de 2 matrizes";

    cout << "Inserir linhas e colunas da matriz A: \n";
    cin >> la >> ca;

    int lb = ca;

    cout << "Para que a multiplicacao seja possivel, a matriz B tem que ter " << ca << " linhas."
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

    cout << "\n Introduza os valores da matriz A: \n";


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

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            for (in k = 0; k < ca; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Impressão

    cout << "\nMatriz C:\n"
        for (int i = 0; i < la; i++)
        {
            cout << "\t";
            for (int j = 0; j < cb; j++)
            {
                cout << "\t" << matC[i][j];
            }
        }


}


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