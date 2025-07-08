#include <iostream>
#include <queue>

using namespace std;
	
int main(){
	
	queue <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n\n";
	cout << "Primeira carta: " << cartas.front() << "\n";    //front é o primeiro elemento da fila
	cout << "Ultima carta:  " << cartas.back() << "\n";     //bask é o último elemento da fila
	cout << "\n\nAs demais cartas da fila:\n";
	
	while(!cartas.empty()){
		cout << cartas.front() << "\n";
		cartas.pop();
	}
	
	
	return 0;
}

//A fila é um tubo com entrada e saída. Logo o primeiro elemento que entra é o primeiro elemento que sai, o último que entra é o último que sai
