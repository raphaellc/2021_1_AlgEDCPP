#include <iostream> // Entrada/Saida padrao
#include <ctime>
#include <string>
#include <cmath>
#include <cstdio>
#include <fstream> //Trabalha com arquivos
#include <iomanip>
#include "Jogador.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");

	srand(time(0));

	//1. Implemente um código que
	std::cout << "/------------------------------------/" << endl;
	std::cout << "Implementação do código - 1" << endl;
	//a. Declare uma variável do tipo ponteiro para inteiro
	int* x;

	//b.Declare uma variável do tipo inteiro
	int y;

	//c. Inicialize a variável do tipo inteiro com o valor 0
	y = 0;

	//d. Atribua o valor 10 a variável do tipo inteiro, por meio da variável do tipo ponteiro
	x = &y;
	*x = 10;

	//e.Mostre na tela o valor da variável inteira utilizando ela própria e a variável ponteiro.
	std::cout << "Valor variavel: " << y << ", " << *x << endl;
	//2. Crie um tabuleiro com n linhas por m colunas. 
	// Esse tabuleiro deve ser preenchido com cinco letras (informadas pelo usuário) distribuídas aleatoriamente.
	char letras[5], ** matriz;
	int linhas, colunas, l, c;

	cout << "Digite a quantidade de linhas: ";
	cin >> linhas;
	cout << "Digite a quantidade de colunas:";
	cin >> colunas;
	cout << "Digite as 5 letras: ";
	for (int i = 0; i < 5; i++)
		cin >> letras[i];

	//alocando
	matriz = new char*[linhas];
	for (l = 0; l < linhas; l++)
		matriz[l] = new char[colunas];

	//preenchendo a matriz
	for (l = 0; l < linhas; l++)
		for (c = 0; c < colunas; c++)
			matriz[l][c] = letras[rand() % 5];

	//escrevendo na tela
	for (l = 0; l < linhas; l++)
	{
		for (c = 0; c < colunas; c++)
			std::cout << matriz[l][c] << " ";
		std::cout << endl;
	}

	//desalocando
	for (l = 0; l < linhas; l++)
	{
		delete[] matriz[l];
		matriz[l] = 0;
	}

	delete[] matriz;
	
	
	//3. Implemente um programa que use a classe jogador declarada.
	std::cout << "------------------------------------" << endl;
	
	cout << "Implementação do programa - 3 / 4" << endl;
	//a.Defina os valores para os atributos da classe por meio do construtor;
	Jogador jogador(5, 10);

	//b.Mostre os valores dos atributos definidos
	cout << "Vida: " << jogador.getVida() << endl;
	cout << "Energia: " << jogador.getEnergia() << endl;

	//c.Atualize os valores dos atributos por meio dos métodos
	jogador.setVida(100);
	jogador.setEnergia(50);

	//d.Mostre os valores dos atributos definidos.
	cout << "Vida: " << jogador.getVida() << endl;
	cout << "Energia: " << jogador.getEnergia() << endl;


	/*
	5. Implemente um programa que receba como entrada somente números inteiros
	positivos e imprima apenas os que estejam no intervalo de 5 a 15. O Programa deve
	terminar quando for digitado o valor 0.
	*/
	cout << "/------------------------------------/" << endl;
	cout << "Implementação de programa - 5" << endl;

	int a[100], num = 0, control;

	cout << "Informe números inteiros positivos ou 0 para sair: " << endl;
	do {
		cout << "Num " << num + 1 << ": ";
		cin >> control;
		if (control == 0) break;
		else if (control > 0) {
			a[num] = control;
			num++;
		}
		else {
			cout << "Números negativos são inválidos" << endl;
		}
	} while (control != 0);

	cout << "Numeros no intervalo 5 a 15: ";
	for (int i = 0; i < 100; i++) {
		if (a[i] >= 5 && a[i] <= 15) {
			cout << a[i] << ", ";
		}
	}
	cout << endl;


	//6. Elabore um programa que:
	cout << "/------------------------------------/" << endl;
	cout << "Implementação de programa - 6" << endl;
	//a. declare um vetor de inteiros de 10 posições
	int v0[10], soma = 0;

	//b. Preencha o mesmo com valores entre 20 e 50
	for (int i = 0; i < 10; i++) {
		v0[i] = rand() % 31 + 20;
	}

	//c. Imprima o resultado da soma de todos os 10 valores preenchidos
	for (int i = 0; i < 10; i++) {
		soma += v0[i];
	}

	cout << "Resultado da soma dos 10 valores:" << soma << endl;


	//7. Elabore um programa que:
	cout << "/------------------------------------/" << endl;
	cout << "Implementação de programa - 7" << endl;
	//a. Declare um vetor de inteiros de 10 posições
	int v1[10], maior, menor, temp;

	//b. Preencha o vetor
	for (int i = 0; i < 10; i++) {
		v1[i] = i * 2 + 6;
	}

	maior = menor = v1[9];

	//c.Imprima os valores do vetor de maneira invertida, do último elemento praprimeiro
	//d. mostre o maior e o menor valor do vetor
	cout << "Valores do vetor invertido: ";
	for (int i = 9; i >= 0; i--) {
		cout << v1[i] << ", ";

		if (v1[i] > maior) maior = v1[i];
		if (v1[i] < menor) menor = v1[i];
	}
	cout << endl;

	cout << "Maior valor: " << maior << endl;
	cout << "Menor valor: " << menor << endl;

	/*
	e. faça a rotação à esquerda dos elementos do vetor, por exemplo, dado o vetor [1,2,3,4,5] após uma rotação
	à esquerda o vetor ficará [2,3,4,5,1], após nova rotação à esquerda o vetor ficará [3,4,5,1,2]
	*/
	temp = v1[0];
	for (int i = 0; i < 10; i++) {
		if (i != 9) {
			v1[i] = v1[i + 1];
		}
		else {
			v1[i] = temp;
		}
	}

	cout << "Vetor invertido: ";

	for (int i = 0; i < 10; i++) {
		cout << v1[i] << ", ";
	}
	cout << endl;

	system("pause");
	return 0;
}