// Matrizes.h

// 1.º passo

#pragma once

#include<iostream>
using namespace std;

class Matrizes {

public:
	static void lerMatriz(int** m, int l, int c);
	static void mostrarMatriz(int** m, int l, int c);
	static int* diagonalPrincipal(int** m, int l, int c); // para devolver um vetor, como pedido no exe
	static bool quadrada(int** m, int l, int c);
	static bool identidade(int** m, int l, int c);
	static bool trianguloSuperior(int** m, int l, int c);
	static int maior(int** m, int l, int c);
	static int menor(int** m, int l, int c);

};

// Matrizes.cpp

// 2.º passo

#include "Matrizes.h"

void Matrizes::lerMatriz(int** m, int l, int c) {
	cout << "Inserir elementos da matriz" << endl;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			cout << ": ";
			cin >> m[i][j];
		}
	}
 }

void Matrizes::mostrarMatriz(int** m, int l, int c) {
	cout << "MATRIZ: " << endl;
	// COUT ciclo for para mostrar a matriz  (re-fazer isto tudo novamente)
};


 int* Matrizes::diagonalPrincipal(int** m, int l, int c); // para devolver um vetor, como pedido no exe
 bool Matrizes::quadrada(int** m, int l, int c);
 bool Matrizes::identidade(int** m, int l, int c);
 bool Matrizes::trianguloSuperior(int** m, int l, int c);
 int Matrizes::maior(int** m, int l, int c);
 int Matrizes::menor(int** m, int l, int c);


 // Console App - o ficheiro main.cpp:

 // 3.º - preencher e testar a ver se corre

#include "Matrizes.h"

 int main()
 {
	 int linhas, colunas;
	 cout << "Inserir o numero de linhas e dolunas: ";
	 cin >> linhas >> colunas;
	 int** matriz = new int* [linhas];
	 for (int i = 0; i < linhas; i++) 
	 {
		 matriz[i] = new int[colunas];
	 }

	 Matrizes::lerMatriz(matriz, linhas, colunas);
	 Matrizes::mostrarMatriz(matriz, linhas, colunas);

 }


 // Nota: verificação de matriz quadrada versão prof:

 bool Matrizes::quadrada(int l, int c) {
	 return l == c;
 }

 ////////////////////////////////////////////////////////
 // PROF A SEPARAR A IDEIA DE IMPRIMIR COM VERIFICAR:  //
 // O RETURN TEM, PORTANTO QUE NÃO SER MERA IMPRESSÃO. //
 // 1 FUNÇÃO, 1 RESPONSABILIDADE                       //
 ////////////////////////////////////////////////////////

 // main:

 if (Matrizes::quadrada(linhas, colunas)) {
	 cout << "Matriz Quadrada.";
 } else
 {
	 cout << "Matriz nao Quadrada.";

 }

 /////////////////////////////////////////////////////////


 // Exemplo do prof para matriz identidade (falta verificar se é quadrada)

 bool Matrizes::identidade(int** m, int l, int c) {
	 // etc...
	 // AQUI - teste quadrada (ver abaixo)
	 ...
	 //return false;
	 ...
	 //return false;
...
	 //tudo correto:
	//return true;
 }

 // E no main.cpp:

 if (Matrizes::identidade(linhas, colunas)) {
	 cout << "Matriz Identidade.";
 }
 else
 {
	 cout << "Matriz nao Identitaria.";

 }

 // ele usa a função que deteta se é quadrada!

 em .cpp:

 if (!quadrada(l, c)) { // basta isto - qudrada(x,y), porque estamos no mesmo ficheiro... Melhor fazer: if (!Matrizes::quadrada(l,c)) {...
	 return false; // isto fica dentro do teste para a Identidade, logo no topo, dentro do if
 }

 // Mais notas relevantes: triangular superior.

 //Main.cpp:
 if (Matrizes::trianguloSup(matriz, linhas, colunas)) {
	 cout << endl << "Matriz triangulo sup.";
 }
 else {
	 cout << // nao e... etc
 }


//.cpp:

 tentar com um while......

	 ele dois fors
	 e antes tem a verificação de quadrada


	 for....
	 {
		 e if (m[i][j] != )
			 return false;
	 }