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
    float numeroUm = 0;
    float numeroDois = 0;
    char operacao;
    float resultado = 0;
    

    //usuario
    
    printf("Informe o primeiro número: ");
    scanf("%f", &numeroUm);

    printf("Informe o segundo segundo: ");
    scanf("%f", &numeroDois);
    
    fflush(stdin);
       
    printf("Informe a operação +, - :");
    scanf("%c", &operacao);

    fflush(stdin);

    //validação

    switch (operacao)
    {
    case '+':
        resultado = numeroUm + numeroDois;
        break;
    
    case '-':
        resultado = numeroUm - numeroDois;
        break;
    
    default:
        printf("Operação inválida \n");
        break;
    }
    
    //mostrar

    printf("O primeiro número: %.2f \n", numeroUm);
    printf("O segundo número: %.2f \n", numeroDois);
    printf("Resultado: %.2f \n", resultado);
    
    getchar();
    return 0;
}