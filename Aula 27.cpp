#include <iostream>

using namespace std;

int main(){
	
	enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1};     //Por padr�o o enum faz uam sequ�cia � partir da primeira vari�vel. No nosso exemplo ser� fuzil=0, revolver=1, rifle=2, escopeta=3. Caso seja colocado fuzil=100, o revolver vai ser 101 e assim por diante
	
	armas armaSel;     //� como se fosse uma declara��o int num;
	armaSel=fuzil;
	
	cout << armaSel;
	
	return 0;
}
