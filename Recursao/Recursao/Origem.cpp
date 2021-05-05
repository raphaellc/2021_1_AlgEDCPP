#include <iostream> // Entrada/Saida padrao
#include <string>
#include <iomanip>

using namespace std;

bool ePalindromo(string palavra, int n, int i) {
	if (i >= n - i) {
		return true;
	}
	if (palavra.at(i) == palavra.at(n - i - 1)) {
		return ePalindromo(palavra, n, i + 1);
	}return false;
}
//String na ordem inversa
string inverte(string texto, int n) {
	string temp;

	temp += texto[n - 1];
	if (n == 1) {
		return temp;
	}
	else {
		temp += inverte(texto, n - 1);
		return temp;
	}
}

//Verificar palindromo
bool verificaPalindromo(string texto, int n) {
	int esq, dir;
	//dir = n - 1;

	//if
	return true;
}

//Fatorial
int fatorial(int n) {
	if (n == 1) return n;
	else {
		return n * fatorial(n - 1);
	}
}

//Soma dos elementos de um vetor
int somaVetor(int Vetor[], int tam) {
	int soma = 0;

	soma += Vetor[tam - 1];
	if (tam == 1) {
		return soma;
	}
	else {
		soma += somaVetor(Vetor, tam - 1);
		return soma;
	}
}

//MDC
int mdc(int x, int y) {
	if (y != 0) return mdc(y, x % y);
	else return x;
}

string inverteString(string str, int tam, int indice) {
	if (str.size() > tam) {
		return "String maior que o tamanho definido\n";
	}
	else
	{
		if (indice <= 0) {
			return str;
		}
		else
		{
			reverse(str.begin(), str.end());
			return inverteString(str, tam, indice - 1);
		}
	}
}

int main() {
	setlocale(LC_ALL, "ptb");
	
	//String na ordem inversa
	cout << "STRING NA ORDEM INVERSA\n";
	cout << "Entrada: abc\n";
	cout << "Saida: " << inverte("abc", 3) << endl;
	cout << "//////////////////////////////////////\n";
	//Verificar palindromo
	cout << "VERIFICAR PALINDROMO\n";
	cout << "Entrada: \n";
	cout << "Saida: " << endl;
	cout << "//////////////////////////////////////\n";
	//Fatorial
	cout << "FATORIAL\n";
	cout << "Entrada: 4\n";
	cout << "Saida: " << fatorial(4) << endl;
	cout << "//////////////////////////////////////\n";
	//Soma dos elementos de um vetor
	int vetor[3] = { 3, 2, 1 };
	cout << "SOMA DE ELEMENTOS NUM VETOR\n";
	cout << "Entrada: 3, 2, 1\n";
	cout << "Saida: " << somaVetor(vetor, 3) << endl;
	cout << "//////////////////////////////////////\n";
	//Maior divisor comum entre m e n
	//cout << "SOMA DE ELEMENTOS NUM VETOR\n";
	//cout << "Entrada: 6, 10\n";
	//cout << "Saida: " << mdc(6, 10) << endl;
	//cout << "//////////////////////////////////////\n";
	//Exemplo epalíndromo
	string palindromo = "matam";
	string naopalindromo = "batata";

	bool exemplo = ePalindromo(palindromo, 5, 0);
	bool contraexemplo = ePalindromo(naopalindromo, 6, 0);
	if (exemplo) {
		cout << palindromo << " e palindromo!" << endl;
	}
	else {
		cout << palindromo << " nao e palindromo!" << endl;
	}
	if (contraexemplo) {
		cout << naopalindromo << " e palindromo!" << endl;
	}
	else {
		cout << naopalindromo << " nao e palindromo!" << endl;
	}

	//Fim do exercício 2

	string nome = "raphael";

	cout << nome << endl;

	for (int i = 0; i < nome.size(); i++) {
		nome[i] = toupper(nome[i]);
	}

	cout << nome << endl;

	system("pause");
	return 0;
}