#include <stdio.h>
#include <string.h> // Para usar a funcao strcat()
#include <conio.h>

int main(void)
{
    char str[10] = "Curso";
    
    strcat(str, " de C"); //strcat(string_a_ser_concatenada, "texto a ser adicionado")
    
    //Concatena (soma) a string "de C" com o conteudo da string str
    
    printf("str = %s\n", str);
    
    //Sera exibido "Curso de C"
 
    getch();
    
    return 0;
}


