#pragma once
template<class T, class D>
class ClasseGenerica
{
public:
	ClasseGenerica();
	~ClasseGenerica();
	void defineVG(T vg);
	T obtemVG();
	void defineDG(D dg);
	D obtemDG();
private:
	T _variavel_generica;
	D _dado_generico;
};

template<class T, class D>
inline ClasseGenerica<T, D>::ClasseGenerica()
{
}

template<class T, class D>
inline ClasseGenerica<T, D>::~ClasseGenerica()
{
}

template<class T, class D>
inline void ClasseGenerica<T, D>::defineVG(T vg)
{
	_variavel_generica = vg;
}

template<class T, class D>
inline T ClasseGenerica<T, D>::obtemVG()
{
	return _variavel_generica;
}

template<class T, class D>
inline void ClasseGenerica<T, D>::defineDG(D dg)
{
	_dado_generico = dg;
}

template<class T, class D>
inline D ClasseGenerica<T, D>::obtemDG()
{
	return _dado_generico;
}
