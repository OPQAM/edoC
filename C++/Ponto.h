#pragma once

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class Ponto {
protected:
	double x, y;
	string name; //naming the objects, because wtf not?
	
private:
	double getDistanciaPontos(const Ponto& outroPonto);

public:
	Ponto();
	Ponto(double x, double y);
	double getX();
	double getY();

	string getNome() const;
	double calcularDistancia(const Ponto& outroPonto);
	//dado um ponto e coordenadas de outro (introduzir quais):
	double calcularDistanciaCoordenadas(double newX, double newY) const;
	
	void setX(double newX);
	void setY(double newY);
	void setNome(const string& newName);

	string toStringPonto(); //imprime - make it unique to this class?
};