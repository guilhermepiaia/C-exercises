#include<stdio.h>
int horasPraMin(int h){  
return h*60;
}

int main(){
	int horas, minutos;
	printf("Digite o numero de horas que deseja converter para minutos\n");
	scanf("%d", & horas);
	printf("%d horas sao %d minutos",horas, horasPraMin(horas));
}
