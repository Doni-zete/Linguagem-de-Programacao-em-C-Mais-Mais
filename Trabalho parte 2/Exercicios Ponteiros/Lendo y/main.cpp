
#include<stdio.h>


// Caixa Eletr�nico


int main(){

	int opcao;

	float depositar, saque, saldo = 8;


	printf("Bem vindo Canal Coffee Tag - Exerc�cio Caixa Eletr�nico :\n");

	printf("1 - Deposito na conta \n");
	printf("2 -  Sacar dinheiro da conta \n");
	printf("3 - Sair \n \n");

	printf("Selecione  a op��o desejada:  ");
	scanf("%i", &opcao);

	switch(opcao){

		case 1:

			printf("Deseja depositar quanto na sua conta? \n");
			scanf("%f", &depositar);

			saldo = saldo + depositar;
			// saldo += depositar;

			printf("Deposito realizado com SUCESSO seu saldo agora � %.2f", saldo);


			break;


		case 2:

			printf("Informe quanto voc� deseja sacar? ");
			scanf("%f", &saque);

			if(saque > saldo){

				printf("Saldo insuficiente");


				}else{

					saldo =  saldo - saque;
					//saldp -= saque;

					printf("Voc� sacou %.2f", saque);


				}


		    break;

		    case 3: ; break;


		    default: printf("Op��o n�o existe ");


		}


	return 0;

	}
