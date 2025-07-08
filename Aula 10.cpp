#include <iostream>
#include <cstdlib>    //Incluindo a biblioteca do Windows para usar o cls. Pode-se usar também <sdtlib.h>

using namespace std;

int main(){
	
	int n1, n2, res;
	char opc;
	
	inicio:     //O : é só para dizer que o inicio é um label
	
	system("cls");     //Comando da biblioteca do Windows para limpar a tela
	
	cout << "Digite o valor da nota 1: ";
	cin >> n1;
	cout << "Digite o valor da nota 2: ";
	cin >> n2;
	
	res=n1+n2;
	
	/*
		>= 60        Aprovado
		>=40 e <60   Recuperação
		<40          Reprovado
	*/
	
	if(res >= 60){
		
		cout << "\nAluno aprovado";
	}else if(res >=40){
		cout << "\nAluno de recuperacao";
	}else{
		cout << "\nAluno reprovado";
	}
	
	cout << "\nDigitar outras notas? [s/n]: ";
	cin >> opc;
	
	if(opc == 's' or opc == 'S'){
		goto inicio;	
	}
	
	return 0;
}
