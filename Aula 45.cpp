#include <iostream>
#include "Aviao.h"     //Assim podemos usar todo o arquivo Aviao.h no programa. Eposso usar em quantos C++ n�s quisermos dentor do projeto

using namespace std;

int main(){
	
	Aviao *av1=new Aviao(1);     //Com o m�todo construtor, n�o precisa usar o m�todo ini
	Aviao *av2=new Aviao(2);
	Aviao *av3=new Aviao(3);     //Lembrando que o av n�o tem rela��o com o tipo do avi�o, poderia muito bem ser   Aviao *av5=new Aviao(7);
	
	av1->imprimir();
	av2->imprimir();
	av3->imprimir();
		
	return 0;
}
