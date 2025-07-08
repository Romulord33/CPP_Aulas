#ifndef CLASSES3_H
#define CLASSES3_H

class Base1{
	public:
		void impBase1();		
};

void Base1::impBase1(){
	std::cout << "Imprime a classe Base1" << std::endl;
}

class Base2{
	public:
		void impBase2();
};

void Base2::impBase2(){
	std::cout << "Imprime a classe Base2" << std::endl;
}

class CFB:public Base1, public Base2{     //A classe CFB é uma classe que herda características de Base1 e Base2
	
};

#endif
