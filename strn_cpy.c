#include <stdio.h>
#include <string.h> // Para usar a funcao strcpy()
#include <conio.h>

int main(void)
{
    char str1[8] = "Curso C";
    char str2[5];
        
    strncpy(str2, str1, 5); //strncpy(nome_da_variavel_receptora, nome_da_variavel_copiada, quantidade_de_caracteres_copiados)
    
    str2[5]= '\0';
    printf("str2 = %s\n", str2); 
 
    getch();
    
    return 0;
}

