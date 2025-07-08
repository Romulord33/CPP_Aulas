#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	stack <string> cartas;
	
			if(cartas.empty()){     //if(cartas.size() == 0)
		cout << "Pilha vazia\n\n";
	}else{
		cout << "Pilha com cartas\n\n";
	}
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
		if(cartas.empty()){
		cout << "Pilha vazia\n\n";
	}else{
		cout << "Pilha com cartas\n\n";
	}
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta do topo: " << cartas.top() << "\n\n";
	cout << "Retirando a carta " << cartas.top() << "\n\n";
	
	cartas.pop();     //Retira o elemento do topo
	
	cout << "Tamanho atual depois de retirada da carta: " << cartas.size() << "\n";
	cout << "Nova carta do topo: " << cartas.top() << "\n";
	
	cout << "\n\nVamos retirar todas as cartas da pilha\n";
	
		while(!cartas.empty()){
		cartas.pop();
	}
	
	cout << "\nTamanho da pilha ap�s o esvaziamento dela: " << cartas.size() << "\n";
	
	return 0;
}

//A fun��o empty verifica se ainda h� elementos na pilha ou n�o. Se estiver vazia, retona TRUE e se n�o estiver vazia, FALSE
