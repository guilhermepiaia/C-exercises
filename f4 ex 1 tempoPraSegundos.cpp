#include <stdio.h>
#include <stdlib.h>

int tempoParaSegundos (int h, int m, int s){
	
	if(h<0 || m<0 || s<0)
		return 0;
	else 
		return h*3600+m*60+s;		
	return 0;
	
}

int main(){
	
	int horas, minutos, segundos, segundosfinal;
	printf("Insira o nmr de horas\n");
	scanf("%d",&horas);
	printf("Insira o nmr de minutos\n");
	scanf("%d",&minutos);
	printf("Insira o nmr de segundos\n");
	scanf("%d", &segundos);
	
	segundosfinal = tempoParaSegundos (horas, minutos, segundos);
	printf("valor em segundos: %d",segundosfinal);
	
return 0;
}

