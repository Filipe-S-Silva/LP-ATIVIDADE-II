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
char resultado [200] = "";

//usuario

printf("Informe um n�mero: ");
scanf("%d", &numero);

if (numero == 1 || numero == 0)
{
    printf("N�mero igual a zero ou a um, n�o sendo considerado primo");

} else if(numero % 1 == 0 && numero % 2 == 0 || numero % 3 == 0 && numero % 1 == 0){
    
    strcpy(resultado, "N�mero n�o primo");

}

else

{
    strcpy(resultado, "N�mero primo");
}



//mostrar

printf("%s", resultado);


getchar();
return 0;

}

