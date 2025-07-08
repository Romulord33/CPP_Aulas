#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<string>produtos={"mouse","teclado","monitor","gabinete","cx.som"};
	vector<string>::iterator it;
	
	//it=produtos.begin();     //Caso seja o �ltimo elemento, deve-se usar end()-1 j� que come�a a contagem do zero
	
	for(it=produtos.begin();it!=produtos.end();it++){     //for(vector<string>::iterator it=produtos.begin();it!=produtos.end();it++)     assim n�o precisa declarar antes, j� faz tudo dentro do for
		cout << *it << endl;
	}
	
	//advance(it,3);     //�ndice 3, n�o tr�s casas
	//next(it,3);     //Mesma coisa do advance
	
	//cout << *prev(it,3) << endl;
	
	
	return 0;
}

//Iterator ele � a estrutura que vai permitir a navega��o entre os itens de uma cole��o de forma f�cil

/* 
--------------------Caso d� problemas ao compilar o programa--------------------
Ferramentas -> Op��es do Compilador -> Configura��es -> Gera��o de c�digo -> Padr�o da linguagem (-std) : coloca "ISO C++11"
*/
