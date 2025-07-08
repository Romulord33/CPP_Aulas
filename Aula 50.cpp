#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream arquivo;
	
	arquivo.open("cfbcursos.txt",ios::app);     //quando rodamos o programa, o mesmo já cria o arquivo  //Com o ios::app ele vai adicionar o próximo conteúdo sem sobrescrever o anterior
	
	arquivo << "Texto\n";     //O \n vai adicionar o texto e dar uma quebra de linha no conteúdo anterior
	arquivo << "Romulo\n";
	arquivo << "Giordani\n";
	
	arquivo.close();     //è bom fechar para liberar memória
	
	return 0;
}

/*
ofstream -> a informação sai do sistema e vai para o arquivo 
ifstream -> a informação sai do arquivo e vai para o sistema
fstream --> pode ser configurado tanto como entrada quanto saída
*/
