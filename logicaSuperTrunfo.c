#include <stdio.h>

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

//Cadastro da primeira carta

/* printf ("Vamos cadastrar a primeira carta: \n");
printf ("\n Qual o codigo da carta: \n");
scanf ("%s", codigodacarta1);

printf ("Qual o estado: \n");
scanf ("%s", estado1);

printf ("Qual o nome da cidade: \n");
scanf ("%s", nomedacidade1);

printf ("Qual a população: \n");
scanf ("%i", &populacao1);

printf ("Qual a área em Km: \n");
scanf ("%f", &area1);

printf ("Qual o PIB: \n");
scanf ("%f", &pib1);

printf ("Qual o numero de ponto turistico: \n");
scanf ("%i", &pontoturistico1);




//Cadastro da segunda carta:

printf ("\n Vamos cadastrar a segunda carta:\n");
printf ("\n Qual o código da carta: \n");
scanf ("%s", codigodacarta2);

printf ("Qual o estado: \n");
scanf ("%s", estado2);

printf ("Qual o nome da cidade: \n");
scanf ("%s", nomedacidade2);

printf ("Qual a população: \n");
scanf ("%i", &populacao2);

printf ("Qual a área em Km: \n");
scanf ("%f", &area2);

printf ("Qual o PIB: \n");
scanf ("%f", &pib2);

printf ("Qual o ponto turistico: \n");
scanf ("%i", &pontoturistico2); 
*/

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

//Agora vamos comparar as duas cartas

printf ("\n Vamos comparar as duas cartas: \n");

if (populacao1 > populacao2){
    printf ("A carta 1 tem maior população. \n");
} else{
    printf ("A carta 2 tem maior população. \n");
}

if (area1 > area2){
    printf ("A carta 1 tem maior área em Km. \n");
} else{
    printf ("A carta 2 tem maior área em Km. \n");
}

if (pib1 > pib2){
    printf ("A carta 1 tem o PIB maior. \n");
} else{
    printf ("A carta 2 tem o PIB maior. \n");
}

if (pontoturistico1 > pontoturistico2){
    printf ("A carta 1 tem pontos turisticos maior. \n");
} else{
    printf ("A carta 2 tem pontos turisticos maior. \n");
}

if (densidadepopulacional1 < densidadepopulacional2){
    printf ("A carta 1 tem menor densidade populacional. \n");
} else{
    printf ("A carta 2 tem menor densidade populacional. \n");
}

if (percapita1 > percapita2){
    printf ("A carta 1 tem maior PIB per Capita. \n");
} else{
    printf ("A carta 2 tem maior PIB per Capita. \n");
}

//Agora vamos verificar qual carta é a vencedora
cartacencedora1 = (populacao1 + area1 + pib1 + pontoturistico1 + densidadepopulacional1 + percapita1);
cartacencedora1 = (populacao2 + area2 + pib2 + pontoturistico2 + densidadepopulacional2 + percapita2);

printf (" \n A carta vencedora é: \n");

if (cartacencedora1 > cartavencedora2){
    printf ("A carta 1 é a vencedora. \n");
} else{
    printf ("A carta 2 é a vencedora. /n");
}



    return 0;
}