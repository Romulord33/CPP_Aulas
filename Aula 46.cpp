#include <iostream>
#include "classes.h"

using namespace std;

int main(){
	
	Veiculo *v1=new Veiculo(1);
	Veiculo *v2=new Veiculo(2);
	Veiculo *v3=new Veiculo(3);
	
	v1->setLigado(1);
	v2->setLigado(0);
	v3->setLigado(1);
	
	cout << v1->getvelMax() << endl;
	cout << v2->getvelMax() << endl;
	cout << v3->getvelMax() << endl;
	
	if(v1->getLigado()){
		cout << "vaiculo 1 esta ligado." << endl;
	}else{
		cout << "Veiculo 1 esta desligado." << endl;
	}
	if(v2->getLigado()){
		cout << "vaiculo 2 esta ligado." << endl;
	}else{
		cout << "Veiculo 2 esta desligado." << endl;
	}
	if(v3->getLigado()){
		cout << "vaiculo 3 esta ligado." << endl;
	}else{
		cout << "Veiculo 3 esta desligado." << endl;
	}
	
	return 0;
}
