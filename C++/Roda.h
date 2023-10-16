#pragma once

#include"Circulo.h"

class Roda : public Circulo {
private:
	string material;
	string aro;
	string fabricante;
	int ano;
	double diameter;

public:

	Roda();
	Roda(string fabricante, string material, string aro, int ano, double diameter);

	string getFabricante();
	string getMaterial();
	string getAro();
	int getAno();
	double getDiameter();

	void setFabricante(string newFabricante);
	void setMaterial(string newMaterial);
	void setAro(string newAro);
	void setAno(int newAno);
	void setDiameter(double newDiameter);

	string toStringRoda();

	double calcularCircunferencia();
};