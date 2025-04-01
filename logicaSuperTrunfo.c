#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //Define as váriaveis da carta 1
char codigodacarta1[5] = "A";
char estado1[10] = "Pernambuco";
char nomedacidade1[20] = "Flores";
int populacao1 = 20835;
float area1 = 996000;
float pib1 = 192900000;
int pontoturistico1 = 26;
float densidadepopulacional1;
float percapita1;
char cartacencedora1;
int jogador1;

//Define as váriaveis da carta 2
char codigodacarta2[5] = "B";
char estado2[10] = "Acre";
char nomedacidade2[20] = "Jordão";
int populacao2 = 9222;
float area2 = 5357;
float pib2 = 24355;
int pontoturistico2 = 48;
float densidadepopulacional2;
float percapita2;
char cartavencedora2;
int jogador2;

srand(time(0));

//Agora vamos calcular a densidade populacional e o PIB per Capita

densidadepopulacional1 = (float) populacao1 / area1;
percapita1 = pib1 / (float) populacao1;

densidadepopulacional2 = (float) populacao2 / area2;
percapita2 = pib2 / (float) populacao2;

//Exibição das informações das cartas

//Carta 1:

printf ("\n Código da carta 1: %s \n", codigodacarta1);
printf ("Estado: %s \n", estado1);
printf ("Nome da cidade: %s \n", nomedacidade1);
printf ("População: %i \n", populacao1);
printf ("Area em Km: %.2f Km \n", area1);
printf ("PIB: %.2f \n", pib1);
printf ("Ponto turistico: %i \n", pontoturistico1);
printf ("Densidade Populacional: %.2f \n", densidadepopulacional1);
printf ("PIB per Capita: %.2f \n", percapita1);


//Carta 2:

printf ("\n Código da carta 2: %s \n", codigodacarta2);
printf ("Estado: %s \n", estado2);
printf ("Nome da cidade: %s \n", nomedacidade2);
printf ("População: %i \n", populacao2);
printf ("Area em Km: %.2f Km \n", area2);
printf ("PIB: %.2f \n", pib2);
printf ("Ponto turistico: %i \n", pontoturistico2);
printf ("Densidade Populacional: %.2f \n", densidadepopulacional2);
printf ("PIB per Capita: %.2f \n", percapita2);

//Criação de Menu do Jogo

printf ("\n ### Super Trunfo. ### \n");
printf ("Escolha um Atributo: \n");
printf ("1. População \n");
printf ("2. Área em Km \n");
printf ("3. PIB \n");
printf ("4. Número de pontos turisticos \n");
printf ("5. Densidade Populacional \n");
printf ("Escolha: \n");
scanf ("%d", &jogador1);

jogador2 = rand () % 3 + 2;

switch (jogador1)
{
case 1:
printf ("Jogador: População - ");
break;
case 2:
printf ("Jogador: Área em Km - ");
break;
case 3:
printf ("Jogador: PIB - ");
break;
case 4:
printf ("Jogador: Número de pontos turistico - ");
break;
case 5:
printf ("Jogador: Densidade populacional - ");
break;
default:
printf ("Opção inválida. \n");
break;
}

switch (jogador2)
{
case 1:
printf ("Computador: População \n");
break;
case 2:
printf ("Computador: Área em Km \n");
break;
case 3:
printf ("Computador: PIB \n");
break;
case 4:
printf ("Computador: Número de pontos turistico \n");
break;
case 5:
printf ("Computador: Densidade populacional \n");
break;
}

//Agora vamos comparar as duas cartas

printf ("\n Vamos comparar as duas cartas: \n");

if (jogador1 == jogador2)
{
    printf ("### Jogo Empatou! ### \n");
} else if ((jogador1 == 1) && (jogador2 == 2) || (jogador1 == 2) && (jogador2 == 3) ||
           (jogador1 == 3) && (jogador2 == 4) || (jogador1 == 5) && (jogador2 == 1))
{
    printf ("### Parabéns, você ganhou! ### \n");
} else{
    printf ("### Você perdeu! ### \n");
}

//Agora vamos verificar qual carta é a vencedora

cartacencedora1 = (populacao1 + area1 + pib1 + pontoturistico1 + densidadepopulacional1 + percapita1);
cartacencedora1 = (populacao2 + area2 + pib2 + pontoturistico2 + densidadepopulacional2 + percapita2);

printf (" \n A carta vencedora é: \n");

if (cartacencedora1 == cartavencedora2)
{
    printf ("### Jogo Empatou! ### \n");
} else if (cartacencedora1 > cartavencedora2)
{
    printf ("### A carta A é a vencedora! ### \n");
} else{
    printf ("### A carta B é a vencedora! ### \n");
}



return 0;
}