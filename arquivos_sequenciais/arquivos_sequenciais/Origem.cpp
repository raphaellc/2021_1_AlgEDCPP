#include<iostream>
#include<fstream>

using namespace std;
int main() {
	//criar o arquivo para escrita, na declara��o, abre o arquivo
	//tipo_stream nome_referencia_da_stream("nome_arqivo.ext", modo_de_acesso)
	ofstream primeiro_arquivo("pri_arq.txt", ios::out | ios::trunc);
	ifstream pri_arq_leitura;
	string dado_lido = ""; //declara��o da vari�vel
	char dado[100];
	//se arquivo aberto
	if (!primeiro_arquivo.is_open()) {
		cout << "n�o abriu" << endl;
	}
	else {
		cout << "arquivo aberto" << endl;
		primeiro_arquivo << "primeiro_dado" << endl;
		primeiro_arquivo << "segundo_dado ";
		primeiro_arquivo << "terceiro_dado" << endl;
		primeiro_arquivo << "quarto_dado" << endl;
	}
	primeiro_arquivo.close();
	pri_arq_leitura.open("pri_arq.txt", ios::in);
	if (!pri_arq_leitura.is_open())
		cout << "n�o abriu" << endl;
	else {
		pri_arq_leitura >> dado_lido;
		cout << dado_lido << endl;
		pri_arq_leitura >> dado_lido;
		cout << dado_lido << endl;
		pri_arq_leitura >> dado_lido;
		cout << dado_lido << endl;
	}
	pri_arq_leitura.close();
	cout << dado_lido << endl;
	
	system("pause");
	return 0;
}