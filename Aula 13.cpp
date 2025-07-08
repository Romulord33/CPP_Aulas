#include <iostream>

using namespace std;

int main(){
	
	/*
	switch(expressão){
		case const1:
			comandos;
			break;
		case const2:
			comandos;
			break;
		default:
			comandos;		
	}
	*/
	
	int val;
	
	cout << "Selecione um transporte:\n";
	cout << "[1] Carro, [2] Moto, [3] Aviao, [4] Helicoptero\n";
	
	cin >> val;
	switch(val){     //Switch alinhado: switch dentor de um switch
		case 1:
		case 2:
			cout << "Trasporte terrestre\n";
			switch(val){
				case 1:
					cout << "Carro selecionado\n";
					break;
				case 2:
					cout << "Moto selecionada\n";
					break;
			}
			break;
		case 3:
		case 4:
			cout << "Transporte aereo\n";
			switch(val){
				case 3:
					cout << "Aviao selecionado\n";
					break;
				case 4:
					cout << "Helicoptero selecionado\n";
					break;
			break;
			}
			break;
		default:
			cout << "\nMeio de trtansporte selecionado invalido\n";
			break;
	}
	
	cout << "\nPrograma finalizado.\n";
	
	return 0;
}


/*

	int val;
	
	cout << "Selecione uma cor:\n";
	cout << "[1] Verde, [2] Azul, [3] Vermelho\n";
	
	cin >> val;
	switch(val){
		case 1:
			cout << "Cor selecionada: Verde\n";
			break;
		case 2:
			cout << "Cor selecionada: Azul\n";
			break;
		case 3:
			cout << "Cor selecionada: Vermelho\n";
			break;
		default:
			cout << "Valor selecionado invalido.\n";
	}
	
	cout << "\nPrograma finalizado.\n";
*/
	
	
/*
	int val;
	
	cout << "Selecione uma cor:\n";
	cout << "[1,2,3] Verde, [4,5,6] Azul\n";
	
	cin >> val;
	switch(val){
		case 1:
		case 2:
		case 3:
			cout << "Cor selecionada: Verde\n";
			break;
		case 4:
		case 5:
		case 6:
			cout << "Valor selecionado: Azul\n";
			break;
		default:
			cout << "\nValor selecionado invalido\n";
	}
	
	cout << "\nPrograma finalizado.\n";
	
	return 0;
*/

	
