#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> num1;
	vector<int> num2;
	int tam1,tam2,i;
	
	num1.push_back(1);
	num1.push_back(2);
	num1.push_back(3);
	num1.push_back(4);
	num1.push_back(5);
	
	num2.push_back(6);
	num2.push_back(7);
	num2.push_back(8);
	num2.push_back(9);
	num2.push_back(10);
	
	num1.insert(num1.begin(),888);     //Posso inserir um valor em qualquer posi��o, basta usar begin()+1 por exemplo, mas pode ser qualquer n�mero/posi��o. E end() para o final e, segundo a l�gica,  -1 e os n�meros subsequentes. � o m�todo para n�o precisar usar o iterator
	num1.erase(num1.end()-2);
	//num1.swap(num2);     //Fazendo a troca de valores de num1 com num2
	tam1=num1.size();
	tam2=num1.size();
	
	cout << "\nPrimeiro valor de num1: " << num1.front() << endl;
	cout << "Ultimo elemento de num1: " << num1.back() << endl;
	cout << "Valor do meio...........:" << num1.at(tam1/2) << endl;     //O at pode ser usado para identificar a posi��o de qualquer elemento
	
	//tam=num1.size();     //Retornando o tamanho do vector num e armazenando isso na vari�vel tam
	
	cout << "\nTamanho do vector 1: " << tam1 << endl;
	
	for(i=0; i<tam1;i++){
		cout << num1[i] << endl;
	}
	
	cout << "\nTamanho do vector 2: " << tam2 << endl;
	
	for(i=0;i<tam2;i++)
		cout << num2[i] << endl;
	}
	
	while(!num1.empty()){
		num1.pop_back();     //Retira o �ltimo elemento
	}
	
	num2.clear();     //Limpa os elementos de um vector
	
	cout << "\nNovo tamanho de num1: " << num1.size() << endl;
	
	return 0;
}

//Basicamente vector � um array mais moderno

/*

	vector<int> num;     //Uma declara��o aceit�vel de vector, sem precisar da especifica��o do tamanho, vira uma aloca��o din�mica
	int tam,i;
	
	num.push_back(10);
	num.push_back(2);
	num.push_back(5);
	num.push_back(8);
	
	
	tam=num.size();     //Retornando o tamanho do vector num e armazenando isso na vari�vel tam
	
	cout << "Tamanho do vector: " << tam << endl;
	
	for(i=0; i<tam;i++){
		cout << num[i] << endl;
	}
	
*/
