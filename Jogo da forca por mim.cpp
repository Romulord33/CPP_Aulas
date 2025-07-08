#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
	
	string senha, palavra, dica;
	int chance;
	char resp;
	
	inicio:
		
	system("cls");
	
	cout << "\nJOGO DA FORCA\n";
	cout << "\nEscreva a dica em uma palavra: ";
	cin >> dica;
	cout << "Escreva a palavra da forca: ";
	cin >> senha;
	
	system("cls");
	
	cout << "Jogador 2 pronto? [s/n]";
	cin >> resp;
	if(resp== 'n' or resp== 'N'){
		goto inicio;
	}
	
	system("cls");
	
	cout << "\nJOGO DA FORCA\n";
	
	for(chance=3; chance>=1; chance--){
		cout << "\nDica: " << dica << "\nChance(s): " << chance << "\n\n";
		cout << "Digite a palavra correta: ";
		cout << "Quantas letras: " << sizeof(senha)/4 << "\n\n";
		cin >> palavra;
		if(senha == palavra){
			cout << "\nPalavra correta!";
			break;
		}else{
			cout << "\nTente novamente...\n\n";
		}
}
	
	
	
	return 0;
}
