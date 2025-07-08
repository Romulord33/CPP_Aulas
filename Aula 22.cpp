#include <iostream>

using namespace std;

							// Qualquer valor de saída diferente de void, deve-se usar return, indicando qual é o valor da saída

void texto();	//Apresentando a função ao meu programa (prototipei a função texto)
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
	int res; //Uma variável para guardar o resultado da função soma2
	string transp[4]={"Carro","Moto","Barco","Aviao"};
	
	texto(); //Chamando a função. Pode chamar a função quantas vezes quiser, até mesmo com um for
	soma(15,5);
	res=soma2(175,25); //res vai receber o retorno da função soma2
	
	cout << "\nValor de res: " << res << "\n"; //cout << "\nValor de res: " << soma(175,25) << "\n";
	
	tr(transp);
	
	return 0;
}

void texto(){ //O código vai executar a função quando ela for chamada
	cout << "Romulo\n\n";
	
}

void soma(int n1, int n2){
	cout << "A soma dos valores: " << n1+n2 << "\n";
}

int soma2(int n1, int n2){
	return n1+n2;
}

void tr(string tra[4]){
	for(int i=0; i<4; i++){
		cout << tra[i] << "\n";
	}
}
