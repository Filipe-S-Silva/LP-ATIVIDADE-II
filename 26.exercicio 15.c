#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    // variaveis
    setlocale(LC_ALL, "portuguese");
    char resposta[200];
    float valor = 0;
    float conversao = 0;
    int codigo;

    // usuario

    printf("   CÓDIGO =============== TIPO DE UNIDADE DE MEDIDA \n");
    printf("\n");
    printf("     1 ======================== TEMPERATURA \n");
    printf("     2 ========================  DISTÂNCIA \n");
    printf("     3 ========================    MASSA \n");
    printf("\n");

    printf("Informe o código desejado: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:

        printf("============= TEMPERATURA ================\n");
        printf("\n");
        printf("CÓDIGO ========================   TIPO\n");
        printf("\n");
        printf("  1 ======================= FAHRENHEIT\n");
        printf("  2 =======================   CELSIUS\n");
        printf("  3 =======================   KELVIN\n");
        printf("\n");

        printf("Informe o código desejado: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);
            printf("\n");
            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================   CELSIUS\n");
            printf("  2 =======================   KELVIN\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);
            switch (codigo)
            {
            case 1:

                conversao = (valor - 32) / 1.8;

                break;

            case 2:

                conversao = ((valor - 32) * (5 / 9)) + 273;

                break;

            default:

                printf("C?digo inv?lido");

                break;
            }
            break;

        case 2:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);
            printf("\n");
            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================   FAHRENHEIT\n");
            printf("  2 =======================   KELVIN\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);
            switch (codigo)
            {
            case 1:

                conversao = valor * 1.8 + 32;

                break;

            case 2:

                conversao = valor + 273;

                break;

            default:

                printf("Código inválido");

                break;
            }
            break;

        case 3:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);
            printf("\n");
            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================   FAHRENHEIT\n");
            printf("  2 =======================   CELSIUS\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);
            switch (codigo)
            {
            case 1:

                conversao = ((valor - 273) * 1, 8) + 32;

                break;

            case 2:

                conversao = valor - 273;

                break;

            default:

                printf("C?digo inv?lido");

                break;
            }
            break;

        default:
            printf("Código inválido");
            break;
        }

        break;
    case 2:

        printf("=============== DISTÂNCIA ================\n");
        printf("\n");
        printf("CÓDIGO ========================   TIPO\n");
        printf("\n");
        printf("  1 ===========================    KM\n");
        printf("  2 ===========================     M\n");
        printf("  3 ===========================    CM\n");
        printf("\n");

        printf("Informe o código desejado: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        M\n");
            printf("  2 =======================        CM\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);

            switch (codigo)
            {
            case 1:
                
                conversao = valor * 1000;

                break;
            case 2:
            
                conversao = valor * 100000;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;
        
        case 2:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        KM\n");
            printf("  2 =======================        CM\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);

            switch (codigo)
            {
            case 1:
                
                conversao = valor / 1000;

                break;
            case 2:
            
                conversao = valor * 100;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;
        case 3:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        KM\n");
            printf("  2 =======================        M\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);

            switch (codigo)
            {
            case 1:
                
                conversao = valor / 100000;

                break;
            case 2:
            
                conversao = valor / 100;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;


        default:
        
            printf("CÓDIGO INVÁLIDO");

            break;
        }
        break;
    case 3:
        printf("================ MASSA ================\n");
        printf("\n");
        printf("CÓDIGO ========================   TIPO\n");
        printf("\n");
        printf("  1 ===========================    KG\n");
        printf("  2 ===========================     G\n");
        printf("  3 ===========================    MG\n");
        printf("\n");

        printf("Informe o código desejado: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        G\n");
            printf("  2 =======================        MG\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);

            switch (codigo)
            {
            case 1:
                
                conversao = valor * 1000;

                break;
            case 2:
            
                conversao = valor * 1000000;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;
        
        case 2:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        KG\n");
            printf("  2 =======================        MG\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);

            switch (codigo)
            {
            case 1:
                
                conversao = valor / 1000;

                break;
            case 2:
            
                conversao = valor * 1000;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;
        case 3:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &valor);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        KG\n");
            printf("  2 =======================        G\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &codigo);

            switch (codigo)
            {
            case 1:
                
                conversao = valor / 1000000;

                break;
            case 2:
            
                conversao = valor / 1000;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;


        default:
        
            printf("CÓDIGO INVÁLIDO");

            break;
        }
        break;


        break;

    default:
    printf("CÓDIGO INVÁLIDO");
        break;
    }

    // mostrar

    printf("VALOR ORIGINAL: %.2f \n", valor);
    printf("Conversão: %.2f \n", conversao);

    getchar();
    return 0;
}