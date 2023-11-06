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
int idade = 0;

//usuario
print("Informe sua idade: ");
scanf("%d", &idade);



//mostrar

if(idade >= 18)
printf("Acesso permitido");
else
printf("Acesso negado");


getchar();
return 0;

}

