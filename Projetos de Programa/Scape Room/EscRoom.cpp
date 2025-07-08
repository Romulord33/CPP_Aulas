#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <cstdio>
#include <ctime>

using namespace std;
void txtIni();
void cama();
void armario();
void porta();

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int opc0;  
    int i;

	system("color 04");
    cout << "ESCAPE ROOM\n" <<endl;
    system("pause");
    system("cls");
    
    //txtIni();
 
    cin >> opc0;
    system("cls");
    
    if(opc0==1){
        cama();
    }else if(opc0==2){
        armario();
    }else if(opc0==3){
        porta();
    }
	
    return 0;
}

void txtIni(){
	
	int tmp;
	
	cout << "Voc� entra em uma sala e fecha a porta\n";
	getchar();
    cout << "Que criatura mais estranha era aquela";
    for(tmp=0; tmp<500000000; tmp++);
    cout << ".";
    for(tmp=0; tmp<500000000; tmp++);
    cout << ".";
    for(tmp=0; tmp<500000000; tmp++);
    cout << ".\n";
    getchar();
	cout << "Naquele momento j� parecia que os seus sentidos tra�am seu c�rebro\n";
    getchar();
    cout << "Parecia humano, mas ao mesmo tempo algo dentro de voc� dizia que n�o\n";
    getchar();
    cout << "A �nica op��o de sobreviv�ncia � fugir ou se esconder e a escurid�o est� ao seu favor,\npor mais ir�nico que isso possa soar...";
    getchar();
    system("cls");
    cout << "Ainda ofegante voc� procura uma escapat�ria e encontra tr�s alternativas de se esconder:" << endl;
    for(tmp=0; tmp<1600000000; tmp++);
    cout << "[1] Embaixo da cama" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "[2] Dentro do arm�rio" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "[3] Atr�s da porta\n" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "Fa�a a sua escolha: ";
}



void cama(){
    
    int tmp;
    int opc1;
    unsigned seed=time(0);
    int decisao;
    
    cout << "Voc� se esgueira por debaixo da cama com um pouco de dificuldade da altura dos p�s do m�vel." << endl;
    getchar();
    cout << "O ser monstruoso abre a porta. Voce sente o suor frio escorrer pela sua pele e seus pelos levantarem." << endl;
    getchar();
	cout << "Pela fresta que lhe eh permitido enxergar voce ve lhe procurando " << endl;
    getchar();
    
    
    
    srand(seed);
    decisao=rand()%4;
    
    if(decisao==0){
    	cout << "O monstro levanta a cama e joga para o lado, \nvoc� � pego pela perna e � lan�ado contra a parede fraturando seus ossos.";
	}else if(decisao==1){
		cout << "O monstro ergue a cama e te esmaga com ela";
	}else if(decisao==2){
		cout << "O monstro joga a cama para o lado e pula em cima de si, \ncomo uma besta ele te destro�a todo com suas garras e voc� morre.";
	}else if(decisao==3){
		cout << "O monstro acaba puxando voc� pela perna \ne te joga de um lado para o outro como se fosse uma boneca de pano.";
	}
    
    
/*
- Ele pode levantar e tombar a cama para o lado:
    Pode usar a propria cama para te esmagar;
    Pode te jogar na parede e te matar;
    Pode pular em cima de voce e te rasgar todo;
    
-Ele pode puxar sua perna


*/
}    

void armario(){
	
	int tmp;
	int opc1;
	unsigned seed=time(0);
	int deciArm;
	int decisao;
	string escrita="abracadabra";
	string senha;
	
	cout << "Voc� sai em disparado em dire��o ao arm�rio e abre rapidamente a porta que faz bastante barulho." << endl;
	getchar();
	cout << "Inspeciona para saber se n�o ter� nenhuma surpresa dentro dele." << endl;
	getchar();
	cout << "Sua intui��o pede para que voc� d� uma verificada melhor dentro do arm�rio, pois pode haver algo de seu interesse ali " << endl;
	getchar();
	cout << "A luz est� t�o reduzida que s� � poss�vel verificar com a porta do arm�rio aberta e voc� do lado de fora." << endl;
	getchar();
	cout << "Metade de voc� quer fazer isso, mas a outra metade recusa-se sabendo que � arriscado ficar do lado de fora \ncom um monstro � espreita." << endl;
	getchar();
	system("cls");
	cout << "Uma decis�o deve ser tomada:\n" << endl;
	for(tmp=0; tmp<700000000; tmp++);
    cout << "[1] inspecionar o arm�rio" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "[2] Entrar logo nele\n" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
	cout << "Oque voc� faz?" << endl;
	cin >> opc1;
	
	if(opc1==1){
		cout << "� melhor dar mesmo uma olhada se n�o tem algo aqui que me ajude a escapar \nou quem sabe at� matar o monstro" << endl;
		getchar();
		system("cls");
		cout << "Voc� ent�o come�a a procurar por algo, olha para um lado, olha para o outro e nada." << endl;
		getchar();
		system("cls");
		cout << ".";
		for(tmp=0; tmp<500000000; tmp++);
		cout << ".";
		for(tmp=0; tmp<500000000; tmp++);
		cout << ".";
		for(tmp=0; tmp<500000000; tmp++);
		system("cls");
		cout << "At� que voc� encontra um c�digo: abracadabra" << endl;
		getchar();
		cout << "Voc� memoriza e entra no arm�rio j� que come�a a ouvir os passos da criatura muito pr�ximos." << endl;
		getchar();
		system("cls");
		
		srand(seed);
		deciArm=rand()%2;
		if(deciArm==0){
			cout << "Voc� entra r�pido o suficiente para que o monstro n�o te pegue." << endl;
			getchar();
			cout << "O monstro entra pela porta" << endl;
			getchar();
			cout << "Ele fareja te procurando, mas n�o te acha" << endl;
			getchar();
			cout << "Levanta a cama" << endl;
			getchar();
			cout << "Olha para os lados" << endl;
			getchar();
			system("cls");
			cout << ".";
			for(tmp=0; tmp<500000000; tmp++);
			cout << ".";
			for(tmp=0; tmp<500000000; tmp++);
			cout << ".";
			for(tmp=0; tmp<500000000; tmp++);
			system("cls");
			cout << "Sem saber onde voc� est� ele desiste da procura e vai embora" << endl;
			getchar();
			cout << "Voc� sai devagar para n�o chamar aten��o dele \ne procura por alguma pista de como usar aquela palavra que fora encontrada por ti" << endl; 
			getchar();
			cout << "At� que ent�o voc� fecha a porta para que n�o vaze nenhum barulho ou cheiro seu" << endl;
			getchar();
			cout << "Eis que voc� acha algo escrito na parede:\nCom magia pode-se fugir de sua realidade" << endl;
			getchar();
			cout << "N�o faz o menor sentido para voc�, mas ent�o vem um estalo � sua mente!" << endl;
			getchar();
			cout << "Voc� decide dizer a palavra que voc� viu no arm�rio.\nN�o fazia o menor sentido, mas o que fazia sentido naquele lugar?" << endl;
			getchar();
			cout << "Ent�o voc� diz: ";
			cin >> senha;
			if(escrita==senha){
				cout << "Uma trava parece se abrir embaixo dos seus p�s e voc� escapa" << endl;
				cout << "FIM" << endl;
			}else{
				system("cls");
				cout << "Voc� diz a palavra em voz alta, mas nada acontece" << endl;
				getchar();
				cout << "Voc� ouve os passos do monstro pararem e o seu cora��o acelerar" << endl;
				getchar();
				cout << "Ele volta para o quarto correndo, te acha e te mata\n" << endl;
				cout << "FIM" << endl;
			} 
			
			
			
		}else if(deciArm==1){
			cout << "Antes de voc� entrar no arm�rio a criatura entra pelo quarto quebrando a porta." << endl;
			getchar();
			cout << "Seu tempo de rea��o n�o � o suficiente para conseguir fugir ou lutar e o monstro te mata rapidamente." << endl;
			cout << "FIM" << endl;
			system("pause");
		}
	}else if(opc1==2){
		cout << "Por qu� voc� perderia tempo procurando algo que talvez salve sua vida \nsendo que voc� pode efetivamente salvar sua vida?" << endl;
		cout << "Que ideia mais besta a minha..." << endl;
	}
	
	/* Decis�es que o monstro pode tomar:
		- Abrir a porta e te achar
		- Atravessar a porta com as suas garras e j� te matar direto
		- Derrubar o arm�rio com voc� dentro
	
	*/
}

void porta(){
	
	int opc3;
	
	cout << "Por mais bobo que fosse, aparentemente funcionou.";
}

    

/*     Insights

- S�o 3 locais onde pode se esconder: Arm�rio, cama e atr�s da porta
- � preciso uma descri��o do que o monstro faz para procurar sua v�tima, por exemplo: entrar na sala e ficar olhando de um lado para o outro, tentando sentir o cheiro, etc

*/

