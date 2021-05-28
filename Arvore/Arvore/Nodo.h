#pragma once
template <class T>
class Nodo
{
	Nodo();
	~Nodo();
	Nodo<T>* _filho_esq, * _filho_dir, * _nodo_pai;
	T dado;
};

template<class T>
inline Nodo<T>::Nodo()
{
	_filho_dir = nullptr;
	_filho_esq = nullptr;
	_nodo_pai = nullptr;
}

template<class T>
inline Nodo<T>::~Nodo()
{
}
