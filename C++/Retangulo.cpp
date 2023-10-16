#include"Retangulo.h"


Retangulo::Retangulo() {
	Largura = 0;
	Comprimento = 0;
	Cor = "Preta";
}

Retangulo::Retangulo(double Largura, double Comprimento, string Cor) {
	this->Largura = Largura;
	this->Comprimento = Comprimento;
	this->Cor = Cor;
}
//gets
double Retangulo::getLargura() {
	return Largura;
}

double Retangulo::getComprimento() {
	return Comprimento;
}

string Retangulo::getCor() {
	return Cor;
}
//sets

void Retangulo::setLargura(double newLargura) {
	if (newLargura >= 5 && newLargura <= 20) {
		this->Largura = newLargura;
	}
	else if (newLargura > 20) {
		this->Largura = 20;
	}
	else {
		this->Largura = 5;
	}
}

void Retangulo::setComprimento(double newComprimento) {
	if (newComprimento >= 10 && newComprimento <= 40) {
		this->Comprimento = newComprimento;
	}
	else if (newComprimento > 40) {
		this->Comprimento = 40;
	}
	else {
		this->Comprimento = 10;
	}
}

void Retangulo::setCor(string newCor) {
	this->Cor = newCor;
}

double Retangulo::Perimetro() {
	return 2 * (Largura + Comprimento);
}

double Retangulo::Area() {
	return Largura * Comprimento;
}

void Retangulo::CheckArea(double testValue) {
	if (testValue > Area()) {
		cout << endl << "O valor de teste e superior a Area.";
	}
	else if (testValue < Area()) {
		cout << endl << "O valor de teste e inferior a Area.";
	}
	else {
		cout << endl << "O valor de teste e igual a Area.";
	}

}

string Retangulo::toString() {
	return "Retangulo " + Cor + " com largura de " + to_string(Largura) + " unidades, e comprimento de " + to_string(Comprimento) + "unidades.";
}