#include <iostream>

using namespace std;

void soma(int n1, int n2);
void soma();

int main(){
	
	soma(20,30);
	soma();
	
	return 0;
}

void soma(int n1, int n2){     //Pode-se ter duas ou mais funções com o mesmo nome desde que tenham argumentos de entrada diferentes. Aí o computador vai saber qual a função que está sendo chamada
	int re;
	re=n1+n2;
	cout << "\nA soma de " << n1 << " com " << n2 << " = " << re << "\n";
}

void soma(){
	int n1,n2,re;
	n1=10;
	n2=20;
	re=n1+n2;
	cout << "A soma de " << n1 << " com " << n2 << " = " << re << "\n";
}
