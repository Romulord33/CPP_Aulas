#include <iostream>

using namespace std;

int main(){
	
	int cont;
	
	cont=20;
	do{     //O do vai executar e somente quando chegar ao while é que o programa vai parar se satisfeito já que esse fará o teste
		cout << "Romulao - " << cont << "\n";
		cont ++;
	}while(cont<20);
	
	cout << "\nRotina finalizada.\n";
	
	return 0;
}
