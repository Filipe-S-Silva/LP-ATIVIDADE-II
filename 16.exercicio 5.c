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
int idiomaSelecionar;
char idioma [200];


//usuario


printf("C�DIGO =========== IDIOMA \n");
printf("\n");
printf("  1 ============= PORTUGU�S \n");
printf("  2 ============== INGL�S \n");
printf("  3 ============== FR�NCES \n");
printf("  4 ============== ESPANHOL \n");
printf("\n");

printf("Digite o c�digo do idioma: ");
scanf("%d", &idiomaSelecionar);


//valida��o
switch (idiomaSelecionar)
{
case 1:
    strcpy(idioma, "Seja bem vindo");
    break;
case 2:
    strcpy(idioma, "Welcome");
    break;
case 3:
    strcpy(idioma, "Accueillir");    
    break;
case 4:
    strcpy(idioma, "Sea ??bienvenido");    
    break;
default:
    printf("C�digo inv�lido");
    break;
}

//limpatela

system("cls || clear");

//mostrar
printf("%s", idioma);

getchar();
return 0;

}

