#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int tempoPraSeg(int s, int m, int h){
	return h*3600+m*60+s;
}

int main(){
	int horas, minutos, segundos;
	printf("digite os segundos\n");
	scanf("%d", & segundos);
	printf("digite os minutos\n");
	scanf("%d", & minutos);
	printf("digite os horas\n");
	scanf("%d", & horas);
	printf("%d horas,%d minutos e %d segundos sao no total %d segundos",horas,minutos,segundos,tempoPraSeg(segundos,minutos,horas));
}
