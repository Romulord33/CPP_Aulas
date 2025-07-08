#include <iostream>

using namespace std;

struct Carro{    //Declarando propriedades para essa struct
	string nome;
	string cor;
	int pot;
	int velMax;
};

int main(){
	
	Carro car1;     //É como se estivesse sendo declarada uma variável car1 do tipo Carro
	Carro car2;
	
	car1.nome="Tronado";
	car1.cor="Vermelho";
	car1.pot=450;
	car1.velMax=350;
	
	car2.nome="Luxo";
	car2.cor="Preto";
	car2.pot=250;
	car2.velMax=260;
	
	cout << "Nome.............: " << car1.nome << "\n";
	cout << "Cor..............: " << car1.cor << "\n";
	cout << "Potencia.........: " << car1.pot << "\n";
	cout << "Velocidade maxima: " << car1.velMax << "\n\n";
	
	cout << "Nome.............: " << car2.nome << "\n";
	cout << "Cor..............: " << car2.cor << "\n";
	cout << "Potencia.........: " << car2.pot << "\n";
	cout << "Velocidade maxima: " << car2.velMax << "\n\n";
	
	return 0;
}

//Cada elemento tem suas variáveis independentes
