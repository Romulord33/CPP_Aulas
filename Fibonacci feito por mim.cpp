#include <iostream>

using namespace std;

void fibonacci();

int main(){
	
	fibonacci();
	
	return 0;
}

void fibonacci(){
	
	int cont;
	int n;
	int res;
	
	cout << "Entre com o valor para a sequencia Fibonacci: ";
	cin >> n;
	
	for(cont=n-1; cont>0; cont--){
		res=cont+n;
		n=res;
	}
	cout << "\n" << res << "\n";
	
}


/*
res = o resultado para a sequencia fibonacci
n1 = o valor anterior
n2 = o valor atual
*/
