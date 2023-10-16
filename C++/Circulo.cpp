#include "Circulo.h"

Circulo::Circulo() : Ponto() {
	raio = 0;
}

Circulo::Circulo(double x, double y, double raio) : Ponto(x, y), raio(raio) {
}

double Circulo::getAreaCirculo() {
	return raio * raio * 3.14159265358979323846;
}

double Circulo::getDistanciaCentros(const Circulo& outroCirculo) {
	double dx = getX() - outroCirculo.getX();
	double dy = getY() - outroCirculo.getY();
	return sqrt(dx * dx + dy * dy);
}

double Circulo::getPerimetroCirculo() {
	return 2 * 3.14159265358979323846 * raio;
}

double Circulo::getRaio() {
	return raio;
}

string Circulo::getNome() const {
	return name;
}

bool Circulo::calcularSomaPerimetros(Circulo& outroCirculo) {
	double perimetro1 = getPerimetroCirculo();
	double perimetro2 = outroCirculo.getPerimetroCirculo();
	double sumPerimetros = perimetro1 + perimetro2;

	if (sumPerimetros <= 2) {
		setRaio(getRaio() + 1);
		outroCirculo.setRaio(outroCirculo.getRaio() + 1); // verificar se isto funciona...
		cout << endl << "Warning: The sum of the perimeters is too small."
			"Adjusting the radii to maintain a sum above 2.";
		return true;

	}
	cout << endl << "The sum of the two perimeters is equal to: " << sumPerimetros << endl;
}

bool Circulo::setRaio(double newRaio) {
	if (newRaio <= 10) {
		raio = newRaio; // works fine
	}
	else {
		cout << endl << "Warning: Cannot set the radius to a value bigger than 10." << endl;
		cout << endl << "The current radius remains unchanged." << endl;
		return false; // Operation not allowed
	}
	
}

string Circulo::toStringCirculo() {
	return "Our circle has center: C(" + to_string(getX()) + 
		"," + to_string(getY()) + "), and radius: " + to_string(raio);
}

void Circulo::imprimirAreaMaior(Circulo& outroCirculo) {
	double area1 = getAreaCirculo();
	double area2 = outroCirculo.getAreaCirculo();

	if (area1 > area2) {
		cout << endl << "Circle " << getNome() << " has the bigger area, with: "
			<< area1 << " units." << endl;
	}
	else if (area2 > area1) {
		cout << endl << "Circle " << outroCirculo.getNome() << " has the bigger area, with: "
			<< area2 << " units." << endl;
	}
	else {
		cout << endl << "Both circles have the same area: " << area1 
			<< " units." << endl;
	}
}

void Circulo::setNome(const string& newName) {
	Ponto::setNome(newName);
}

double Circulo::calcularArea() {
	return getAreaCirculo();
}

double Circulo::calcularDistancia(const Circulo& outroCirculo) {
	return getDistanciaCentros(outroCirculo);
}

double Circulo::calcularPerimetro() {
	return getPerimetroCirculo();
}