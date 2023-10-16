#pragma once


#include<iostream>
#include<string>
#include<random>
#include<chrono>
#include<ctime>

using namespace std;


class Chave {

private:

public:

	static int* gerarChaveAleatoria(int* &ch);
	static int* lerChave(int* ch);
	static void imprimirChave(int n, int* ch);
	static int verifPremio(int* ch1, int* ch2);
	static mt19937 rng;
	static int generateRandomNumber();
};