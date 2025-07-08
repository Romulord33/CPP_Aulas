#include <iostream>

using namespace std;

void fatorial();

int main(){
	
	fatorial();
	
	return 0;
}

void fatorial(){

	int cont;
	int n;
	int res;
	
	cout << "Entre com o numero a ser fatorado: ";
	cin >> n;
	
	for(cont=n-1; cont>1; cont--){
		res=n*cont;
		n=res;
		cout << "\n" << res << "\n";
	}
}


/*
n!=n.(n-1).(n-2).(n-3)...

n = o número a ser fatorado
cont = vai do número n até 1
*/
