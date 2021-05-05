#pragma once
#include "No.h"
#include "Pessoa.h"
class Lista
{
public:
	Lista();
	~Lista();
	void inserirPessoa(Pessoa * novo_convidado);
	void removerPessoa();
	Pessoa * obterUltimaPessoa();
	Pessoa * obterTodasPessoas();
	bool verificaConvidado(std::string nome);
	int tamanho();
	bool estaVazia();
private:
	No* _inicio_da_lista, *_no_atual;
	int _quantidade_elementos;
};

