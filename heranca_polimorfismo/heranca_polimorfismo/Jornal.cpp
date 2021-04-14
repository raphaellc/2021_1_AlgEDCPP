#include "Jornal.h"

Jornal::Jornal()
{
	inicializar();
}

Jornal::~Jornal()
{
}

void Jornal::inicializar()
{
	
	_x = 100;
	_y = 100;
}

void Jornal::atualizar()
{
	_x += 2;
	_y += 2;
}

void Jornal::desenhar()
{
	std::cout << "Jornal_x = " << _x << "Jornal_y = " << _y << std::endl;
}
void Jornal::definePagina(Pagina* pg)
{
	_pagina = (ObjetoDoJogo *) pg;
}