#pragma once

#include"Ponto.h"

class Circulo : public Ponto {
private:

	double raio;
	double area;

	double getAreaCirculo();
	double getDistanciaCentros(const Circulo& outroCirculo); //takes another circle as parameter
	double getPerimetroCirculo();


public:
	Circulo(); // default constructor.
	Circulo(double x, double y, double raio); //Parameterized constructor.
	double calcularArea(); // this exists because the getAreaCirculo is private
	double calcularDistancia(const Circulo& outroCirculo); // same
	double calcularPerimetro();
	double getRaio();
	string getNome() const; // const to make the name unchangeable - a constant

	// Mais interessante que a pergunta, que pede dois circulos de raio 5...:
	bool calcularSomaPerimetros(Circulo& outroCirculo);
	void imprimirAreaMaior(Circulo& outroCirculo);
	void setNome(const string& newName);

	//setter methods - adding new values for x, y and radius. Check added for fun (bool)
	bool setRaio(double newRaio);

	//Writing out the current Circle:
	string toStringCirculo();
};



/*Nota aparte:

double areaMaior = area1 >= area2 ? area1 : area2
IF area1 >= area2, then area1. Else: area2.


Ctrl + K + F - indentação
*/