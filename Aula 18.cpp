#include <iostream>

using namespace std;

int main(){
	
	int vetor[5];     // = vetor0, vetor1, vetor2, ...   Um vetor com 10 posi��es onde cada posi��o pode receber um valor
					  //int vetor[5]={10, 20, 30, 40, 50};    Posso declarar o valor dos meus vetores assim tamb�m ao inv�s de declarar linha por linha
	int i;
	
	vetor[0]=10;     //Na posi��o 0 do meu array/vetor tem agora o valor 10
	vetor[1]=20;
	vetor[3]=40;
	vetor[4]=50;
	
	for(i=0; i<sizeof(vetor)/4; i++){     //O sizeof pega o tamanho do vetor (4 Bytes) e multiplica por 5 nesse caso j� que � um vetor de 5 posi��es que � o tamanho total que vai ficar alocado na mem�ria. Para essa solu��o, devemos dividir pelo tamanho de Bytes qua cada vetor ocupar�. Esse processo � feito justamente para que se n�s quisermos adicionar mais posi��es de vetores n�s n�o precisemos ir at� o for para ajustar tamanho limitador do for. Com esse esquema ele j� vai "saber" quantos vetores existem automaticamente
		cout << vetor[i] << "\n";
	}
	
	
	return 0;
}


/*
for(i=0; i<5; i++){     //O i ser� utilizado para as posi��es dos vetores
		cout << vetor[i] << "\n";
	}
*/
