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
    
    printf("Informe o primeiro n�mero: ");
    scanf("%f", &numeroUm);

    printf("Informe o segundo segundo: ");
    scanf("%f", &numeroDois);
    
    fflush(stdin);
       
    printf("Informe a opera��o +, - :");
    scanf("%c", &operacao);

    fflush(stdin);

    //valida��o

    switch (operacao)
    {
    case '+':
        resultado = numeroUm + numeroDois;
        break;
    
    case '-':
        resultado = numeroUm - numeroDois;
        break;
    
    default:
        printf("Opera��o inv�lida \n");
        break;
    }
    
    //mostrar

    printf("O primeiro n�mero: %.2f \n", numeroUm);
    printf("O segundo n�mero: %.2f \n", numeroDois);
    printf("Resultado: %.2f \n", resultado);
    
    getchar();
    return 0;
}