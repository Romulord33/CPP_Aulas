#include <iostream>

using namespace std;

//void imp(string txt="");     Quando � protoripado dessa forma o programa entende que est� sendo passado um valor padrao para aquela fun��o. Deve-se colocar isso quando for prototipado
void imp(string ="Romulo");

int main(){
	
	imp("Giordani");     //O progrtama vai levar o valor escrito na chamada da fun��o. S� usaria o argumento no prot�tipo caso fosse omitido o valor na chamada da fun��o
	
	return 0;
}

void imp(string txt){
	cout << "\n" << txt << "\n";
}
