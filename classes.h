#ifndef CLASSES_H
#define CLASSES_H

class Veiculo{
	
	public:
		int vel;
		int tipo;
		Veiculo(int tp);     //O método construtor é o método que é chamado automaticamente quando estancio um objeto dessa classe
		int getvelMax();
		bool getLigado();
		void setLigado(int l);
	private:
		void setvelMax(int vm);     //Assim só pode alterar a velocidade dos veículos dentro do método
		std::string nome;
		int velMax;
		bool ligado;
};

bool Veiculo::getLigado(){
	return ligado;
}

void Veiculo::setLigado(int l){
	if(l==1){
		ligado=true;
	}else if(l==0){
		ligado=false;
	}
}

int Veiculo::getvelMax(){
	return velMax;
}

void Veiculo::setvelMax(int vm){
	velMax=vm;
}

Veiculo::Veiculo(int tp){     //Estou declarando o método construtor para a classe veiculo
	tipo=tp;
	if(tipo==1){
		nome="Carro";
		setvelMax(200);
	}else if(tipo==2){
		nome="Aviao";
		velMax=800;
	}if(tipo==3){
		nome="Navio";
		velMax=120;
	}
	setLigado(0);     //O veículo já inicia desligado
}

//As propriedades e métodos privados só podem ser manipulados pela própria classe. Então eu preciso de um método para manipular esses elementos

#endif
