#include <iostream>
#include"Agenda.h"

int main()
{
	Agenda ag;

	ag.armazenaPessoa("Blah", 20, 130);
	ag.armazenaPessoa("xpto", 30, 160);
	ag.armazenaPessoa("Lala", 40, 170);

	int pos = ag.buscaPessoa("Blah");
	if (pos > 0) 
		cout << endl << "Pessoa na posicao: " << pos << endl;
	else 
		cout << "Pessoa nao encontrada" << endl;

	ag.imprimePessoa(pos);



	ag.imprimePovo();

}