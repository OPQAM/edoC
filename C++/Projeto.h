#pragma once

#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<ctime>
#include<random>
#include<chrono>

using namespace std;

class Projeto {

private:

	static int counter; //contadores do tamanho das respetivas matrizes (n�mero de linhas)
	static int clientCounter;
	static int relatorioPCounter;
	static int relatorioCCounter;
	static int numeroFatura;

public:
	static void callStock(string** stockMatrix);
	static void callCliente(string** clientes);
	static void callVenda(string** venda, string** stockMatrix, string** clientes, string** relatorioP, string** relatorioC);
	static void callRelatorio(string** relatorioP, string** relatorioC, string** stockMatrix, string** clientes, string** venda);
	static mt19937 rng; // gerador de numero aleat�rio
	static int generateRandomNumber(); // idem
	static string printCurrentDateTime();
};

