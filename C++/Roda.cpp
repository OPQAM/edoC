#include"Roda.h"

Roda::Roda() {
	fabricante = "N/A";
	material = "N/A";
	aro = "N/A";
	ano = 0;
	diameter = 0.0;
}

Roda::Roda(string fabricante, string material, string aro, int ano, double diameter) {
	this->fabricante = fabricante;
	this->material = material;
	this->aro = aro;
	this->ano = ano;
	this->diameter = diameter;
	// calc the radius based on current diameter:
	double raio = diameter / 2.0;
	setRaio(raio);
}

string Roda::getFabricante() {
	return fabricante;
}

string Roda::getMaterial() {
	return material;
}

string Roda::getAro() {
	return aro;
}

int Roda::getAno() {
	return ano;
}

double Roda::getDiameter() {
	return diameter;
}

void Roda::setFabricante(string newFabricante) {
	this->fabricante = newFabricante;
}

void Roda::setMaterial(string newMaterial) {
	this->material = newMaterial;
}

void Roda::setAro(string newAro) {
	this->aro = newAro;
}

void Roda::setAno(int newAno) {
	this->ano = newAno;
}

double Roda::calcularCircunferencia() {
	return Circulo::calcularPerimetro();
}

string Roda::toStringRoda() {
	return string("\n\nOur wheel has the following characteristics:\n") +
		string("Company: ") + fabricante + "\n" +
		string("Tire rim material: ") + aro + "\n" +
		string("Type of rubber: ") + material + "\n" +
		string("Diameter: ") + std::to_string(diameter) + "\n" +
		string("Year of making: ") + std::to_string(ano) + "\n";
}

void Roda::setDiameter(double newDiameter) {
	this->diameter = newDiameter;
}