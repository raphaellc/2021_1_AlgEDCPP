#pragma once
template <class T>
class No
{
private:
	T * dado; //dado que é armazenado no nó do tipo ponteiro para T genérico
	No<T>* proximoNo; //atributo para o proximo nó do tipo ponteiro para 
	//nó genérico No<T>
public:
	No();
	~No();

	 T * getDado();
	 No<T>* getProximoNo();
	 void defineProximoNo(No<T> *p);
	 void defineDado(T* dado);
	 //??? lucas como define o dado utilizando um método para isso?
	 //Isso Giu



}; 

template<class T>
inline T* No<T>::getDado()
{
	return dado;
}
template<class T> //
inline No<T>* No<T>::getProximoNo()
{
	return proximoNo;
}
template <class T>
inline void defineProximoNo(No<T> *p)
{
	proximoNo = p;
}