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

    float C1densidadePopulacional;
    float C1pibpercapita;
    float C2densidadePopulacional;
    float C2pibpercapita;

    //Realizando de fato o calculo da densidade populacional e PIB per capita.
    C1densidadePopulacional = C1populacao / C1areakm;
    C1pibpercapita = C1pib / C1populacao;

    C2densidadePopulacional = C2populacao / C2areakm;
    C2pibpercapita = C2pib / C2populacao;


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
    printf("Densidade Populacional: %.2f\n",C1densidadePopulacional);
    printf ("PIB Per Capita: %.2f\n",C1pibpercapita);
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
    printf("Densidade Populacional: %.2f\n",C2densidadePopulacional);
    printf ("PIB Per Capita: %.2f\n",C2pibpercapita);
    printf("----------------------------------\n");

   
    //Declarando a variável de escolha do usuário para comparação.
    int escolhaComparacao;

    //Iniciando seleção de atributo.
    printf("Vamos iniciar a comparação das cartas\n");
    printf("Qual atributo das cartas deseja comparar?\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Area em KM Quadrado:\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    scanf("%d", &escolhaComparacao);

    //Utilizando o switch para utilizar a opção definida para usar a comparação adequada para cada atributo.
    switch (escolhaComparacao){
    case 1:
        printf("----------------------------------\n");
        printf("Atributo selecionado para comparação: População!\n");
        printf("Carta 1 - %s - População: %d\n", C1nomecidade, C1populacao);
        printf("Carta 2 - %s - População: %d\n", C2nomecidade, C2populacao);
        printf("----------------------------------\n");

        if (C1populacao > C2populacao){
            printf("Carta 1 - %s Venceu!\n", C1nomecidade);
        }else if(C1populacao <  C2populacao){
            printf("Carta 2 - %s Venceu!\n", C2nomecidade);
        }else{
            printf("Empate entre as duas cartas!\n");
        }
    break;
    case 2:
        printf("----------------------------------\n");
        printf("Atributo selecionado para comparação: PIB!\n");
        printf("Carta 1 - %s - PIB: %.2f\n", C1nomecidade, C1pib);
        printf("Carta 2 - %s - PIB: %.2f\n", C2nomecidade, C2pib);
        printf("----------------------------------\n");

        if (C1pib > C2pib){
            printf("Carta 1 - %s Venceu!\n", C1nomecidade);
        }else if(C1pib <  C2pib){
            printf("Carta 2 - %s Venceu!\n", C2nomecidade);
        }else{
            printf("Empate entre as duas cartas!\n");
        } 
    break;
    case 3:
        printf("----------------------------------\n");
        printf("Atributo selecionado para comparação: Area!\n");
        printf("Carta 1 - %s - Area: %.2f\n", C1nomecidade, C1areakm);
        printf("Carta 2 - %s - Area: %.2f\n", C2nomecidade, C2areakm);
        printf("----------------------------------\n");

        if (C1areakm > C2areakm){
            printf("Carta 1 - %s Venceu!\n", C1nomecidade);
        }else if(C1areakm <  C2areakm){
            printf("Carta 2 - %s Venceu!\n", C2nomecidade);
        }else{
            printf("Empate entre as duas cartas!\n");
        }  
    break;
    case 4:
        printf("----------------------------------\n");
        printf("Atributo selecionado para comparação: Pontos Turisticos!\n");
        printf("Carta 1 - %s - Pontos Turisticos: %d\n", C1nomecidade, C1pontosturisticos);
        printf("Carta 2 - %s - Pontos Turisticos: %d\n", C2nomecidade, C2pontosturisticos);
        printf("----------------------------------\n");

        if (C1pontosturisticos > C2pontosturisticos){
            printf("Carta 1 - %s Venceu!\n", C1nomecidade);
        }else if(C1pontosturisticos <  C2pontosturisticos){
            printf("Carta 2 - %s Venceu!\n", C2nomecidade);
        }else{
            printf("Empate entre as duas cartas!\n");
        }   
    break;
    case 5:
        printf("----------------------------------\n");
        printf("Atributo selecionado para comparação: Densidade Populacional!\n");
        printf("Carta 1 - %s - Densidade Populacional: %.2f\n", C1nomecidade, C1densidadePopulacional);
        printf("Carta 2 - %s - Densidade Populacional: %.2f\n", C2nomecidade, C2densidadePopulacional);
        printf("----------------------------------\n");

        if (C1densidadePopulacional < C2densidadePopulacional){
            printf("Carta 1 - %s Venceu!\n", C1nomecidade);
        }else if(C1densidadePopulacional >  C2densidadePopulacional){
            printf("Carta 2 - %s Venceu!\n", C2nomecidade);
        }else{
            printf("Empate entre as duas cartas!\n");
        }  
    break;
    case 6:
        printf("----------------------------------\n");
        printf("Atributo selecionado para comparação: PIB per capita!\n");
        printf("Carta 1 - %s - PIB per capita: %.2f\n", C1nomecidade, C1pibpercapita);
        printf("Carta 2 - %s - PIB per capita: %.2f\n", C2nomecidade, C2pibpercapita);
        printf("----------------------------------\n");

        if (C1pibpercapita > C2pibpercapita){
            printf("Carta 1 - %s Venceu!\n", C1nomecidade);
        }else if(C1pibpercapita < C2pibpercapita){
            printf("Carta 2 - %s Venceu!\n", C2nomecidade);
        }else{
            printf("Empate entre as duas cartas!\n");
        }          
    break;
    default:
        printf("Opção Invalida!\n");
    break;
    }

    //Fim do Codigo.
    return 0;


}
