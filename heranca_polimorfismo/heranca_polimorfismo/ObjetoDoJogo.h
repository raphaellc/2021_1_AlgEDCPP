#pragma once
#include <iostream>
class ObjetoDoJogo
{
public:
	ObjetoDoJogo();
	~ObjetoDoJogo();
	virtual void inicializar();
	virtual void atualizar();
	virtual void desenhar();	
	virtual void defineX(int x);
	virtual void defineY(int y);
protected:
	int _x, _y;
};

