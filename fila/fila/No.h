#pragma once
template <class T>
class No
{
private:
	T * dado; //dado que � armazenado no n� do tipo ponteiro para T gen�rico
	No<T>* proximoNo; //atributo para o proximo n� do tipo ponteiro para 
	//n� gen�rico No<T>
public:
	No();
	~No();

	 T * getDado();
	 No<T>* getProximoNo();
	 void defineProximoNo(No<T> *p);
	 void defineDado(T* dado);
	 //??? lucas como define o dado utilizando um m�todo para isso?
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