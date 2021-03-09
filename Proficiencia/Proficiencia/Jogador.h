#pragma once
class Jogador
{
public:
	Jogador();
	Jogador(int v, int e);
	~Jogador();

	int getVida();
	void setVida(int vida);
	int getEnergia();
	void setEnergia(int energia);

private:
	int vida, energia;
};