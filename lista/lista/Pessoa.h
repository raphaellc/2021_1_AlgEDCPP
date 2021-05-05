#pragma once
#include <string>
class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	void defineIdade(int idade);
	int obtemIdade();
	void defineNome(std::string);
	std::string obteNome();
private:
	int _idade;
	std::string _nome_pessoa;
};

