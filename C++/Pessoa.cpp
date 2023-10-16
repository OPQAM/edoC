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