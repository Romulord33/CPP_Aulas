#include <iostream>

using namespace std;

int main(){
	
	int cont;
	
	cont=0;
	
	while(cont < 1000){
		cout << cont << "\n";
		cont++;
		if(cont == 500)     //Quando o if tiver s� uma linha de comando, n�o h� necessidade de usar os colchetes
		break;
	}
	
	return 0;
}
