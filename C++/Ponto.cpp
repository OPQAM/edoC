#include"Ponto.h"



double Ponto::getDistanciaPontos(const Ponto& outroPonto) {
	double dx = x - outroPonto.x;
	double dy = y - outroPonto.y;
	return sqrt(dx * dx + dy * dy);
}

Ponto::Ponto() {
	x = 0;    // alternatively this->x = 0;
	y = 0;
	name.clear();
}

Ponto::Ponto(double x, double y) {
	this->x = x;
	this->y = y;
}

double Ponto::getX() const {
	return x;
}

double Ponto::getY() const{
	return y;
}

string Ponto::getNome() const {
	return name;
}

double Ponto::calcularDistancia(const Ponto& outroPonto) {
	return getDistanciaPontos(outroPonto);
}

//this would be called with: c3.calcularDistanciaCoordenadas(5,-7), as an example;
double Ponto::calcularDistanciaCoordenadas(double newX, double newY) const {
	double distX = x - newX;
	double distY = y - newY;
	return sqrt(distX * distX + distY * distY);
}

void Ponto::setX(double newX) {
	this->x = newX;
}

void Ponto::setY(double newY) {
	this->y = newY;
}

void Ponto::setNome(const string& newName) {
	name = newName;
}

string Ponto::toStringPonto() {
	return ""Our point has coordinates : P(" + to_string(x) +
		"," + to_string(y) + ")";
}