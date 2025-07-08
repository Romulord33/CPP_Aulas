#ifndef CALSSES2_H
#define CALSSES2_H

class Veiculo{
	public:
		int vel;
		int blind;
		int rodas;
		void setTipo(int tp);
		void setvelMax(int vm);
		void setArma(bool ar);
		void imp();
	private:
		int tipo;     //1-Moto, 2-Carro, 3-Caminhão, 4-Tanque
		int velMax;
		bool arma;
};

void Veiculo::imp(){
	std::cout << "Tipo do veiculo....: "  << tipo << std::endl;
	std::cout << "Velocidade maxima..: "  << velMax << std::endl;
	std::cout << "Quantidade de rodas: "  << rodas << std::endl;
	std::cout << "Blindagem..........: "  << blind << std::endl;
	std::cout << "Armamento..........: "  << arma << std::endl;
	std::cout << "--------------------------"  << std::endl;
	
}
void Veiculo::setTipo(int tp){
	tipo=tp;
}

void Veiculo::setvelMax(int vm){
	velMax=vm;
}

void Veiculo::setArma(bool ar){
	arma=ar;
}

class Moto:public Veiculo{     //Está sendo criada uma classe Moto que herda todos os elementos da classe Veiculo. Essa é a classe pai
	public:
		Moto();
};

Moto::Moto(){     //Essa é a classe filho
	vel=0;
	blind=0;
	rodas=2;
	setTipo(1);
	setvelMax(120);
	setArma(false);
}

class Carro:public Veiculo{
	public:
		Carro();
};

Carro::Carro(){
	vel=0;
	blind=0;
	rodas=4;
	setTipo(2);
	setvelMax(180);
	setArma(false);
}

class Caminhao:public Veiculo{
	public:
	Caminhao();
};

Caminhao::Caminhao(){
	vel=0;
	blind=0;
	rodas=8;
	setTipo(3);
	setvelMax(100);
	setArma(false);
}

class Tanque:public Veiculo{
	public:
	Tanque();
};

Tanque::Tanque(){
	vel=0;
	blind=1;
	rodas=8;
	setTipo(4);
	setvelMax(200);
	setArma(true);
}
	
#endif
