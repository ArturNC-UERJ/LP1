/*Um aluno de LP1 est� indo aos Estados Unidos e quer comprar um celular novo. Ele n�o quer gastar mais do que 1000
reais. Um d�lar est� custando 3.17 reais. Fa�a um programa que leia o pre�o de um celular em d�lares e, caso seja um
bom neg�cio, escreva BOM NEG�CIO.*/

#include <stdio.h>

int main()
{
    int valor_dolar, valor_real;
    printf("Entre com o preco em dolares: ");
    scanf("%d", &valor_dolar);
    valor_real = valor_dolar * 3.17;
    if (valor_real < 1000)
        {
            printf("BOM NEGOCIO");
        }
    return 0;
}
