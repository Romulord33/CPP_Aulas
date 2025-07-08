#include <iostream>

using namespace std;

int main(){
	
	//Tipo Nome;
	//Tipo Nome = Valor;
	
	int vidas = 0; //Recebe números inteiros positivos e negativos
	char letra = 'R'; //Recebe uma letra (tamanho de 1 Byte)
		//char letras[20]; Pode receber mais caracteres (vetor / matriz)
	double decimal = 5.2; //Recebe um numeral com casa decimais
	float decimal2 = 5.2; //Recebe um numeral com casas decimais com uma precisão menor (geralmente arredonda)
	bool vivo = true; //Recebe verdadeiro = true = 1 ou falso = false = 0
	string nome = "Romulo"; //recebe um texto maior
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "\nDigite uma letra: ";
	cin >> letra;
	cout << "\nDigite um numero decimal: ";
	cin >> decimal;
	cout << "\nDigite um outro numero decimal: ";
	cin >> decimal2;
	cout << "\nDigite 1 ou 0: ";
	cin >> vivo;
	cout << "\nDigite um nome: ";
	cin >> nome;
	
	cout << "\n" << vidas << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << decimal2 << "\n";
	cout << vivo << "\n";
	cout << nome << "\n";
	
	return 0;
}
