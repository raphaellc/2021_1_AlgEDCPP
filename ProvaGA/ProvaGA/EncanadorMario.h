#pragma once
#include "Encanador.h"
class EncanadorMario :
	protected Encanador
{
public:
	EncanadorMario();
	~EncanadorMario();
	void setForca(int f);
	void setVida(int v);
	int obtemForca();
	int obtemVida();
private:
	void poder() override;
	int forca;
	int vida;
};

