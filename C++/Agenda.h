#pragma once

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
	string nome;
	int idade;
	double altura;

public:
	//construtores com 0 ou mais parametros
	Pessoa();
	Pessoa(string nome, int idade, double altura);
	Pessoa(Pessoa& p); //por c�pia - recebe o endere�o da vari�vel p
	//get e um set (um por atributo)
	string getNome();
	int getIdade();
	double getAltura();
	//modificadores - recebem parametro e alteram. N�o retornam nada
	void setNome(string nome);
	bool setIdade(int idade);
	void setAltura(double altura);
	//outras fun��es
	string toString(); //n�o recebe nada, devolve string

};

class Agenda {

private:
	Pessoa povo[10];
	int index = 0; // posi��o na agenda


public:
	void armazenaPessoa(string nome, int idade, double altura);
	int buscaPessoa(string nome);
	void imprimePovo();
	void imprimePessoa(int i);
};