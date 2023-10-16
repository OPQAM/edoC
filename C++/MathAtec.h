#pragma once

#include<iostream>
#include<random>
#include<chrono>
#include<ctime>

using namespace std;



/* Aparte: Respostas ao Grupo I

a. Falso. Um ponteiro pode armazenar vários valores. Por exemplo, num array.
b. Falso. New cria ponteiros, como arrays de uma ou duas dimensões
c. Verdadeiro
d. Verdadeiro

*/


class MathAtec {
private:
	int x;
	int y;
	int linhas;
	int colunas;
	int** MatrizA = new int* [linhas];
	int contagem;
	int minimo;
	int maximo;
	int tempur = 0;

public:
	static mt19937 rng;
	int getX();
	int getY();
	int getLinhas();
	int getColunas();
	int getMin();
	int getMax();

	void setX(int newX);
	void setY(int newY);
	void setColunas(int newColunas);
	void setLinhas(int newLinhas);
	void setMax(int newMax);
	void setMin(int newMin);

	int Soma(int x, int y);
	int Modulo(int x);
	void SomaMatriz(int** MatrizA, int linhas, int colunas);
	void MinMaxChecker(int minimo, int maximo);
	int gerarNumero(int minimo, int maximo);
};