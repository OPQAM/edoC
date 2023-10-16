///// AGENDA ET AL ////////

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
	Pessoa(Pessoa& p); //por cópia - recebe o endereço da variável p
//get e um set (um por atributo)
	string getNome();
	int getIdade();
	double getAltura();
	//modificadores - recebem parametro e alteram. Não retornam nada
	void setNome(string nome);
	bool setIdade(int idade);
	void setAltura(double altura);
	//outras funções
	string toString(); //não recebe nada, devolve string

};
//--snip--agenda--//
#pragma once
#include"Pessoa.h"

class Agenda {
private:
	Pessoa povo[10];
	int index = 0; // posição na agenda

public:
	void armazenaPessoa(string nome, int idade, double altura);
	int buscaPessoa(string nome);
	void imprimePovo();
	void imprimePessoa(int i);
};
//--snip--Pessoa & Agenda--//
#include"Pessoa.h"

//implementar construtor pessoa (default)
Pessoa::Pessoa() {
	nome = "N/A";
	idade = 0;
	altura = 0.0;
}

Pessoa::Pessoa(string nome, int idade, double altura) {
	this->nome = nome; // 'o nome da estrutura é o nome que eu enviar'
	if (!Pessoa::setIdade(idade)) { //adicionei Pessoa::
		this->idade = 0;
		cout << "idade invalida.\n";
	}
	this->altura = altura;
}

Pessoa::Pessoa(Pessoa& p) {
	this->nome = p.nome;
	this->idade = p.idade;
	this->altura = p.altura;
}

// gets
string Pessoa::getNome() {
	return nome;
}

int Pessoa::getIdade() {
	return idade;
}

double Pessoa::getAltura() {
	return altura;
}

// sets
void Pessoa::setNome(string n) {
	nome = n;
}

bool Pessoa::setIdade(int idade) {
	if (idade >= 18) {
		this->idade = idade;
		return true;
	} return false;
}

void Pessoa::setAltura(double a) {
	altura = a;

}

// outras funções
string Pessoa::toString() {
	return "Pessoa: " + nome + ", idade: " + to_string(idade) + ", altura: " + to_string(altura);
}
/////////////
#include"Agenda.h"

void Agenda::armazenaPessoa(string nome, int idade, double altura) {
	// adicionar pessoa criada à agenda
	Pessoa p(nome, idade, altura);
	povo[index++] = p;
}

void Agenda::imprimePovo() {
	for (int i = 0; i < 10; i++)
	{
		cout << endl << "Pessoa: " << i + 1;
		cout << endl << "Nome: " << povo[i].getNome();
		cout << endl << "Idade: " << povo[i].getIdade();
		cout << endl << "altura: " << povo[i].getAltura();
		cout << endl << endl;
	}
}

int Agenda::buscaPessoa(string nome) {
	for (int i = 0; i < index; i++)
	{
		if (povo[i].getNome() == nome) {
			return i + 1; // index + 1 para ter posição
		}
	}
	return -1; // caso não encontre, retorna -1
}

void Agenda::imprimePessoa(int i) {
	cout << "Pessoa: " << i;
	cout << endl << "Nome: " << povo[i - 1].getNome();
	cout << endl << "Idade: " << povo[i - 1].getIdade();
	cout << endl << "Altura: " << povo[i - 1].getAltura();
	cout << endl << endl;
}
//--snip--Main--//
#include <iostream>
#include"Agenda.h"

int main()
{
	Agenda ag;

	ag.armazenaPessoa("Blah", 20, 130);
	ag.armazenaPessoa("xpto", 30, 160);
	ag.armazenaPessoa("Lala", 40, 170);

	int pos = ag.buscaPessoa("Blah");
	if (pos > 0)
		cout << endl << "Pessoa na posicao: " << pos << endl;
	else
		cout << "Pessoa nao encontrada" << endl;

	ag.imprimePessoa(pos);



	ag.imprimePovo();

}