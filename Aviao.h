#ifndef AVIAO_H
#define AVIAO_H

class Aviao{
	
	public:
		int vel=0;
		int velMax;
		std::string tipo;
		Aviao(int tp);     //Não precisa declarar como void porque ele já está no construtor
		void imprimir();
	private:
		
};

Aviao::Aviao(int tp){     //1=Jato, 2=Monomotor, 3=Planador
	if(tp==1){
		tipo="Jato";     //Não precisa usar o this porque ele está direto no construtor
		velMax=800;
	}else if(tp==2){
		tipo="Monomotor";
		velMax=350;
	}else if(tp==3){
		tipo="Planador";
		velMax=180;
	}
}

void Aviao::imprimir(){
	std::cout << "Tipo............: " << tipo << std::endl;
	std::cout << "Velocidade maxima: " << velMax << std::endl;
	std::cout << "Velocidade atual.: " << vel << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

#endif

//O arquivo .h não é compilado, só é compilado com o arquivo C++
