#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main(){

//variaveis
setlocale(LC_ALL, "portuguese");
float valor = 0;
float valorPagar = 0;
int diaDaSemana = 0;


//usuario

printf("Informe o valor da compra: R$");
scanf("%f", &valor);

sleep(1);

if (valor > 100)
{
    //limpatela
    system("cls || clear");


    printf("  DIA DA SEMANA ================== CÓDIGO\n");
    printf("\n");
    printf("    SEGUNDA ========================= 1\n");
    printf("     TERÇA ========================= 2\n");
    printf("    QUARTA ========================= 3\n");
    printf("    QUINTA ========================= 4\n");
    printf("    SEXTA ========================= 5\n");
    printf("    SABADO ========================= 6\n");
    printf("    DOMINGO ========================= 7\n");
    printf("\n");


do
{


    printf("Informe o código do dia da semana da compra:");
    scanf("%d", &diaDaSemana);

    //validação

    switch (diaDaSemana)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        valorPagar = valor * 0.9;
        break;
    case 6:
    case 7:
        valorPagar = valor * 0.75;
        break;
    default:
        printf("Código inválido\nTente novamente\n");
        break;
    }

}while (diaDaSemana > 7 || diaDaSemana < 1);

    //limpatela
    system("cls || clear");
    
    //mostrar
    printf("Valor do produto: R$ %.2f\n", valor);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

} else {
    //limpatela
    system("cls || clear");
    
    //mostrar
    printf("Valor do produto: R$ %.2f \n", valor);
    printf("Valor a pagar: R$ %.2f \n", valor);
}


getchar();
return 0;

}