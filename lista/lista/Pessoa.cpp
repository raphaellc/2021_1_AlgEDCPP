#include "Pessoa.h"

Pessoa::Pessoa()
{
	_idade = 0;
	_nome_pessoa = "";
}

Pessoa::Pessoa(std::string p)
{
	_nome_pessoa = p;
}

Pessoa::~Pessoa()
{
}

void Pessoa::defineIdade(int idade)
{
	_idade = idade;
}

int Pessoa::obtemIdade()
{
	return _idade;
}

void Pessoa::defineNome(std::string nome )
{
	_nome_pessoa = nome;
}

std::string Pessoa::obtemNome()
{
	return _nome_pessoa;
}
