#include <iostream>

using namespace std;

int main(){
	
	int cont;
	
	cont=0;
	
	while(cont < 1000){
		cout << cont << "\n";
		cont++;
		if(cont == 500)     //Quando o if tiver só uma linha de comando, não há necessidade de usar os colchetes
		break;
	}
	
	return 0;
}
