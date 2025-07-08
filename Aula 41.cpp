#include <iostream>
#include <stdio.h>
#include <math.h>     //Para colocar o valor de pi
#include <iomanip>

using namespace std;

int main(){
	
	int num=15;
	float pi=M_PI;
	
	cout.precision(4);     //Coloca o número de casas decimais que vai aparecer no programa
	
	cout << "Valor de NUM em decimal: " << num << "\n";
	cout << "Valor de NUM em hexadecimal: " << hex << num << "\n";
	cout << "Valor de NUM em hexadecimal: " << setbase(16) << num << "\n";     //Pode ser usada nessa forma, porém necessita da biblioteca <iomanip>
	cout << "Valor de NUM em octadecimal: " << oct << num << "\n";
	cout << "Valor de pi: " << pi << "\n";     //cout << "Valor de pi: " << std::scientific << pi << "\n";     Caso queira que seja um número com precisão em notação científica
	
	//Há o decimal, somente coloca o dec assim como nos exemplos acima
	/*
	int num=5;
	
	printf("O valor de NUM: %07d",num);     //07 indica que esse valor vai ter 7 casas, caso seja abaixo dessa quantia, como o número 10 por exemplo, o resto será completaodo com zeros
	
	float pi=M_PI;
	
	printf("Valor de pi: %.2f",pi);     //.2 diz que quero somente 2 casas decimais
	*/
	
	return 0;
}
