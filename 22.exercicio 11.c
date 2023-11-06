#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){

    //variaveis
    setlocale(LC_ALL, "portuguese");
    char codigoCerto [200] = "001";
    char codigo [200];

    //usuario

    do
    {
        printf("Informe o código:" );
        gets(codigo);

        if (strcmp(codigoCerto, codigo) == 0)
        {
            printf("ACESSO PERMITIDO \n");
        }  
        else
        {
            printf("ACESSO NEGADO \n");
        }
        
        
    } while (strcmp(codigoCerto, codigo) != 0);
    
    

    //mostrar
    
    getchar();
    return 0;
}