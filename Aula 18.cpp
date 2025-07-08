#include <iostream>

using namespace std;

int main(){
	
	int vetor[5];     // = vetor0, vetor1, vetor2, ...   Um vetor com 10 posições onde cada posição pode receber um valor
					  //int vetor[5]={10, 20, 30, 40, 50};    Posso declarar o valor dos meus vetores assim também ao invés de declarar linha por linha
	int i;
	
	vetor[0]=10;     //Na posição 0 do meu array/vetor tem agora o valor 10
	vetor[1]=20;
	vetor[3]=40;
	vetor[4]=50;
	
	for(i=0; i<sizeof(vetor)/4; i++){     //O sizeof pega o tamanho do vetor (4 Bytes) e multiplica por 5 nesse caso já que é um vetor de 5 posições que é o tamanho total que vai ficar alocado na memória. Para essa solução, devemos dividir pelo tamanho de Bytes qua cada vetor ocupará. Esse processo é feito justamente para que se nós quisermos adicionar mais posições de vetores nós não precisemos ir até o for para ajustar tamanho limitador do for. Com esse esquema ele já vai "saber" quantos vetores existem automaticamente
		cout << vetor[i] << "\n";
	}
	
	
	return 0;
}


/*
for(i=0; i<5; i++){     //O i será utilizado para as posições dos vetores
		cout << vetor[i] << "\n";
	}
*/
