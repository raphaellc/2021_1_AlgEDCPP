#include "No.h"

No::No()
{
	_proximo = nullptr;
	_anterior = nullptr;
	_dado = nullptr;
}

No::~No()
{
}

void No::defineProximo(No* prox_no)
{
	_proximo = prox_no;
}

void No::defineDado(Pessoa* p)
{
	_dado = p;
}

No* No::obtemProximo()
{
	return _proximo;
}

No* No::obtemAnterior()
{
	return _anterior;
}

void No::defineAnterior(No* no_ant)
{
	_anterior = no_ant;
}

Pessoa* No::obtemDado() 
{
	return _dado;
}

