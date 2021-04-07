#include "ObjetoDoJogo.h"

ObjetoDoJogo::ObjetoDoJogo()
{
}

ObjetoDoJogo::~ObjetoDoJogo()
{
	_x = 0;
	_y = 0;
}

void ObjetoDoJogo::inicializar()
{
	_x = 10;
	_y = 100;
}

void ObjetoDoJogo::atualizar()
{
	_x++;
	_y++;
}

void ObjetoDoJogo::desenhar()
{
	std::cout << "x = " << _x << "y = " << _y << std::endl;
}

void ObjetoDoJogo::defineX(int x)
{
	_x = x;
}

void ObjetoDoJogo::defineY(int y)
{
	_y = y;
}
