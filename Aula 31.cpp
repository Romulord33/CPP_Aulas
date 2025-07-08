#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list<int> aula;
	int tam;
	list<int>::iterator it;
	
	tam=10;
	for(int i=0; i<tam; i++){
		aula.push_front(i); 
	}
	
	/*
	it=aula.begin();     //Indicar a primeira posição da lista
	advance(it,5);     //iterator na posição 5
	
	aula.insert(it,0);     //Posição do iterator e o valor declarado
	*/
	
	aula.sort();     //Ele coloca a lista em ordem
	aula.reverse();     //Ele vai inverter os valores da lista
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	tam=aula.size();
	for(int i=0; i<tam; i++){
		cout << aula.front() << "\n";
		aula.pop_front(); 
	}
	
	return 0;
}



//list<int> aula(50)     Declarando o tamanho da minha lista, no caso, 50
//list<int> aula(5,50)     Minha lista tem tamanho 5 e todas t~em o valor 50
//push_front insere no início da lista
//push_back insere no final da listas
