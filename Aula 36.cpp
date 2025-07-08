#include <iostream>

using namespace std;

int main(){
	
	string veiculo="Carro";
	string *pv;     //O ponteiro pv recebe o enedere�o da vari�vel veiculo
	
	pv=&veiculo;
	
	cout << pv << "\n" << &veiculo << "\n";
	
	*pv="Moto";     //No endere�o apontado por *pv adicione o valor "Moto"
	
	cout << veiculo;     //cout << *pv;      tamb�m iria imprimir Moto
	
	return 0;
}


//O ponteiro n�o armazena um valor comum como uma vari�vel, ele armazena o endre�o de mem�ria de outra vari�vel
//o aster�stico � quem vai mostrar que � um ponteiro     int *pn;
//pn = &num;     O & comercial indica o endere�o. Logo pn recebe o endere�o de num
//A vari�vel sempre estar� no mesmo endere�o
