#include <stdio.h>
#include <string.h> // Para usar a função strlen()
#include <conio.h>

int main()
{
    int size;
    char str[100];
    
    printf("Entre com uma string: ");
    
    gets (str);
    
    size = strlen(str);
    
    printf("\n\n A string que voce digitou tem tamanho %i", size);
    
    return 0;
}


