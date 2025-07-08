#include <iostream>

using namespace std;

void contador(int num, int cont=0);

int main(){
	
	contador(10);
	
	return 0;
}

void contador(int num, int cont){
		cout << cont << "\n";
		if(num>cont){
			contador(num,++cont);     //Precisa fazer o pré decremento, senão o vai virar um looping infinito
		}
}

//Lembrando que a recursividade consome mais memória, pois o computador aloca cada espaço na memória a cada variável que a função usar. Diferente do for que utiliza as mesmas variáveis para para operar sobre elas mesmas
