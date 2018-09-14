/* Agora o aluno alugou um carro. Ele est� preocupado com o limite de velocidade, mas n�o entende muito bem o sistema de milhas por hora
(mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quil�metros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6
quil�metros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.*/

#include <stdio.h>

int principal(){

    int velocidade_mph, velocidade_kph;

    printf("Entre com a velocidade em milhas por hora (mph): ");
    scanf("%d", &velocidade_mph);
    velocidade_kph = velocidade_mph / 1.6;

    if (velocidade_kph < 80)
        {
            printf("ACELERE");
        }
    else
        {
            if (velocidade_kph < 100)
                {
                    printf("MANTENHA");
                }
            else
                {
                    printf("DESACELERE");
                }
        }
    return 0;
}
