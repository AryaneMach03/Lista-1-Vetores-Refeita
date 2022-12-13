#include <stdio.h>
#include <string.h>

int main(){
	char msg[50];
	int i, n;
	printf("Mensagem Codificada:");
	gets(msg); // gets usado para ler variavel com espaços, não requer % nem &
	n = strlen(msg); // funçaõ informa o tamanho da string;
	printf("Mensagem Decodificada:");
	for(i=0;i<n;i++){
		if(msg[i]!='p') // condicional que filtra os elementos diferentes de p
			printf("%c",msg[i]); // exibindo caractere diferente de p
			
		else
			if((msg[i-1]=='p') && (msg[i+1]=='p') )
			// verificando se as posições anteriores e sucessores são iguais a p
				printf("%c", msg[i]);	
			
}// fim for
	return 0;	
	
}// fim int main
