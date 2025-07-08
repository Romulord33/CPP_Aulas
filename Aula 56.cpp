#include <iostream>
#include <vector>

using namespace std;

void somador(){     //Sem usar o static a variável i foi declarada em todas as suas chamadas, então declarou uma nova variável i em uma nova posição da memória, por isso só imprimiu o número 1, pois o 0 incrementado de 1 é 1
	static int i=0;     //Quando usado o static é usado ele armazena a variável uma posição da memória e todas as vezes que ele for usar a variável ele vai usar o mesmo endereço da memória
	i++;
	cout << i << endl;
}

auto soma(double n1, double n2)->double{     //Preciso definir o tipo de retorno, no caso, return será do tipo double
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
	
	
	
	register int cont;     //Com o register o programa pede para que a variável fique armazenada em um registrador e não em um espaço da memória RAM, mas quem decide isso é o sistema. No registrador fica mais rápido para se acessar, uma vez que a variável estará no processador
	
	for(cont=0;cont<=10;cont++){
		cout << cont << endl;
	}
	
	vector<int>v{10,20,30,40,50,60,70};
	
	for(auto it3=v.begin();it3!=v.end();it3++){     //Usando o auto fica bem mais simples usar o iterator
		cout << *it3 << endl;
	}
	
	auto num=10;     //O auto pode declarar uma variável de qualquer tipo. Isso não torna a variável dinâmica, ou seja, não dá para fazer num="Giordani" logo abaixo. A declaração precisa ser na inicialização
	
	auto res=soma(10.3,5.2);
	cout << res << endl;
	
	auto n=canal();
	cout << n << endl;
		
	return 0;
}
