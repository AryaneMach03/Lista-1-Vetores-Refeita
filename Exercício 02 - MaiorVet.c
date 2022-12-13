#include <stdio.h>
#include <stdlib.h> // biblioteca usada para usar o srand
#include "bibliotecavetor.h"
                     
int main(){
	int vetor[100], n;
	printf("Qual a Quantidade de elementos do vetor: ");
	scanf("%d", &n);
	// geraVet(vet,n);
	printf("\nEntre com o dados para o vetor:");
	leiaVetor(vet,n);
	printf("\nVetor:\n");
	printVet(vet,n);
	printf("\nMaior vetor eh:%d\n", maiorVet(vet,n));
	return 0;
	


}

