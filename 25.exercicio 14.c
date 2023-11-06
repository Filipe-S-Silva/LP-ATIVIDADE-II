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
    int numero = 0;
    int quantidadePar = 0;
    int quantidadeImpar = 0;
    int somaPar = 0;
    int somaImpar = 0;
    float mediaPar = 0;
    float mediaImpar = 0;


    //usuario

    do
    {
        printf("Informe o valor do número: ");
        scanf("%d", &numero);

        if (numero >= 0)
        {
            if (numero % 2 == 0)
            {
                somaPar += numero;
                quantidadePar++;
            }
           if (numero % 2 != 0)
            {
                somaImpar += numero;
                quantidadeImpar++;
            }
            
            
        }
        
    } while (numero >= 0);


    mediaPar = somaPar / (float) quantidadePar; 
    mediaImpar = somaImpar / (float) quantidadeImpar; 


    system("cls || clear");

    


    //mostrar

    printf("Quantidade de números pares: %d \n", quantidadePar);
    printf("Soma par: %d \n", somaPar);
    printf("Média dos números pares: %.2f \n ", mediaPar);
    
    printf("Quantidade de números impares: %d \n", quantidadeImpar);
    printf("Soma impar: %d \n", somaImpar);
    printf("Média dos números impares: %.2f \n ", mediaImpar);
    


    getchar();
    return 0;
}