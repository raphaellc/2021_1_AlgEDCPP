#include <iostream>

int somaInteiros(int* v, int tam_vet) {
	if (tam_vet == 0) {

		return 0;
	}
	else
	{
		return (v[tam_vet - 1] * (tam_vet - 1)) + somaInteiros(v, tam_vet - 1);
	}
}
int main()
{
	int vet[8] = { 12,4,3 ,13,1,6,2,10 };
	int resultado = somaInteiros(vet, 8);
	return 0;
	system("pause");
}