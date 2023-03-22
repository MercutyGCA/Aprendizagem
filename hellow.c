#include <stdio.h>
#include <stdbool.h>

int main()
{
    hellow();
    printf("\n");

    math();
    printf("\n");

    condicao();
    printf("\n");

    swich();
    printf("\n");
    return 0;
}

int hellow()
{
    printf("Hellow World");
    return 0;
}

int math()
{

    // soma
    int soma = 20 + 20;
    printf("%i", soma); // retorna 20

    // subtração
    int subtracao = 20 - 20;
    printf("%i", subtracao); // retorna 0

    // divisão
    float divisao = 20 / 5;
    printf("%f", divisao); // retorna 4

    // multiplicação
    float multiplicao = 10 * 10;
    printf("%f", multiplicao); // retorna 100

    // resto da divisão
    int retsto_divisao = 5 % 2;
    printf("%i", retsto_divisao); // retorna 1

    return 0;
}

int condicao()
{
    // Normal
    bool Boleano = true;
    if (Boleano == false)
    {
        printf("Falso");
    }
    else if (!Boleano == 1)
    {
        printf("False");
    }

    else
    {
        printf("Verdadiro");
    }

    // Com operadores ternarios
    (!Boleano == false) ? printf("Verdadeiro") : printf("Falso");

    return 0;
}

swich()
{
    int dia = 4;

    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Terça-Feira");
        break;
    case 4:
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
        printf("dia da semana inexistente");
    }

    return;
}