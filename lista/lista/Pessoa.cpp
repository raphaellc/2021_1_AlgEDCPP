#include "Pessoa.h"

Pessoa::Pessoa()
{
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
