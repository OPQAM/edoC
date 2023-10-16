#pragma once

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class Retangulo {
private:
	double Largura;
	double Comprimento;
	string Cor;

public:
	Retangulo();
	Retangulo(double Largura, double Comprimento, string Cor);

	double getLargura();
	double getComprimento();
	string getCor();

	void setLargura(double newLargura);
	void setComprimento(double newComprimento);
	void setCor(string newCor);

	double Perimetro();
	double Area();
	void CheckArea(double testValue);

	string toString();
};