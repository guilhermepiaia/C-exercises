/* A fun��o int horasParaMinutos(int); recebe como par�metro o n�mero de horas e
devolve o n�mero de minutos correspondente.
 Se o utilizador indicar um n�mero negativo a fun��o dever� 
 devolver zero minutos.
*/

#include <stdio.h>

// declaracao da funcao
int horasParaMinutos (int nrH) {
	if (nrH <= 0)
		return 0;
	else
		return nrH*60;
}

// fazer o programa principal para testar se a funcao est� bem implementada
int main() {
	// declaracao das variaveis
	int minutos, horas;
	
	// pedir o numerro de horas ao nosso utilizador
	printf("Insira o numero de horas que deseja converter:\n");
	scanf("%d", &horas);
	
	// invocar a funcao
	printf("Valor em minutos: %d", horasParaMinutos (horas));
	
return 0;
}










