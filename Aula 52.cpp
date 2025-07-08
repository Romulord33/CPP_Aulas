#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	
	fstream arquivo;
	char opc='s';
	string nome,linha;
	
	arquivo.open("Dados.txt",ios::out|ios::app);
	
	while((opc=='s')or(opc=='S')){
		cout << "Digite um nome: ";
		cin >> nome;
		arquivo << nome << endl;
		cout << "\nDigitar um novo nome? [s/n]";
		cin >> opc;
		system("cls");
	}
	arquivo.close();
	
	arquivo.open("Dados.txt",ios::in);
	
	cout << "Nomes digitados:" << endl;
	
	if(arquivo.is_open()){
		while(getline(arquivo,linha)){
			cout << linha << endl;
		}
		arquivo.close();
	}else{
		cout << "Nao foi possivel abrir o arquivo." << endl;
	}
	
	return 0;
}
