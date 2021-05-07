#pragma once
#include <string>
class Pessoa
{
public:
	Pessoa();
	Pessoa(std::string p);
	~Pessoa();
	void defineIdade(int idade);
	int obtemIdade();
	void defineNome(std::string nome);
	std::string obtemNome();
private:
	int _idade;
	std::string _nome_pessoa;
};

