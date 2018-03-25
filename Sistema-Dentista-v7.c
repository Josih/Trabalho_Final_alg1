//Bibliotecas usadas no programa.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//Define - define Size como 100, o tamanho dos caracteres
//Define - define ESPERA e LIMPA. LIMPA serve para limpar a tela no cmd assim como o system("cls") e o ESPERA funciona como o system("pause").
#define Size  100
#define ESPERA system("pause>>NULL");
#define LIMPA  system("cls");
//Struct para armazenar as informaçoes usadas no programa.
typedef struct{

	char nome[Size];
	char cpf[Size];
	char telefone[Size];
	char data[Size];
	char horario[Size];
	char email[Size];
	char consulta[Size];
	char preco[Size];
	int senha;

}Pac;

//Prototipo de funçao ou declaraçao da funçao.
void menu(Pac P[]);
void cadastrar(Pac P[], int *qtd);
void listar (Pac P[], int qtd);
void buscar(Pac P[], int qtd);
void alterar(Pac P[], int qtd);
void excluir(Pac P[], int qtd);


int Limite = 100;
int main() {
	int op;
	Pac P[Limite];
	menu(P);
	return 0;
}
//Funçao principal, referente ao menu do programa, essa ira chamar todas as funçoes acima.
void menu(Pac P[]){
	char op2,ob;
	//static mantem o valor em outras funçoes.
    static int qtd = 0;
	do{
	    printf("\n\n\n");
        printf("\t\t\tAPERTE QUALQUER BOTAO PARA CONTINUAR");

        ESPERA
        LIMPA
        printf("\n\t\t    \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
        printf("\t\t    \xBA                                      \xBA\n");
        printf("\t\t    \xBA             MENU PRINCIPAL           \xBA\n");
        printf("\t\t    \xBA                                      \xBA\n");
        printf("\t\t    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

		printf("\t\t\t      \xC9\xCD\xCD\xCD\xCD\xCD\xB9 MENU \xCC\xCD\xCD\xCD\xCD\xCD\xBB\n");
		printf("\t\t\t      \xBA  1- CADASTRAR    \xBA  \n");
		printf("\t\t\t      \xBA  2- LISTAR       \xBA  \n");
		printf("\t\t\t      \xBA  3- BUSCAR       \xBA  \n");
		printf("\t\t\t      \xBA  4- ALTERAR      \xBA  \n");
		printf("\t\t\t      \xBA  5- EXCLUIR      \xBA  \n");
		printf("\t\t\t      \xBA  6- SAIR         \xBA  \n");
		printf("\t\t\t      \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
		printf("\t\t\t       Digite a opcao: ");
		scanf("%s",&op2);

		switch(op2){
			case '1':
                LIMPA printf("\n\t\t|LIMITE DE CADASTROS [%d]|\n",Limite - qtd);
                printf("\n\n\t\t\tAPERTE QUALQUER TECLA \n");
                ESPERA
                cadastrar(P,&qtd);
                break;
			case '2':
				listar(P, qtd);
                break;
			case '3':
				buscar(P, qtd);
                break;
			case '4':
				alterar(P, qtd);
                break;
			case '5':
				excluir(P,qtd);
                break;
            case '6':
                printf("\n\n");
                printf("\t\t\t\tVOCE DESEJA SAIR? \n");
				printf("\t\t\t\t1 - SIM\n");
				printf("\t\t\t\t2 - NAO\n");
				printf("\t\t\t\tDigite a opcao: ");
				scanf("%s",&ob);
				switch(ob){
					case '1':
						exit(1);
					case '2':
						menu(P);
				}
			default:
			    printf("\n\n");
				printf("\t\t\tOPCAO INVALIDA,TENTE NOVAMENTE\n"); ESPERA LIMPA

				menu(P);
		}


	}while(op2!='5');

}
//Funçao para cadastrar pacientes.
//* ponteiro, serve para armazenar o endereço de memoria.
void cadastrar(Pac P[], int * qtd){
	static int i = 0; char op;
	int conta;
	int teste;

	LIMPA


	if(*qtd == Limite){
		printf("ERROR!, LIMITE ULTRAPASSADO\n");
		system("PAUSE");
		menu(P);
    }

        printf("\n\t\t    \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
        printf("\t\t    \xBA                                      \xBA\n");
        printf("\t\t    \xBA             MENU CADASTRAR           \xBA\n");
        printf("\t\t    \xBA                                      \xBA\n");
        printf("\t\t    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
        fflush(stdin);
        do{

            printf("\t\t\tInforme o Nome do paciente: ");
            gets(P[i].nome);
            //fflush serve para limpar o buffer do teclado.
            fflush(stdin);
            teste = atoi(P[i].nome);
            if(teste!=0){
                printf("\t\t\tNOME Invalido\n");
            }
        }while(teste!=0);
        fflush(stdin);
        do{

            printf("\t\t\tInforme o CPF: ");
            gets(P[i].cpf);
            fflush(stdin);
            //atoi - Essa funçao retorna um numero inteiro como int. Caso nenhuma conversao valida puder ser executada, retorna zero.
            teste = atoi(P[i].cpf);
            conta = strlen(P[i].cpf);//strlen conta quantos caracteres tem na string.
            if(conta<11 || teste==0){
                printf("\t\t\tCPF Invalido\n");
            }
        }while(conta<11||teste==0);


        fflush(stdin);
        printf("\t\t\tInforme o E-mail: ");
        gets(P[i].email);
        fflush(stdin);
        fflush(stdin);
        do{

            printf("\t\t\tInforme o Telefone p/ contato: ");
            gets(P[i].telefone);
            fflush(stdin);
            teste=atoi(P[i].telefone);
            conta=strlen(P[i].telefone);
            if(conta<11||teste==0){
                printf("\t\t\tTELEFONE Invalido\n");
            }
        }while(conta<11||teste==0);
        fflush(stdin);
        do{
            printf("\t\t\tInforme a Data da consulta [DD/MM/AAAA]: ");
            gets(P[i].data);
            fflush(stdin);
            teste = atoi(P[i].data);
            conta = strlen(P[i].data);
            if(conta<10||teste==0){
                printf("\t\t\tDATA Invalido\n");
            }

        }while(conta<10||teste==0);
        fflush(stdin);
        do{
            printf("\t\t\tInforme o Horario da consulta [HH:MM]: ");
            gets(P[i].horario);
            fflush(stdin);
            teste = atoi(P[i].horario);
            conta = strlen(P[i].horario);
            if(conta<5||teste==0){
                printf("\t\t\tHORARIO Invalido\n");
            }
        }while(conta<5||teste==0);
        fflush(stdin);
        printf("\t\t\t-------------------------------------\n");
        printf("\t\t\tAgora escolha uma das opcoes abaixo: \n");
        printf("\t\t\t---------------SERVICOS--------------\n");
        printf("\t\t\t1 - LIMPEZA                 R$100,00 \n");
        printf("\t\t\t2 - EXTRACAO                R$150,00 \n");
        printf("\t\t\t3 - MANUTENCAO DO APARELHO  R$200,00 \n");
        printf("\t\t\t4 - CLAREAMENTO             R$150,00 \n");
        printf("\t\t\t5 - RESTAURACAO             R$120,00 \n");
        printf("\t\t\tDigite a opcao: ");
        scanf("%s",&op);
        switch(op){
            case '1':
                strcpy(P[i].consulta,"LIMPEZA ");
                strcpy(P[i].preco, "R$100,00");
                //strcpy serve para copiar uma variavel para outra ou atribuir um texto para uma variavel.
            break;
            case '2':
                strcpy(P[i].consulta,"EXTRACAO ");
                strcpy(P[i].preco, "R$150,00");
            break;
            case '3':
                strcpy(P[i].consulta,"MANUTENCAO DO APARELHO ");
                strcpy(P[i].preco, "R$200,00");
            break;
            case '4':
                strcpy(P[i].consulta,"CLAREAMENTO ");
                strcpy(P[i].preco, "R$150,00");
            break;
            case '5':
                strcpy(P[i].consulta,"RESTAURACAO ");
                strcpy(P[i].preco, "R$120,00");
            break;
            default:
                printf("\n\n");
                printf("\t\t\tOPCAO INVALIDA\n");
                menu(P);
            break;
        }


        P[i].senha=i+1;
        printf("\n");
        printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
        printf("\t\t\xBA         SEU ID EH: %d                             \xBA\n", P[i].senha);
        printf("\t\t\xBA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBA\n");
        printf("\t\t\xBA         CADASTRO EFETUADO COM SUCESSO            \xBA\n");
        printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
        i++;
        *qtd  = *qtd + 1;
}
//Funcao LISTAR mostra todos os pacientes cadastrados.
void listar(Pac P[],int qtd){
    int i, aux = 0;
    printf("\n\n");
    for(i=0;i<qtd;i++){
        if(P[i].senha != -1){
            aux = 1;
            printf("\n");
            printf("\t\t\t---------------------------------\n");
            printf("\t\t\tNOME: %s\n",P[i].nome);
            printf("\t\t\tCPF: %s\n",P[i].cpf);
            printf("\t\t\tE-MAIL: %s\n",P[i].email);
            printf("\t\t\tTELEFONE: %s\n",P[i].telefone);
            printf("\t\t\tDATA DA CONSULTA: %s\n",P[i].data);
            printf("\t\t\tHORARIO DA CONSULTA: %s\n",P[i].horario);
            printf("\t\t\tSERVICO: %s\n",P[i].consulta);
            printf("\t\t\tPRECO DO SERVICO: %s\n",P[i].preco);
            printf("\t\t\tID DO PACIENTE: %d\n",P[i].senha);
            printf("\t\t\t---------------------------------\n");
        }
    }
    if(aux == 0){
        printf("\n\n");
        printf("\t\t\tNEHHUM PACIENTE CADASTRADO");
    }
    menu(P);
}

//Funçao buscar,para buscar pacientes armazenados no banco de dados.
void buscar(Pac P[], int qtd){
	int i;
	int procurar, achou = 0;
	char busca[Size];
	LIMPA
    printf("\n\t\t    \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\t\t    \xBA                                      \xBA\n");
    printf("\t\t    \xBA             MENU BUSCAR              \xBA\n");
    printf("\t\t    \xBA                                      \xBA\n");
    printf("\t\t    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	printf("\t\t\tInforme o ID: ");
	scanf("%s", &busca);

    procurar = atoi(busca);

	for(i=0;i<qtd;i++){
		if(procurar==P[i].senha &&  P[i].senha!=-1){
			achou = 1 ;
			break;
		}
	}
    if(achou == 0){
        printf("\n");
        printf("\t\t\tID NAO ENCONTRAD0\n");
       menu(P);

        menu(P);
    }else{
        printf("\t\t\tNOME: %s\n", P[i].nome);
        printf("\t\t\tCPF: %s\n", P[i].cpf);
        printf("\t\t\tE-MAIL: %s\n", P[i].email);
        printf("\t\t\tTELEFONE: %s\n", P[i].telefone);
        printf("\t\t\tDATA DA CONSULTA: %s\n", P[i].data);
        printf("\t\t\tHORARIO: %s\n", P[i].horario);
        printf("\t\t\tSERVICO: %s\n", P[i].consulta);
        printf("\t\t\tPRECO DO SERVICO: %s\n",P[i].preco);
        printf("\t\t\tID DO PACIENTE: %d\n",P[i].senha);
        menu(P);

    }


}

//Alterar - altera dados do paciente, como a data e hora da consulta.
void alterar(Pac P[], int qtd){
	int i,senhanv,aux = 0, conta,teste;
	char op;
	char senhan[Size];
	char novo[100];
	char cpfn[100];
	LIMPA
    printf("\n\t    \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\t    \xBA                                      \xBA\n");
    printf("\t    \xBA             MENU ALTERAR             \xBA\n");
    printf("\t    \xBA                                      \xBA\n");
    printf("\t    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	printf("\t\t1- DATA \n");
	printf("\t\t2- HORARIO \n");
	printf("\t\tDigite a opcao: ");
	scanf("%s",&op);



	switch(op){
		case '1':
		    printf("\n");
                printf("\t\tInforme o ID do paciente: ");
                scanf("%s",&senhan);
                senhanv = atoi(senhan);
                for(i=0;i<qtd;i++){
                    if(senhanv == P[i].senha && P[i].senha!=-1){
                            aux = 1;

                        printf("\t\tDeseja alterar a data da consulta do paciente %s ? \n", P[i].nome);
                        printf("\t\t1-SIM\n");
                        printf("\t\t2-NAO\n");

                        printf("\t\tDigite a opcao: ");
                        scanf("%s",&op);
                        switch(op){
                            case '1':
                                printf("\n");
                                do{
                                    printf("\t\tDigite a nova data da consulta [DD/MM/AAAA]: ");
                                    scanf("%s",&novo);
                                    teste = atoi(novo);
                                    conta = strlen(novo);
                                    if(conta<10||teste==0){
                                        printf("\t\t\tDATA Invalida\n");
                                    }
                                }while(conta<10||teste==0);
                                strcpy(P[i].data, novo);
                                printf("\n\n");
                                printf("\t\tDATA ALTERADA PARA %s",P[i].data);
                            break;
                            case '2':
                                menu(P);
                            break;
                            default:
                                printf("\n");
                                printf("\t\tOPCAO INVALIDA");
                                menu(P);

                                LIMPA

                            break;
                        }
                }
            }
                if(aux == 0){
                    printf("\n\n");
                    printf("\t\t\tID NAO ENCONTRADO");
                    menu(P);
                }




		break;
		case '2':

			printf("\n");
			printf("\t\tDigite o ID do paciente: ");
			scanf("%s",&senhan);
			senhanv = atoi(senhan);
			for(i=0;i<qtd;i++){
				if(senhanv == P[i].senha && P[i].senha != -1){
                        aux = 1;

                    printf("\t\tDeseja alterar o horario do paciente %s ?\n",P[i].nome);
                    printf("\t\t1- SIM\n");
                    printf("\t\t2- NAO\n");
                    printf("\t\tDigite a opcao: ");
                    scanf("%s",&op);
                        switch(op){
                            case '1':

                                printf("\n");
                                do{
                                    printf("\t\tDigite o novo horario [HH:MM]: ");
                                    scanf("%s",&novo);
                                    teste = atoi(novo);
                                    conta = strlen(novo);
                                    if(conta<5||teste==0){
                                        printf("\t\t\tHORARIO Invalido\n");
                                    }
                                }while(conta<5||teste==0);
                                strcpy(P[i].horario, novo);
                                printf("\n\n");
                                printf("\t\tHORARIO ALTERADO PARA %s ",P[i].horario);
                            break;
                            case '2':
                                menu(P);
                            break;
                            default:
                                printf("\t\t\tOPCAO INVALIDA");
                                menu(P);


                            break;

                        }
				}

			}
			if(aux == 0){
                printf("\t\t\tID NAO ENCONTRADO");
                menu(P);
			}

		break;
		default:
            printf("\n");
            printf("\t\tOPCAO INVALIDA");
            menu(P);


	}


}

//Excluir - Exclui os dados do paciente cadastrado.
void excluir(Pac P[], int qtd){
	char sen[Size];
	int i,aux = 0, procurar;
	char op;
	LIMPA

	 printf("\n\t\t    \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
        printf("\t\t    \xBA                                      \xBA\n");
        printf("\t\t    \xBA             MENU EXCLUIR             \xBA\n");
        printf("\t\t    \xBA                                      \xBA\n");
        printf("\t\t    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	printf("\t\t\tInforme o ID: ");
	scanf("%s",&sen);
	procurar = atoi(sen);

	for (i=0;i<qtd;i++){
		if(procurar==P[i].senha && P[i].senha != -1){
                aux = 1;

			printf("\t\t\tDeseja remover o paciente %s ? \n",P[i].nome);
			printf("\t\t\t1-SIM\n");
			printf("\t\t\t2-NAO\n");
			printf("\t\t\tDigite a opcao: ");
			scanf("%s",&op);
			switch(op){
				case '1':
					P[i].senha = -1;
					printf("\n\n");
					printf("\t\t\tPACIENTE REMOVIDO\n");
					menu(P);


                    break;
				case '2':
					menu(P);
                    break;
				default:
					system("cls");
					printf("\t\t\tOPCAO INVALIDA");
					menu(P);

			}
        }
	}
        if(aux == 0){
            printf("\n\n");
            printf("\t\t\tID NAO ENCONTRADO");
            menu(P);
        }


}
