#include"Agenda.h"

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
