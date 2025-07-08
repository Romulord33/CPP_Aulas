#include <iostream>

using namespace std;

int main(){
	
	int matriz[3][4];     //Podemos considerar como uma tabela de 3 linhas e 4 colunas
	int l, c;
	
	for(l=0; l<3; l++){     //Matriz sendo preenchida automaticamente pelo comando for
		for(c=0; c<4; c++){
			matriz[l][c]=l;    // cin >> matriz[l][c];     Um método para o usuário colocar o número que eu ele quiser na matriz
		}
	}
	
	/*
	matriz[0][0]=0;
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[0][3]=0;
	matriz[1][0]=1;
	matriz[1][1]=1;
	matriz[1][2]=1;
	matriz[1][3]=1;
	matriz[2][0]=2;
	matriz[2][1]=2;
	matriz[2][2]=2;
	matriz[2][3]=2;
	*/
	
	for(l=0; l<3; l++){
		for(c=0; c<4; c++){
			cout << matriz [l][c] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
