#pragma once
#include <iostream>
class ObjetoDoJogo
{
public:
	virtual void inicializar() = 0;
	virtual void atualizar() = 0;
	virtual void desenhar() = 0;	
	virtual void defineX(int x);
	virtual void defineY(int y);
protected:
	int _x, _y;
};

