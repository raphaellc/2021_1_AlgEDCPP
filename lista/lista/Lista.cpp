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
		no->defineAnterior(_no_atual);
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
	Pessoa * vetor_pessoas = nullptr;
	if(_quantidade_elementos == 0){
		return vetor_pessoas;
	}
	else {
		vetor_pessoas = new Pessoa[_quantidade_elementos];
		No* n = _inicio_da_lista;
		int i = 0;
		for (i; i < (_quantidade_elementos - 1); i++) {
			vetor_pessoas[i] = *n->obtemDado();
			n = n->obtemProximo();
		}
		vetor_pessoas[_quantidade_elementos - 1] = *(_no_atual->obtemDado());
		return vetor_pessoas;
	}
	
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

void Lista::inserirPessoa(No* no)
{
	if (!estaVazia()) {
		if (no->obtemProximo == nullptr) {
			No* novo_no = new No;
			novo_no->defineAnterior(no);
			no->defineProximo(novo_no);
			_no_atual = novo_no;
					return;
		}
		inserirPessoa(no->obtemProximo());
		
	}
}
