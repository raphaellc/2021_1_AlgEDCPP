#include<iostream>
#include<fstream>

using namespace std;
int main() {
	//criar o arquivo para escrita, na declaração, abre o arquivo
	//tipo_stream nome_referencia_da_stream("nome_arqivo.ext", modo_de_acesso)
	ofstream primeiro_arquivo("pri_arq.txt", ios::out | ios::trunc);
	ifstream pri_arq_leitura;
	string dado_lido = ""; //declaração da variável
	char dado[100];
	//se arquivo aberto
	if (!primeiro_arquivo.is_open()) {
		cout << "não abriu" << endl;
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
		cout << "não abriu" << endl;
	else {
		do  {
			cout << pri_arq_leitura.tellg() << endl;
			pri_arq_leitura >> dado_lido;
			if (pri_arq_leitura.tellg() >= 0) {
				cout << dado_lido << endl;
				cout << pri_arq_leitura.tellg() << endl;
				cout << pri_arq_leitura.gcount() << endl;
			}
		} while (!pri_arq_leitura.eof());
	}
	pri_arq_leitura.close();
	
	
	system("pause");
	return 0;
}