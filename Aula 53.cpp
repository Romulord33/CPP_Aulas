#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<string>produtos={"mouse","teclado","monitor","gabinete","cx.som"};
	vector<string>::iterator it;
	
	//it=produtos.begin();     //Caso seja o último elemento, deve-se usar end()-1 já que começa a contagem do zero
	
	for(it=produtos.begin();it!=produtos.end();it++){     //for(vector<string>::iterator it=produtos.begin();it!=produtos.end();it++)     assim não precisa declarar antes, já faz tudo dentro do for
		cout << *it << endl;
	}
	
	//advance(it,3);     //Índice 3, não três casas
	//next(it,3);     //Mesma coisa do advance
	
	//cout << *prev(it,3) << endl;
	
	
	return 0;
}

//Iterator ele é a estrutura que vai permitir a navegação entre os itens de uma coleção de forma fácil

/* 
--------------------Caso dê problemas ao compilar o programa--------------------
Ferramentas -> Opções do Compilador -> Configurações -> Geração de código -> Padrão da linguagem (-std) : coloca "ISO C++11"
*/
