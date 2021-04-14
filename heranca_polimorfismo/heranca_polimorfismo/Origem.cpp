#include <iostream>
#include "ObjetoDoJogo.h"
#include "Jornal.h"
#include "Pagina.h"
int main() {

	/*ObjetoDoJogo* oj = new ObjetoDoJogo();
	oj->inicializar();
	oj->desenhar();
	oj->atualizar();
	oj->desenhar();*/

	Jornal* journal = new Jornal();
	journal->inicializar();
	journal->desenhar();
	journal->atualizar();
	journal->desenhar();
	
	
	ObjetoDoJogo* oj1 = journal;
	oj1->inicializar();
	oj1->desenhar();
	oj1->atualizar();
	oj1->desenhar();
	
	system("pause");
	return 0;
}