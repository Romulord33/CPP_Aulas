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
			contador(num,++cont);     //Precisa fazer o pr� decremento, sen�o o vai virar um looping infinito
		}
}

//Lembrando que a recursividade consome mais mem�ria, pois o computador aloca cada espa�o na mem�ria a cada vari�vel que a fun��o usar. Diferente do for que utiliza as mesmas vari�veis para para operar sobre elas mesmas
