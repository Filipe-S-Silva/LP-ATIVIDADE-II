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
int codigo;
char produto [200];
char valor [200];

//usuario

printf("C�DIGO =========== PRODUTO\n");
printf("\n");
printf("  1 ============== CAMISETA\n");
printf("  2 ================ CAL�A\n");
printf("  3 ============== SAPATO\n");
printf("\n");

printf("Digite o c�digo desejado: ");
scanf("%d", &codigo);

//valida��o
do
{
switch (codigo)
{
case 1:
    strcpy(produto, "Camiseta");
    strcpy(valor, "R$ 50,00");
    break;
case 2:
    strcpy(produto, "Cal�a");
    strcpy(valor, "R$ 160,00");
    break;
case 3:
    strcpy(produto, "Sapato");
    strcpy(valor, "R$ 200,00");
    break;
default:
    printf("C�digo inv�lido");
    break;
}
} while (codigo > 3 || codigo < 1);

//mostrar
    printf("Produto escolhido: %s\n", produto);
    printf("Valor do produto escolhido: %s\n", valor);


getchar();
return 0;

}

