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
	Pessoa* obtemDado(); 
private:
	//Atributos
	No* _proximo; //->
	Pessoa* _dado; 
};

