#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    // variaveis
    setlocale(LC_ALL, "portuguese");
    float notaAluno = 0;
    char classificacao[200];

    // usuario
    printf("Informe a nota do(a) aluno(a): ");
    scanf("%f", &notaAluno);

    // valida��o
    if (notaAluno >= 9)
    {
        strcpy(classificacao, "Excelente");
    }
    else if(notaAluno < 9 && notaAluno >=7)
    {
        strcpy(classificacao, "Bom");
    }

    else if(notaAluno < 7 && notaAluno >= 5)
    {
        strcpy(classificacao, "Razo�vel");
    }
    else
    {
        strcpy(classificacao, "Insuficiente");
    }

    // mostrar
    printf("A classifica��o do(a) aluno(a) � %s", classificacao);


    getchar();
    return 0;
}
