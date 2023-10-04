#include <stdio.h>
#include <string.h> // Para usar a funcao strcmp()

int main()
{
    char str1[100], str2[100];
    
    printf("Entre com uma string: ");
    
    gets (str1);
    
    printf("Entre com outra string: ");
    
    gets (str2);
    
    if (strcmp(str1,str2)){ 
        
        printf("\n\n As duas strings sao diferentes");
    }
    else {
        
        printf("\n\n As duas strings sao iguais");
    }
    
    return 0;
}


