#pragma once
#include<iostream>
using namespace std;

class Matriz {

private:

public:

	static void lerMatriz(int** matriz, int linhas, int colunas);
	static void mostrarMatriz(int** matriz, int linhas, int colunas);
	static void mainDiag(int** matriz, int linhas, int colunas, int* vecDiag, int tamanho);
	static void verificaQuad(int** matriz, int linhas, int colunas);
	static void verificaI(int** matriz, int linhas, int colunas);
	static void verificaTS(int** matriz, int linhas, int colunas);
	static void detetaMaiorMenor(int** matriz, int linhas, int colunas);


};
