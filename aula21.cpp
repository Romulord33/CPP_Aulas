#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
	
	if(argc > 1){
		if(!strcmp(argv[1],"sol")){
			cout << "Vou ao clube.\n\n";
		}else if(!strcmp(argv[1],"nublado")){
			cout << "Vou ao cinema.\n\n";
		}else{
			cout << "Vou ficar em casa.\n\n";
		}
	}
	
	return 0;
}




//argv guarda a quantidade de par�metros informado. Ele armazena a quantidade de argumantos (do tipo int)
//argv � um ponteiro para uma matriz de ponteiros de caracteres. Ele armazena os argumentos (do tipo char)
//O primeiro argumento � o nome do programa por padr�o
//Os par�metros podem ser passados via pronpt de comando
