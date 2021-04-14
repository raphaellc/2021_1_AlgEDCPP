#pragma once
#include "ObjetoDoJogo.h"
#include "Pagina.h"
class Jornal :
	public ObjetoDoJogo
{
public:
	Jornal();
	~Jornal();
	void inicializar() override;
	void atualizar() override;
	void desenhar() override;
	void definePagina(Pagina* pg);
	
private:
	ObjetoDoJogo* _pagina;
};

