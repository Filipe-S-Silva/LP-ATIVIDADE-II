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
    printf("Informe o primeiro número: ");
    scanf("%d", &numeroUm);
    
    printf("Informe o segundo número: ");
    scanf("%d", &numeroDois);
    
    //validaÃ§Ã£o

    maior = numeroUm > numeroDois ? numeroUm : numeroDois;
    menor = numeroUm > numeroDois ? numeroDois : numeroUm;
    
    //mostrar
    
    printf("Maior número: %d \n", maior);
    printf("Menor número: %d \n", menor);
 
    getchar();
    return 0;
}