#include <stdio.h>

int main(){

    //Declarando variaveis / Variaveis relacionadas a primeira carta.
    char C1estado;
    char C1codigocarta[20];
    char C1nomecidade[50];
    int C1populacao;
    float C1pib;
    float C1areakm;
    int C1pontosturisticos;


    //Inicio da inserção de dados / Adicionando informações da primeira carta.
    printf("Carta 01: \n");
    printf("Digite uma letra entre A e H para representar um estado.\n");
    scanf("%c", &C1estado);
    
    printf("Defina o código unico desta carta com a letra escolhida do estado, e um numero de 01 a 04. Ex: A01, A02\n");
    scanf("%s", &C1codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &C1nomecidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &C1populacao);

    printf("Digite o PIB atual: \n");
    scanf("%f", &C1pib);

    printf("Digite a área em km quadrados: \n");
    scanf("%f", &C1areakm);

    printf("Digite quantos pontos turisticos possui a cidade: \n");
    scanf("%d", &C1pontosturisticos);


    //Declarando variaveis / Variaveis relacionadas a segunda carta.
    char C2estado;
    char C2codigocarta[20];
    char C2nomecidade[50];
    int C2populacao;
    float C2pib;
    float C2areakm;
    int C2pontosturisticos;


    //Inicio da inserção de dados / Adicionando informações da segunda carta.
    printf("Carta 02: \n");
    printf("Digite uma letra entre A e H para representar um estado.\n");
    scanf(" %c", &C2estado);
    
    printf("Defina o código unico desta carta com a letra escolhida do estado, e um numero de 01 a 04. Ex: A01, A02\n");
    scanf("%s", &C2codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &C2nomecidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &C2populacao);

    printf("Digite o PIB atual: \n");
    scanf("%f", &C2pib);

    printf("Digite a área em km quadrados: \n");
    scanf("%f", &C2areakm);

    printf("Digite quantos pontos turisticos possui a cidade: \n");
    scanf("%d", &C2pontosturisticos);


    //Declarando variavéis para calculo de densidade populacional e PIB per capita.

    float densidadePopulacionalC1;
    float pibC1;
    float densidadePopulacionalC2;
    float pibC2;

    //Realizando de fato o calculo da densidade populacional e PIB per capita.
    densidadePopulacionalC1 = C1populacao / C1areakm;
    pibC1 = C1pib / C1populacao;

    densidadePopulacionalC2 = C2populacao / C2areakm;
    pibC2 = C2pib / C2populacao;


    //Amostragem de dados / Exibindo a primeira carta criada.
    printf("----------------------------------\n");
    printf("Carta 01:\n");
    printf("Estado: %c\n", C1estado);
    printf("Código: %s\n", C1codigocarta);
    printf("Cidade: %s\n", C1nomecidade);
    printf("População: %d\n", C1populacao);
    printf("PIB: R$%.3f\n", C1pib);
    printf("Area em KM Quadrado: %.2fkm²\n", C1areakm);
    printf("Pontos Turisticos: %d\n", C1pontosturisticos);
    printf("Densidade Populacional: %.2f\n",densidadePopulacionalC1);
    printf ("PIB Per Capita: %.2f\n",pibC1);
    printf("----------------------------------\n");

    //Amostragem de dados / Exibindo a segunda carta criada.
    printf("----------------------------------\n");
    printf("Carta 02:\n");
    printf("Estado: %c\n", C2estado);
    printf("Código: %s\n", C2codigocarta);
    printf("Cidade: %s\n", C2nomecidade);
    printf("População: %d\n", C2populacao);
    printf("PIB: R$%.3f\n", C2pib);
    printf("Area em KM Quadrado: %.2fkm²\n", C2areakm);
    printf("Pontos Turisticos: %d\n", C2pontosturisticos);
    printf("Densidade Populacional: %.2f\n",densidadePopulacionalC2);
    printf ("PIB Per Capita: %.2f\n",pibC2);
    printf("----------------------------------\n");

    //Mostrando os atributos escolhidos de cada carta
    printf("Comparação das cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d.\n", C1nomecidade, C1populacao);
    printf("Carta 2 - %s: %d.\n", C2nomecidade, C2populacao);

    //Fazendo a comparação de apenas um atributo das cartas e mostrando qual a carta vencedora baseado na comparação o atributo "População"
    if (C1populacao > C2populacao){ 
        printf("Resultado: Carta 1 (%s) Venceu!", C1nomecidade);
    }else{
        printf("Resultado: Carta 2 (%s) Venceu!", C2nomecidade);
    }

    //Codigo Finalizado!!

    return 0;


}
