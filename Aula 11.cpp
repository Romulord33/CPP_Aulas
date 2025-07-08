#include <iostream>

using namespace std;

int main(){
	
	/*
		AND &&
		OR  ||
		NOT !
	*/
	
	int num1, num2, num3;
	
	/*
		1 2 3 4 5 6 7 8 9 10
		>4 e <7
	*/
	
	cout << "Digite o valor para AND: ";
	cin >> num1;
	cout << "Digite o valor para OR: ";
	cin >> num2;
	cout << "Digite o valor para o teste 3: ";
	cin >> num3;
		
	if(num1>4 && num1<7){
		cout << "\n\nValor do AND aceito\n";
	}else{
		cout << "\n\nValor do AND nao aceito\n";
	}
	
	/*
		1 2 3 4 5 6 7 8 9 10
		<3 ou >8
	*/
	
	if(num2<3 || num2>8){
		cout << "\n\nValor do OR aceito\n";
	}else{
		cout << "\n\nValor do OR nao aceito\n";
	}
	
	/*
		1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
		3 a 6
		10 a 14
		16 a 19
	*/
	
	if((num3>=3 && num3<=6) || (num3>=10 && num3<=14) || (num3>=16 && num3<=19)){
		cout << "\n\nValor do teste 3 aceito\n";
	}else{
		cout << "\n\nValor do teste 3 nao aceito\n";
	}
	
	
	return 0;
}
