#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
	string nome;
	int idade;
};

class Veiculo{
	public:
		int tipo;
		string nome;
};

int main(){
	
	int vetor[]{1,2,3,4,5,6,7,8,9};
	int num{10};
	string nome{"Romulo"};
	vector<int>valores{1,2,3,4,5};
	map<string,string>capitais{{"MG","Belo Horizonte"}};
	
	Pessoa p1{"Romulo",28};
	Pessoa p2{"Nome",100};
	
	Veiculo v1{1,"carango"};
	
	cout << num <<endl;
	
	for(vector<int>::iterator it=valores.begin();it!=valores.end();it++){
		cout << *it << endl;
	}
	
	for(map<string,string>::iterator it2=capitais.begin();it2!=capitais.end();it2++){
		cout << it2->first << " - " << it2->second << endl;
	}
	
	cout << p1.nome << " - " << p1.idade << endl;
	
	cout << v1.tipo << " - " << v1.nome << endl;
	
	cout << vetor[3] << endl;
	
	return 0;
}

//Inicialização uniforme usa-se as chaves ao invés da vírgula
