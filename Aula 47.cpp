#include <iostream>
#include "classes2.h"

using namespace std;

int main(){
	
	Moto *v1=new Moto();
	Carro *v2=new Carro();
	Caminhao *v3=new Caminhao();
	Tanque *v4=new Tanque();
	
	v1->imp();
	v2->imp();
	v3->imp();
	v4->imp();
	
	return 0;
}
