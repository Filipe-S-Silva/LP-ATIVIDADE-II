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
    int menu = 0;
    char nick [200];

    // usuario
    printf("========= MENU ==========\n");
    printf("\n");
    printf("1 -- NOVO JOGO\n");
    printf("2 -- CARREGAR JOGO\n");
    printf("3 -- CONFIGURA��ES\n");
    printf("\n");

    // valida��o

    do
    {

        printf("Digite a op��o: ");
        scanf("%d", &menu);

        sleep(1);
        system("cls || clear");

        switch (menu)
        {
        case 1:
            // mostrar
            printf("NOVO JOGO \n");
            
            fflush(stdin);
            printf("DIGITE SEU NICK: ");
            gets(nick);
            
            printf("SEJA BEM VINDO, %s!!", nick);
            break;
        case 2:
            // mostrar
            printf("CARREGANDO JOGO..... \n");
            break;
        case 3:
            // mostrar
            printf("====== CONFIGURA��ES ======== \n");
            printf("\n");
            printf("PERFIL\n");
            printf("PERSONALIZA��O\n");
            printf("SAIR DO JOGO\n");
            break;

        default:
            // mostrar
            printf("C�DIGO INV�LIDO\nTENTE NOVAMENTE");
            break;
        }

    } while (menu < 1 || menu > 3);

    getchar();
    return 0;
}
