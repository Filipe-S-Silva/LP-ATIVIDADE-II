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
    int numeroUm = 0;
    int numeroDois = 0;
    int maior = 0;
    int menor = 9999999999;
    
    //usuario
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &numeroUm);
    
    printf("Informe o segundo n�mero: ");
    scanf("%d", &numeroDois);
    
    //validação

    maior = numeroUm > numeroDois ? numeroUm : numeroDois;
    menor = numeroUm > numeroDois ? numeroDois : numeroUm;
    
    //mostrar
    
    printf("Maior n�mero: %d \n", maior);
    printf("Menor n�mero: %d \n", menor);
 
    getchar();
    return 0;
}