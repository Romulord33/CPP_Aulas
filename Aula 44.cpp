#include <iostream>

using namespace std;

class Aviao{
	public:
		int vel=0;
		int velMax;
		string tipo;
		void ini (int tp);
			
	private:	
		
	};

void Aviao::ini(int tp){     //1=Jato, 2=Monomotor, 3=Planador
	if(tp==1){
		this->velMax=800;     //Para esta classe, recebe velocidade máxima (velMax) de 800
		this->tipo="Jato";
	}else if(tp==2){
		this->velMax=350;
		this->tipo="Monomotor";
	}else if(tp==3){
		this->velMax=180;
		this->tipo="Planador";
	}
} 

int main(){
	
	Aviao *av1=new Aviao();
	Aviao *av2=new Aviao();
	Aviao *av3=new Aviao();
	
	av1->ini(1);
	av2->ini(2);
	av3->ini(3);
	
	cout << "Velocidade maxima do " << av1->tipo << " sera de " << av1->velMax << endl;
	cout << "Velocidade maxima do " << av2->tipo << " sera de " << av2->velMax << endl;
	cout << "Velocidade maxima do " << av3->tipo << " sera de " << av3->velMax << endl;
	return 0;
}

//Objetos são instâncias das classes
