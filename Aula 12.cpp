#include <iostream>

using namespace std;

int main(){
	
	//(express�o) ? valor1 : valor2;
	
	int n1, n2, nota;
	string res;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota =n1+n2;
	
	//>=60  Aprovado
	//<60   Reprovado
	
	(nota>=60) ? res="Aprovado" : res="Reprovado";     //Pode-se tamb�m colocar incremento ou decremento de uma vari�vel. Ex.: (n1 >= 10) ? x++ : x--;
													   // (teste) ? vberdadeiro : falso;
	
	cout << "\nSituacao do aluno: " << res << "\n";	
	
	return 0;
}
