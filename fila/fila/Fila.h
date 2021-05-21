#pragma once
#include "No.h"
template <class T>
class Fila
{
public:
	Fila();
	~Fila();
	void enfileirar(T objeto);
	void desenfileirar();
	T* primeiroDaFila();
	T* ultimoDaFila();
private:
	No<T> * _primeiroFila, * _ultimoFila;
	int _contadorObjetos;
	
};

template<class T>
inline Fila<T>::Fila()
{
	_primeiroFila = nullptr;
	_ultimoFila = nullptr;
	_contadorObjetos = 0;
}

template<class T>
inline Fila<T>::~Fila()
{
}

template<class T>
inline void Fila<T>::enfileirar(T objeto)
{
	No<T>* Novo = new No<T>;
	Novo->defineDado(objeto);
	if (_contadorObjetos == 0) {
		_primeiroFila = Novo;
		_ultimoFila = Novo;
		
	}
	else {
		_ultimoFila->defineProximoNo(Novo);
		_ultimoFila = Novo;
		
	}
	_contadorObjetos++;
}

template<class T>
inline void Fila<T>::desenfileirar()
{
	if (_contadorObjetos > 0) {
		No<T>* no_a_deletar;
		no_a_deletar = _primeiroFila;
		_primeiroFila = _primeiroFila->getProximoNo();
		delete no_a_deletar;
	}
}

template<class T>
inline T* Fila<T>::primeiroDaFila()
{
	return _primeiroFila->getDado();
}
template<class T>
inline T* Fila<T>::ultimoDaFila()
{
	return _ultimoFila->getDado();
}
//Qual o erro? foi, volteifrf eu n to conseguindo deletar, só escrever, nem sdar enter   