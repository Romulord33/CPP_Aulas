#include <iostream>

using namespace std;

							// Qualquer valor de sa�da diferente de void, deve-se usar return, indicando qual � o valor da sa�da

void texto();	//Apresentando a fun��o ao meu programa (prototipei a fun��o texto)
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
	int res; //Uma vari�vel para guardar o resultado da fun��o soma2
	string transp[4]={"Carro","Moto","Barco","Aviao"};
	
	texto(); //Chamando a fun��o. Pode chamar a fun��o quantas vezes quiser, at� mesmo com um for
	soma(15,5);
	res=soma2(175,25); //res vai receber o retorno da fun��o soma2
	
	cout << "\nValor de res: " << res << "\n"; //cout << "\nValor de res: " << soma(175,25) << "\n";
	
	tr(transp);
	
	return 0;
}

void texto(){ //O c�digo vai executar a fun��o quando ela for chamada
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
