#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double,double);

int main(){
	
	double n1, n2;
	
	cin >> n1 >> n2;
	
	try{
		cout << divide(n1,n2);
	}catch(const char* e){     //Jogando a mensagem de exce��o dentro da fun��o divide para nosso catch
		cout << "Erro: " << e << endl;
	}
	
	return 0;
}

double divide(double n10, double n20){
	if(n20==0){
		throw "Erro de divisao por zero.";     //Fazendo a mensagem de exce��o
	}
	if(n10>=10){
		throw "N1 precisa ser menor que 10.";     //Usando uma exce��o que � usualmente aceit�vel, por�m foi feita pelo programador
	}
	return n10/n20;
}



/*
	vector<int>num(5);
	
	try{     //Ele vai gerar uma exce��o porque esse erro foi tratado, ele foi para a exce��o no catch
		num.at(6)=10;
		cout << num[0] << endl;
	}catch(exception& e){     //Colocando o bloco de tratamento no catch
		cout << "Erro: " << e.what() << endl;     //e.what � para mostrar qual o erro que foi gerado na rotina
	}
*/
