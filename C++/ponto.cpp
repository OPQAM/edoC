#include "ponto.h"

// primeiro os construtores

ponto::ponto() {
	//atribuir valores default
	this->x = 0; // this: a variável é da classe
	this->y = 0;
}

ponto::ponto(int x, int y) {
	this->x = x; // a seta diz que o x branco faz parte da classe e o cinzento do parametro
	this->y = y;
}

ponto::ponto(ponto& p) {
	this->x = p.x;
	this->y = p.y;

}

int ponto::getX() { // vai à private buscar os valores que lá estão
	return x;
}

int ponto::getY() {
	return y;
}

void ponto::setX(int x) {
	this->x = x;
}

void ponto::setY(int y) {
	this->y = y;
}

string ponto::toString() {
	return "Ponto : (" + to_string(x) + "," + to_string(y) + ") ";

}