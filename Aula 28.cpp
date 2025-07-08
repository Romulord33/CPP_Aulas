#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	stack <string> cartas;     //N�o precisa definir a quantidade de elementos, ele mesmo vai definindo a quantidade automaticamente
	
	cartas.push("Rei de Copas");     //O primeiro elemento da pilha a ser colocado
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");     //O �ltimo elemento da pilha a ser colocado
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta do topo: " << cartas.top() << "\n\n";
	cout << "Retirando a carta " << cartas.top() << "\n\n";
	
	cartas.pop();     //Retira o elem,ento do topo
	
	cout << "Tamanho atual depois de retirada da carta: " << cartas.size() << "\n";
	cout << "Nova carta do topo: " << cartas.top() << "\n";
	
	
	return 0;
}

//A pilha � como se fosse um vetor, por�m com regras. O primeiro elemento a entrar ser� o �ltimo elemento a sair e o �ltimo elemento a entrar ser� o primeiro a sair
