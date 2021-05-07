#pragma once
#include "Pessoa.h"
class No
{
public:
	//Metodos
	No();
	~No();
	void defineProximo(No* prox_no);
	void defineDado(Pessoa* p); 
	No* obtemProximo();
	No* obtemAnterior();
	void defineAnterior(No* no_ant);
	Pessoa* obtemDado(); 
private:
	//Atributos
	No* _proximo, *_anterior; //  nullptr<-[Nó]-><-[Nó]->nullptr
	Pessoa* _dado; 
};

