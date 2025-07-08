#include <iostream>
#include <stdio.h>     //Para usar a função gets
#include <stdlib.h>     //Para a funçaõ malloc

using namespace std;

int main(){
	
	char *vnome;
	vnome = (char *) malloc(sizeof(char));     //A função malloc ela tem o retorno void. (char *) é um tape cast para transformar o malloc de void para char. (sizeof(char)) é para indicar o tamanho do de cada bloco que o malloc vai fazer dinamicamente a reserva na memória
	//Assim o programa vai alocar o espaço ideal na memória, caso o programa fosse limitado a um valor fixo, poderia alocar memória demais ou de menos
	gets(vnome);     //Assim dá para colocar o nome com espaço. Se fosse o cin até daria, mas a função entende o espaço como "um caracter que termina a palavra"
	
	
	cout << vnome;
	
	return 0;
}
