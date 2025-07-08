#include <iostream>

using namespace std;

int main(){
	
	enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1};     //Por padrão o enum faz uam sequêcia à partir da primeira variável. No nosso exemplo será fuzil=0, revolver=1, rifle=2, escopeta=3. Caso seja colocado fuzil=100, o revolver vai ser 101 e assim por diante
	
	armas armaSel;     //É como se fosse uma declaração int num;
	armaSel=fuzil;
	
	cout << armaSel;
	
	return 0;
}
