#include <iostream>
#include"Agenda.h"

int main()
{
	Agenda agenda;

	agenda.armazenaPessoa("Blah", 20, 130);
	agenda.armazenaPessoa("xpto", 30, 160);
	agenda.armazenaPessoa("Lala", 40, 170);

	int pos = agenda.buscaPessoa("Blah");
	if (pos > 0)
		cout << endl << "Pessoa na posicao: " << pos << endl;
	else
		cout << "Pessoa nao encontrada" << endl;

	agenda.imprimePessoa(pos);



	agenda.imprimePovo();

}