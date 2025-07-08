#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream arquivo;
	
	arquivo.open("cfbcursos.txt",ios::app);     //quando rodamos o programa, o mesmo j� cria o arquivo  //Com o ios::app ele vai adicionar o pr�ximo conte�do sem sobrescrever o anterior
	
	arquivo << "Texto\n";     //O \n vai adicionar o texto e dar uma quebra de linha no conte�do anterior
	arquivo << "Romulo\n";
	arquivo << "Giordani\n";
	
	arquivo.close();     //� bom fechar para liberar mem�ria
	
	return 0;
}

/*
ofstream -> a informa��o sai do sistema e vai para o arquivo 
ifstream -> a informa��o sai do arquivo e vai para o sistema
fstream --> pode ser configurado tanto como entrada quanto sa�da
*/
