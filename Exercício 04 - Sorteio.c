#include <stdio.h>
#include "bibliotecavetor.h"

    int descubra(int vet[], int n, int x){	
	int correto = 0;for(int i = 0; i < n; i++){
		if(x == vet[i]){
			correto = 1;
			return correto;
		}
	}
	return correto;
}

void main(){
	int num, desc;
	printf("Por favor, digite a quantidade de numeros para o sorteio: ");
	scanf("%d", &num);
	int vet[num];
	geraVetor(vet, num, 50);
	
	printf("\n\nDigite um numero para o sorteio: ");
	scanf("%d", &desc);
	if(descubra(vet, num, desc) == 1){
		printf("\nParabens!\nO numero %d foi o sorteado!",desc);
		printaVetor(vet, num);
	}else{
		printf("Não foi dessa vez!O numero %d nao foi sorteado!\n\n",desc);
		printaVetor(vet, num);
	}

} // fim int main
