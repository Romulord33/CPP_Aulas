#include <iostream>
#include <stdio.h>     //Cont�m as especifica��es de printf e scanf

using namespace std;

int main(){
	
	int num1,num2,num3;
	char nome[10]="Romulo";
	
	num1=10; num2=20; num3=30;
	
	scanf("%d %s",&num1,&nome);     //No scanf � preciso informar o local de mem�ria
	 
	printf("Valor das variaveis: %d %d %d\nNome: %s\n",num1, num2, num3, nome);     
	
	return 0;
}

/*
\0 entende que acabou aquela string
%d ou %i vari�veis inteiras
%x ou %X vari�veis hexadecimais
%u vari�veis inteiras sem sinal (negativo)
%s para string ou char*
%f para double
%p para ponteiros
*/
