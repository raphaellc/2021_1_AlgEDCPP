#include <iostream>
#include "Lista.h"
#include "Pessoa.h"
int main() {
	Lista* listaAglomeracao = new Lista;
	Pessoa* todosConvidados;
	listaAglomeracao->inserirPessoa(new Pessoa("Raphael"));
	listaAglomeracao->inserirPessoa(new Pessoa("Igor"));
	todosConvidados = listaAglomeracao->obterTodasPessoas();
	if (todosConvidados != nullptr) {
		for (int i = 0; i < listaAglomeracao->tamanho(); i++)
			std::cout << todosConvidados[i].obtemNome() << std::endl;
	}
	system("pause");
	return 0;
}