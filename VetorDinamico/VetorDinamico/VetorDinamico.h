#pragma once
class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();
	void adicionaValor(int valor);
	int removeValor(int posicao);
	int obtemValor(int posicaco);
	int obterTamanho();
	int obterNumElementos();
private:
	void realocar(int novo_tam);
	int * vetor_dinamico;
	int tam = 0, cont;
};

