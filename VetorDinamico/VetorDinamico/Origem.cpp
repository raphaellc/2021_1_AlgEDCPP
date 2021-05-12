#include "VetorDinamico.h"
#include <iostream>

int main() {
	VetorDinamico * vd = new VetorDinamico();
	//Caso de Teste 1: Adiciona Valor e Obtem Valor
	std::cout << "Caso de Teste 1 " << std::endl;
	std::cout << "Tamanho " << vd->obterTamanho() << std::endl;
	std::cout << "Numero de Elementos " << vd->obterNumElementos() << std::endl;

	vd->adicionaValor(10);
	vd->adicionaValor(14);
	std::cout << vd->obtemValor(0) << std::endl;
	std::cout << vd->obtemValor(1) << std::endl;

	//Caso de Teste 2: Adiciona Mais valores (tam > 5) e realoca o vetor adicionando memória
	std::cout << "Caso de Teste 2 " << std::endl;
	std::cout << "Tamanho " << vd->obterTamanho() << std::endl;
	std::cout << "Numero de Elementos " << vd->obterNumElementos() << std::endl;

	vd->adicionaValor(15);
	vd->adicionaValor(16);
	vd->adicionaValor(18);
	vd->adicionaValor(19);
	vd->adicionaValor(20);
	std::cout << vd->obtemValor(2) << std::endl;
	std::cout << vd->obtemValor(3) << std::endl;
	std::cout << vd->obtemValor(4) << std::endl;
	std::cout << vd->obtemValor(5) << std::endl;
	std::cout << vd->obtemValor(6) << std::endl;


	//Caso de Teste 3: Remove Valores sem realocar
	std::cout << "Caso de Teste 3 " << std::endl;
	std::cout << "Tamanho " << vd->obterTamanho() << std::endl;
	std::cout << "Numero de Elementos " << vd->obterNumElementos() << std::endl;
	vd->removeValor(0);
	std::cout << vd->obtemValor(0) << std::endl;
	std::cout << vd->obtemValor(1) << std::endl;
	std::cout << vd->obtemValor(2) << std::endl;
	std::cout << vd->obtemValor(3) << std::endl;
	std::cout << vd->obtemValor(4) << std::endl;
	std::cout << vd->obtemValor(5) << std::endl;
	std::cout << vd->obtemValor(6) << std::endl;
	//Caso de Teste 4: Remove valores realocando até ficarem 5 elementos.
	std::cout << "Caso de Teste 4 " << std::endl;
	std::cout << "Tamanho " << vd->obterTamanho() << std::endl;
	std::cout << "Numero de Elementos " << vd->obterNumElementos() << std::endl;

	std::cout << vd->obtemValor(0) << std::endl;
	std::cout << vd->obtemValor(1) << std::endl;
	vd->removeValor(1);
	std::cout << "Removeu " << std::endl;
	std::cout << vd->obtemValor(0) << std::endl;
	std::cout << vd->obtemValor(1) << std::endl;
	std::cout << "Tamanho " << vd->obterTamanho() << std::endl;
	std::cout << "Numero de Elementos " << vd->obterNumElementos() << std::endl;
	if (vd->removeValor(0) < 0) { std::cout << "Não removeu! \n"; }
	if (vd->removeValor(1) < 0) { std::cout << "Não removeu! \n"; }

	std::cout << "Tamanho " << vd->obterTamanho() << std::endl;
	std::cout << "Numero de Elementos " << vd->obterNumElementos() << std::endl;
	std::cout << vd->obtemValor(0) << std::endl;
	std::cout << vd->obtemValor(1) << std::endl;
	std::cout << vd->obtemValor(2) << std::endl;
	std::cout << vd->obtemValor(3) << std::endl;
	std::cout << vd->obtemValor(4) << std::endl;
	std::cout << vd->obtemValor(5) << std::endl;
	std::cout << vd->obtemValor(6) << std::endl;
	std::cout << "Tamanho " << vd->obterTamanho() << std::endl;
	std::cout << "Numero de Elementos " << vd->obterNumElementos() << std::endl;

	delete vd;
	system("pause");
}