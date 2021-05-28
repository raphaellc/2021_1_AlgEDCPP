#pragma once
#include "Nodo.h"
#include <iostream>
template <class T>
class ArvoreBinaria
{
public:
	ArvoreBinaria();
	~ArvoreBinaria();
	void inserir(T valor);
	void caminharPreOrdem();
private:
	void inserir(Nodo<T>* raiz, Nodo<T>* no_a_inserir);
	void caminharPreOrdem(Nodo<T>* raiz);
	Nodo<T>* raiz;
};

template<class T>
inline ArvoreBinaria<T>::ArvoreBinaria()
{
	raiz = nullptr;
}

template<class T>
inline ArvoreBinaria<T>::~ArvoreBinaria()
{
}

template<class T>
inline void ArvoreBinaria<T>::inserir(T valor)
{
	Nodo<T>* aux = new Nodo<T>;
	aux->dado = valor
	if (raiz == nullptr) {
		
		raiz = aux;
	}
	else {
		inserir(raiz, aux);
	}
}

template<class T>
inline void ArvoreBinaria<T>::caminharPreOrdem()
{
	caminharPreOrdem(raiz);
}

template<class T>
inline void ArvoreBinaria<T>::inserir(Nodo<T>* raiz, Nodo<T>* no_a_inserir)
{
	if (raiz->dado >= no_a_inserir->dado) {
		if (raiz->_filho_dir == nullptr) {
			raiz->_filho_dir = no_a_inserir;
		}
		else {
			inserir(raiz->_filho_dir, no_a_inserir);
		}
	}
	else {
		if (raiz->_filho_esq == nullptr) {
			raiz->_filho_esq = no_a_inserir;
		}
		else {
			inserir(raiz->_filho_esq, no_a_inserir);
		}
	}
}

template<class T>
inline void ArvoreBinaria<T>::caminharPreOrdem(Nodo<T>* raiz)
{
	std::cout << raiz->dado << std::endl;
	if (raiz->_filho_esq != nullptr)
		caminharPreOrdem(raiz->_filho_esq);
	if (raiz->_filho_dir != nullptr)
		caminharPreOrdem(raiz->_filho_dir);
}
