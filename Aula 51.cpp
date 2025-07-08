#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream arquivoS;
	
	arquivoS.open("cfbcursos.txt");
	
	arquivoS << "Texto\n";
	arquivoS << "Romulo\n";
	arquivoS << "Giordani\n";
	
	arquivoS.close();
	
	ifstream arquivoE;
	string linha;
	arquivoE.open("cfbcursos.txt");
	if(arquivoE.is_open()){     //Para verificar se o arquivo j� est� aberto
		while(getline(arquivoE,linha)){
			cout << linha << endl;
		}
	}else{
		cout << "N�o foi possivel abrir o arquivo." << endl;
	}
	arquivoE.close();
	
	return 0;
}

/*
arquivoS -> arquivo para sa�da
arquivoE -> arquivo para entrada
*/

