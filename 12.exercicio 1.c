#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    // variaveis
    setlocale(LC_ALL, "portuguese");
    int temperatura;
    char clima [200];

    // usuario

    printf("Informe a temperatura: ");
    scanf("%d", &temperatura);

    // validação
    if(temperatura >= 15 && temperatura <= 25){
        strcpy(clima, "nublado");
    }
    else if (temperatura > 25){
        strcpy(clima, "ensolarado");
    }
    else 
    {
        strcpy(clima, "chuvoso");
    }

    // mostrar

    printf("O clima está %s", clima);

    getchar();
    return 0;
}