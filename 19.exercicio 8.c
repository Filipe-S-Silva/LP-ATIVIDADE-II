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
int numero = 0;


//usuario
printf("Informe o número desejado: ");
scanf("%d", &numero);

system("cls || clear");

while (numero > 0)
{
    numero--;

    switch (numero)
    {
    case 200:
        printf("Número grande ein \n");
        sleep(1);
        break;
    case 150:
    case 100:
        printf("Falta ainda muito\n");
        sleep(1);
        break;
    case 75:
        printf("Está quase chegando \n");
        sleep(1);
        break;
    case 50:
        printf("Tá quaseeeeeee \n");
        sleep(1);
        break;
    case 40:
        printf("Falta 40 ainda \n");
        sleep(1);
        break;
    case 15:
        printf("Quase nas contagens finais \n");
        sleep(1);
        break;
    case 10:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 9:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 8:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 7:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 6:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 5:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 4:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 3:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 2:
        printf("%d \n", numero);
        sleep(1);
        break;
    case 1:
        printf("%d \n", numero);
        sleep(1);
        break; 
    
    }
    
}
printf("ACABOU !!!!!");

getchar();
return 0;

}

