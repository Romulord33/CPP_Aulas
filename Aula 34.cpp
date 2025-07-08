#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velMax;
	int vel;
	
	void insere(string stnome, string stcor, int stpot, int stvelmax){
		nome=stnome;
		cor=stcor;
		pot=stpot;
		velMax=stvelmax;
	}
	
	void mostra(){
		cout << "Nome.............: " << nome << "\n\n";
		cout << "Cor..............: " << cor << "\n";
		cout << "Potencia.........: " << pot << "\n";
		cout << "Velocidade atual.: " << vel << "\n";
		cout << "Velocidade maxima: " << velMax << "\n\n";
	}
	
	void mudaVel(int mv){
		vel=mv;
		if(vel>velMax){
			vel=velMax;
		}
		if(vel<0){
			vel=0;
		}
	}
};

int main(){
	
	Carro car1;
	Carro car2;
	
	car1.insere("Tornado", "Vermelho",450,350);
	car2.insere("Luxo", "Preto",250,260);
	
	car1.mostra();
	car2.mudaVel(150);
	car2.mostra();7
		
	return 0;
}	

