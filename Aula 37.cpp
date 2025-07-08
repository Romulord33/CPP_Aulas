#include <iostream>

using namespace std;

int main(){
	
	int *p;
	int vetor[10];
	
	p=vetor;     //Atribuindo ao ponteiro p o valor da primeiro elemento da variavel do vetor. è igual a p=vetor[0];
	*p=10;
	cout << "\n" << vetor[0] << "\n";
	
	*(p+=1);     //Foi colocado o ponteiro no vetor[1]
	*p=20;     //vetor[1]=20
	cout << "\n" << vetor[1] << "\n";
	
	return 0;
}
