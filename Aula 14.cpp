#include <iostream>

using namespace std;

int main(){
	
	int n=0;
	
	while(n++<10){     //Incremento dentro do while
		cout << n << "\n";
		
		if(n==7){     //Um if para que o contador pare antes. Nesse caso, 7
			break;
		}
	}
	
	cout << "\nRotina finalizada.\n";
	
	return 0;
}
