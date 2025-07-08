#include <iostream>

using namespace std;

void somar(float *var, float valor);
void iniVetor(float *v);

int main(){
	
	float num=0;
	float vetor[5];
	
	somar(&num,15);     //Agora � operado no endere�o da variavel num, n�o ir� usar outro endere�o de mem�ria. Pois sem o ponteiro o programa n�o enxerga a vari�vel
	iniVetor(vetor);     //Quande � vetor n�o precisa especificar o endere�o
	
	cout << "\n" << num << "\n\n";
	
	for(int i=0; i<5; i++){
		cout << vetor[i] << "\n";
	}
	
	return 0;
}

void somar(float *var, float valor){
	*var+=valor;
}

void iniVetor(float *v){
	v[0]=0;     //N�o precisa indicar que � um vetor, no caso, colocar *v[0]=0
	v[1]=0;
	v[2]=0;
	v[3]=0;
	v[4]=0;
}
