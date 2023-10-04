#include <stdio.h>
#include <string.h> //para usar a funcao strcpy()
#include <conio.h>

int main(void)
{
    char nome[15]; 
        
    strcpy(nome, "12345678912345"); //note que o ultimo slot da string deve ser nulo, por isso usamos apenas 14 numeros
    
    printf("Nome = %s", nome);
 
    getch(); //aguarda o usuario teclar enter para encerrar o programa
    
    return 0;
}

