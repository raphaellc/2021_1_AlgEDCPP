#include "No.h"

No::No()
{
	_proximo = nullptr;
	_dado = nullptr;
}

No::~No()
{
}

void No::defineProximo(No* prox_no)
{
}

void No::defineDado(Pessoa* p)
{
}

Pessoa* No::obtemDado() 
{
	return _dado;
}

No* obtemProximo(){
	return _proximo;
}