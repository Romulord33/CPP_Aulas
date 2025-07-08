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
	
	cout << "Você entra em uma sala e fecha a porta\n";
	getchar();
    cout << "Que criatura mais estranha era aquela";
    for(tmp=0; tmp<500000000; tmp++);
    cout << ".";
    for(tmp=0; tmp<500000000; tmp++);
    cout << ".";
    for(tmp=0; tmp<500000000; tmp++);
    cout << ".\n";
    getchar();
	cout << "Naquele momento já parecia que os seus sentidos traíam seu cérebro\n";
    getchar();
    cout << "Parecia humano, mas ao mesmo tempo algo dentro de você dizia que não\n";
    getchar();
    cout << "A única opção de sobrevivência é fugir ou se esconder e a escuridão está ao seu favor,\npor mais irônico que isso possa soar...";
    getchar();
    system("cls");
    cout << "Ainda ofegante você procura uma escapatória e encontra três alternativas de se esconder:" << endl;
    for(tmp=0; tmp<1600000000; tmp++);
    cout << "[1] Embaixo da cama" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "[2] Dentro do armário" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "[3] Atrás da porta\n" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "Faça a sua escolha: ";
}



void cama(){
    
    int tmp;
    int opc1;
    unsigned seed=time(0);
    int decisao;
    
    cout << "Você se esgueira por debaixo da cama com um pouco de dificuldade da altura dos pés do móvel." << endl;
    getchar();
    cout << "O ser monstruoso abre a porta. Voce sente o suor frio escorrer pela sua pele e seus pelos levantarem." << endl;
    getchar();
	cout << "Pela fresta que lhe eh permitido enxergar voce ve lhe procurando " << endl;
    getchar();
    
    
    
    srand(seed);
    decisao=rand()%4;
    
    if(decisao==0){
    	cout << "O monstro levanta a cama e joga para o lado, \nvocê é pego pela perna e é lançado contra a parede fraturando seus ossos.";
	}else if(decisao==1){
		cout << "O monstro ergue a cama e te esmaga com ela";
	}else if(decisao==2){
		cout << "O monstro joga a cama para o lado e pula em cima de si, \ncomo uma besta ele te destroça todo com suas garras e você morre.";
	}else if(decisao==3){
		cout << "O monstro acaba puxando você pela perna \ne te joga de um lado para o outro como se fosse uma boneca de pano.";
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
	
	cout << "Você sai em disparado em direção ao armário e abre rapidamente a porta que faz bastante barulho." << endl;
	getchar();
	cout << "Inspeciona para saber se não terá nenhuma surpresa dentro dele." << endl;
	getchar();
	cout << "Sua intuição pede para que você dê uma verificada melhor dentro do armário, pois pode haver algo de seu interesse ali " << endl;
	getchar();
	cout << "A luz está tão reduzida que só é possível verificar com a porta do armário aberta e você do lado de fora." << endl;
	getchar();
	cout << "Metade de você quer fazer isso, mas a outra metade recusa-se sabendo que é arriscado ficar do lado de fora \ncom um monstro à espreita." << endl;
	getchar();
	system("cls");
	cout << "Uma decisão deve ser tomada:\n" << endl;
	for(tmp=0; tmp<700000000; tmp++);
    cout << "[1] inspecionar o armário" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
    cout << "[2] Entrar logo nele\n" << endl;
    for(tmp=0; tmp<1000000000; tmp++);
	cout << "Oque você faz?" << endl;
	cin >> opc1;
	
	if(opc1==1){
		cout << "É melhor dar mesmo uma olhada se não tem algo aqui que me ajude a escapar \nou quem sabe até matar o monstro" << endl;
		getchar();
		system("cls");
		cout << "Você então começa a procurar por algo, olha para um lado, olha para o outro e nada." << endl;
		getchar();
		system("cls");
		cout << ".";
		for(tmp=0; tmp<500000000; tmp++);
		cout << ".";
		for(tmp=0; tmp<500000000; tmp++);
		cout << ".";
		for(tmp=0; tmp<500000000; tmp++);
		system("cls");
		cout << "Até que você encontra um código: abracadabra" << endl;
		getchar();
		cout << "Você memoriza e entra no armário já que começa a ouvir os passos da criatura muito próximos." << endl;
		getchar();
		system("cls");
		
		srand(seed);
		deciArm=rand()%2;
		if(deciArm==0){
			cout << "Você entra rápido o suficiente para que o monstro não te pegue." << endl;
			getchar();
			cout << "O monstro entra pela porta" << endl;
			getchar();
			cout << "Ele fareja te procurando, mas não te acha" << endl;
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
			cout << "Sem saber onde você está ele desiste da procura e vai embora" << endl;
			getchar();
			cout << "Você sai devagar para não chamar atenção dele \ne procura por alguma pista de como usar aquela palavra que fora encontrada por ti" << endl; 
			getchar();
			cout << "Até que então você fecha a porta para que não vaze nenhum barulho ou cheiro seu" << endl;
			getchar();
			cout << "Eis que você acha algo escrito na parede:\nCom magia pode-se fugir de sua realidade" << endl;
			getchar();
			cout << "Não faz o menor sentido para você, mas então vem um estalo à sua mente!" << endl;
			getchar();
			cout << "Você decide dizer a palavra que você viu no armário.\nNão fazia o menor sentido, mas o que fazia sentido naquele lugar?" << endl;
			getchar();
			cout << "Então você diz: ";
			cin >> senha;
			if(escrita==senha){
				cout << "Uma trava parece se abrir embaixo dos seus pés e você escapa" << endl;
				cout << "FIM" << endl;
			}else{
				system("cls");
				cout << "Você diz a palavra em voz alta, mas nada acontece" << endl;
				getchar();
				cout << "Você ouve os passos do monstro pararem e o seu coração acelerar" << endl;
				getchar();
				cout << "Ele volta para o quarto correndo, te acha e te mata\n" << endl;
				cout << "FIM" << endl;
			} 
			
			
			
		}else if(deciArm==1){
			cout << "Antes de você entrar no armário a criatura entra pelo quarto quebrando a porta." << endl;
			getchar();
			cout << "Seu tempo de reação não é o suficiente para conseguir fugir ou lutar e o monstro te mata rapidamente." << endl;
			cout << "FIM" << endl;
			system("pause");
		}
	}else if(opc1==2){
		cout << "Por quê você perderia tempo procurando algo que talvez salve sua vida \nsendo que você pode efetivamente salvar sua vida?" << endl;
		cout << "Que ideia mais besta a minha..." << endl;
	}
	
	/* Decisões que o monstro pode tomar:
		- Abrir a porta e te achar
		- Atravessar a porta com as suas garras e já te matar direto
		- Derrubar o armário com você dentro
	
	*/
}

void porta(){
	
	int opc3;
	
	cout << "Por mais bobo que fosse, aparentemente funcionou.";
}

    

/*     Insights

- São 3 locais onde pode se esconder: Armário, cama e atrás da porta
- É preciso uma descrição do que o monstro faz para procurar sua vítima, por exemplo: entrar na sala e ficar olhando de um lado para o outro, tentando sentir o cheiro, etc

*/

