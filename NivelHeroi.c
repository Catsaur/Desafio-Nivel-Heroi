#include <stdio.h>
#include <string.h>

int main()
{

    // Declaração de variáveis
    char nomeHeroi[50];
    int xpHeroi;
    char tipoNivel[30], repetir;

    do
    {

        xpHeroi = 0;

        // Entrada de dados do usuário: nome e quantidade XP
        printf("Digite o nome do seu Heroi: \n");
        scanf("%50[^\n]s", nomeHeroi);
        fflush(stdin);

        printf("Digite a quantidade de experiencia (XP) do seu Heroi: \n");
        scanf("%d", &xpHeroi);
        fflush(stdin);

        // Verifica em qual nível a quantidade XP se encaixa com operador &&, quando as duas comparações na variável são verdadeiras
        if (xpHeroi <= 1000)
        {
            strcpy(tipoNivel, "Ferro");
        }
        else if (xpHeroi >= 1001 && xpHeroi <= 2000)
        {
            strcpy(tipoNivel, "Bronze");
        }
        else if (xpHeroi >= 2001 && xpHeroi <= 5000)
        {
            strcpy(tipoNivel, "Prata");
        }
        else if (xpHeroi >= 5001 && xpHeroi <= 7000)
        {
            strcpy(tipoNivel, "Ouro");
        }
        else if (xpHeroi >= 7001 && xpHeroi <= 8000)
        {
            strcpy(tipoNivel, "Platina");
        }
        else if (xpHeroi >= 8001 && xpHeroi <= 9000)
        {
            strcpy(tipoNivel, "Ascendente");
        }
        else if (xpHeroi >= 9001 && xpHeroi <= 10000)
        {
            strcpy(tipoNivel, "Imortal");
        }
        else if (xpHeroi >= 10001)
        {
            strcpy(tipoNivel, "Radiante");
        }

        // Saída de dados : concatenação
        printf(" O Heroi de nome %s esta no nivel %s\n", nomeHeroi, tipoNivel);

        // Verifica se o user gostaria de repetir a ação mais uma vez, se o while receber 's' ou 'S' o programa chama o do mais uma vez
        printf("Deseja verificar novamente? (s/n):\n");
        scanf("%c", &repetir);
        fflush(stdin);

    } while (repetir == 's' || repetir == 'S');

    printf("Programa encerrado.\n");

    return 0;
}
