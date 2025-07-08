#include <iostream>
#include <vector>

using namespace std;

void somador(){     //Sem usar o static a vari�vel i foi declarada em todas as suas chamadas, ent�o declarou uma nova vari�vel i em uma nova posi��o da mem�ria, por isso s� imprimiu o n�mero 1, pois o 0 incrementado de 1 � 1
	static int i=0;     //Quando usado o static � usado ele armazena a vari�vel uma posi��o da mem�ria e todas as vezes que ele for usar a vari�vel ele vai usar o mesmo endere�o da mem�ria
	i++;
	cout << i << endl;
}

auto soma(double n1, double n2)->double{     //Preciso definir o tipo de retorno, no caso, return ser� do tipo double
	return n1+n2;
}

string canal(){
	return "CFB Cursos";
}

int main(){
	
	somador();
	somador();		
	somador();
	somador();
	somador();
	somador();
	somador();
	
	cout << "\n\n";
	
	
	
	register int cont;     //Com o register o programa pede para que a vari�vel fique armazenada em um registrador e n�o em um espa�o da mem�ria RAM, mas quem decide isso � o sistema. No registrador fica mais r�pido para se acessar, uma vez que a vari�vel estar� no processador
	
	for(cont=0;cont<=10;cont++){
		cout << cont << endl;
	}
	
	vector<int>v{10,20,30,40,50,60,70};
	
	for(auto it3=v.begin();it3!=v.end();it3++){     //Usando o auto fica bem mais simples usar o iterator
		cout << *it3 << endl;
	}
	
	auto num=10;     //O auto pode declarar uma vari�vel de qualquer tipo. Isso n�o torna a vari�vel din�mica, ou seja, n�o d� para fazer num="Giordani" logo abaixo. A declara��o precisa ser na inicializa��o
	
	auto res=soma(10.3,5.2);
	cout << res << endl;
	
	auto n=canal();
	cout << n << endl;
		
	return 0;
}
