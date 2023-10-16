#include "ponto.h"

int main()
{
	ponto p; // a chamar o construtor simples
	cout << p.toString();
	
	ponto p1(4, 6); // criamos novo ponto 'p1', com parametros que definimos
	cout << p1.toString(); // e pedimos para imprimir
	
	ponto p2(p1); // o parametro de p2 é p1 (por cópia)
	cout << p2.toString();
	// se fizesse p2 = p, significava que alterar um alterava o outro
	
	p.setX(40);
	cout << p.toString();

	cout << endl << p.getY();
}