#include "Lista.h"

Lista::Lista()
{
	_inicio_da_lista = nullptr;
	_no_atual = nullptr;
	_quantidade_elementos = 0;
}

Lista::~Lista()
{
}

void Lista::inserirPessoa(Pessoa* novo_convidado)
{
	No* no = new No();
	no->defineDado(novo_convidado);
	if (estaVazia()) {
		_inicio_da_lista = no;
	}
	else {
		_no_atual->defineProximo(no);
	}
	_no_atual = no;
	_quantidade_elementos++;
}

void Lista::removerPessoa() //Jonathan
{
	if (!estaVazia())
	{
		if (_quantidade_elementos == 1) {
			delete _inicio_da_lista;
			_inicio_da_lista = nullptr;
			_no_atual = nullptr;
		}
		else {
			No* aux;
			aux = _inicio_da_lista;
			_inicio_da_lista = _inicio_da_lista->obtemProximo();
			delete aux;	
		}	
		_quantidade_elementos--;
	}
	
}

Pessoa* Lista::obterUltimaPessoa()//Giulia e Samuel
{
	if(!estaVazia())
		return _no_atual->obtemDado(); 
	return nullptr;

	
	
}

Pessoa* Lista::obterTodasPessoas()//igor
{
	if(_quantidade_elementos == 0){
		return nullptr;
	}
	Pessoa* a;
	a = new Pessoa[_quantidade_elementos];
	No* n = _inicio_da_lista;
	int i = 0;
	for (i; i < _quantidade_elementos - 1; i++) {
		a[i] = *n->obtemDado();
		n = n->obtemProximo();
	}
	a[_quantidade_elementos - 1] = *_no_atual->obtemDado();
	return a;
}

bool Lista::verificaConvidado(std::string nome)
{
	return false;
}

int Lista::tamanho()
{
	return _quantidade_elementos;
}

bool Lista::estaVazia()
{
	if (_inicio_da_lista == nullptr) return true;
	return false;
	
}
