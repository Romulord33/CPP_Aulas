#include <iostream>

using namespace std;

int main(){
	
	string veiculo="Carro";
	string *pv;     //O ponteiro pv recebe o enedereço da variável veiculo
	
	pv=&veiculo;
	
	cout << pv << "\n" << &veiculo << "\n";
	
	*pv="Moto";     //No endereço apontado por *pv adicione o valor "Moto"
	
	cout << veiculo;     //cout << *pv;      também iria imprimir Moto
	
	return 0;
}


//O ponteiro não armazena um valor comum como uma variável, ele armazena o endreço de memória de outra variável
//o asterístico é quem vai mostrar que é um ponteiro     int *pn;
//pn = &num;     O & comercial indica o endereço. Logo pn recebe o endereço de num
//A variável sempre estará no mesmo endereço
