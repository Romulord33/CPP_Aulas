#include <iostream>
#include <stdio.h>     //Para usar a fun��o gets
#include <stdlib.h>     //Para a fun�a� malloc

using namespace std;

int main(){
	
	char *vnome;
	vnome = (char *) malloc(sizeof(char));     //A fun��o malloc ela tem o retorno void. (char *) � um tape cast para transformar o malloc de void para char. (sizeof(char)) � para indicar o tamanho do de cada bloco que o malloc vai fazer dinamicamente a reserva na mem�ria
	//Assim o programa vai alocar o espa�o ideal na mem�ria, caso o programa fosse limitado a um valor fixo, poderia alocar mem�ria demais ou de menos
	gets(vnome);     //Assim d� para colocar o nome com espa�o. Se fosse o cin at� daria, mas a fun��o entende o espa�o como "um caracter que termina a palavra"
	
	
	cout << vnome;
	
	return 0;
}
