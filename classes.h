#ifndef CLASSES_H
#define CLASSES_H

class Veiculo{
	
	public:
		int vel;
		int tipo;
		Veiculo(int tp);     //O m�todo construtor � o m�todo que � chamado automaticamente quando estancio um objeto dessa classe
		int getvelMax();
		bool getLigado();
		void setLigado(int l);
	private:
		void setvelMax(int vm);     //Assim s� pode alterar a velocidade dos ve�culos dentro do m�todo
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

Veiculo::Veiculo(int tp){     //Estou declarando o m�todo construtor para a classe veiculo
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
	setLigado(0);     //O ve�culo j� inicia desligado
}

//As propriedades e m�todos privados s� podem ser manipulados pela pr�pria classe. Ent�o eu preciso de um m�todo para manipular esses elementos

#endif
