#include<stdio.h>
#include<string.h>
#include<conio.h>
 char diasPorMes(int m){
	switch(m)
	{
		case 1:
			return printf("janeiro");
			break;
		case 2:
			return printf("fevereiro");
			break;
		case 3:
			return printf("marco");
			break;
		case 4:
			return printf("abril");
			break;
		case 5:
			return printf("maio");
			break;
		case 6:
			return printf("junho");
			break;
		case 7:
			return printf("julho");
			break;
		case 8:
			return printf("agosto");
			break;
		case 9:
			return printf("setembro");
			break;
		case 10:
			return printf("outubro");
			break;
		case 11:
			return printf("novembro");
			break;
		case 12:
			return printf("dezembro");
			break;
		default:
			printf("Valor invalido");
			return 0;
	}
}

int main(){
	int mes;
	printf("Nome do mes\n Digite o numero do mes correspondente\n");
	scanf("%d", &mes);
	printf("o mes %d cham-se %s",mes, diasPorMes(mes));
}
