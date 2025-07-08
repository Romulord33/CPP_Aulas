#include <iostream>

using namespace std;

//void imp(string txt="");     Quando é protoripado dessa forma o programa entende que está sendo passado um valor padrao para aquela função. Deve-se colocar isso quando for prototipado
void imp(string ="Romulo");

int main(){
	
	imp("Giordani");     //O progrtama vai levar o valor escrito na chamada da função. Só usaria o argumento no protótipo caso fosse omitido o valor na chamada da função
	
	return 0;
}

void imp(string txt){
	cout << "\n" << txt << "\n";
}
