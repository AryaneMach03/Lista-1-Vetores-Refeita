#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dna[50], compara[50];
    int tamanho, i;
    printf(" Digite a fita de DNA: ");
    gets(dna);// gets nao para ao deparar com espaços
	uppercase(dna); // Se possivel, inserir funcao upercase para deixar as letras em maiuscula
    tamanho=strlen(dna);// strlen calcula tamanho 
    for(i=0;i<=tamanho;i++){
        
        switch(dna[i]){
            case 'A': comp[i] = 'T';
            break;
            case 'T': comp[i] = 'A';
            break;
            case 'C': comp[i] = 'G';
            break;
            case 'G': comp[i] = 'C';
            break;
            default: comp[i] = ' ';
            
        }// fim switch
    }// fim for
    compara[tamanho] = '\0';
    
    printf(" *** FITA PRINCIPAL *** \n");
    puts(dna);
    printf(" *** FITA COMPLEMENTAR *** \n");
    puts(compara);// puts usado para escrever uma string
    return 0;
    
} // fim int main
