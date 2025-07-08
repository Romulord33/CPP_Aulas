#include <iostream>
#include "Aviao.h"     //Assim podemos usar todo o arquivo Aviao.h no programa. Eposso usar em quantos C++ nós quisermos dentor do projeto

using namespace std;

int main(){
	
	Aviao *av1=new Aviao(1);     //Com o método construtor, não precisa usar o método ini
	Aviao *av2=new Aviao(2);
	Aviao *av3=new Aviao(3);     //Lembrando que o av não tem relação com o tipo do avião, poderia muito bem ser   Aviao *av5=new Aviao(7);
	
	av1->imprimir();
	av2->imprimir();
	av3->imprimir();
		
	return 0;
}
