#include <stdio.h>
#include "bibliotecavetor.h"

int main(){
	int vet[100], n,i,res;
	printf("Digite a quantidade de elementos:");
	scanf("%d",&n);
	
		for(i=0;i<n;i++){
			printf("Digite o valor:");
			scanf("%d",&vet[i]);	
			
		} // fim for 1
		  // estrutura acima para pedir qtd e preencher qtd com valores
		
		for(i=0;i<n;i++){
			printf("%d |",vet[i]);
			
		} // fim for 2
		  // estrutura para exibir cada posiçao preenchida com valor inserido
		  
	  
	res=somaVet(vet,n);
	printf("\nSoma dos valores de cada posicao: %d", res);  
		
}// fim int main




