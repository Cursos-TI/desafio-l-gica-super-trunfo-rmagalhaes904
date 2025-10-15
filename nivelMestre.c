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
    scanf(" %c", &C1estado);
    
    printf("Defina o código unico desta carta com a letra escolhida do estado, e um numero de 01 a 04. Ex: A01, A02\n");
    scanf("%s", C1codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", C1nomecidade);

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
    scanf("%s", C2codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", C2nomecidade);

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
    printf("___________________________________\n");
    printf("Carta 01:\n");
    printf("Estado: %c\n", C1estado);
    printf("Código: %s\n", C1codigocarta);
    printf("Cidade: %s\n", C1nomecidade);
    printf("População: %d\n", C1populacao);
    printf("PIB: R$%.3f\n", C1pib);
    printf("Area em KM Quadrado %.2fkm²\n", C1areakm);
    printf("Pontos Turisticos: %d\n", C1pontosturisticos);
    printf("Densidade Populacional: %.2f\n",C1densidadePopulacional);
    printf ("PIB Per Capita: %.2f\n",C1pibpercapita);
    printf("___________________________________\n");

    //Amostragem de dados / Exibindo a segunda carta criada.
    printf("___________________________________\n");
    printf("Carta 02:\n");
    printf("Estado: %c\n", C2estado);
    printf("Código: %s\n", C2codigocarta);
    printf("Cidade: %s\n", C2nomecidade);
    printf("População: %d\n", C2populacao);
    printf("PIB: R$%.3f\n", C2pib);
    printf("Area em KM Quadrado %.2fkm²\n", C2areakm);
    printf("Pontos Turisticos: %d\n", C2pontosturisticos);
    printf("Densidade Populacional: %.2f\n",C2densidadePopulacional);
    printf ("PIB Per Capita: %.2f\n",C2pibpercapita);
    printf("___________________________________\n");

    //Declarando variaveis de comparação.
    int comparacao1, comparacao2, escolhaComparacao1, escolhaComparacao2;

    printf("\n========== Escolha dos Atributos ==========\n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área em km²\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolhaComparacao1);

    switch (escolhaComparacao1) {
        case 1: 
        printf("\nVocê escolheu População\n"); 
        break;
        case 2: 
            printf("\nVocê escolheu PIB\n"); 
        break;
        case 3: 
            printf("\nVocê escolheu Área em km²\n"); 
        break;
        case 4: 
            printf("\nVocê escolheu Pontos Turísticos\n"); 
        break;
        case 5: 
            printf("\nVocê escolheu Densidade Demográfica\n"); 
        break;
        case 6: 
            printf("\nVocê escolheu PIB per Capita\n"); 
        break;
        default: 
            printf("\nOpção inválida!\n"); 
        return 0;
    }

    printf("\nAgora escolha o segundo atributo (diferente do primeiro):\n");

    if (escolhaComparacao1 != 1) {printf("1 - População\n");}
    if (escolhaComparacao1 != 2) {printf("2 - PIB\n");}
    if (escolhaComparacao1 != 3) {printf("3 - Área em km²\n");}
    if (escolhaComparacao1 != 4) {printf("4 - Pontos Turísticos\n");}
    if (escolhaComparacao1 != 5) {printf("5 - Densidade Demográfica\n");}
    if (escolhaComparacao1 != 6) {printf("6 - PIB per Capita\n");}

    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolhaComparacao2);

    // Validação da entrada
    if (escolhaComparacao2 < 1 || escolhaComparacao2 > 6) {
        printf("Opção inválida!\n");
    }

    // Impede repetir o mesmo atributo
    if (escolhaComparacao2 == escolhaComparacao1) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    }
    // Mensagem informando qual atributo foi escolhido
    switch (escolhaComparacao2) {
        case 1:
            printf("\nVocê escolheu População como segundo atributo.\n");
            break;
        case 2:
            printf("\nVocê escolheu PIB como segundo atributo.\n");
            break;
        case 3:
            printf("\nVocê escolheu Área em km² como segundo atributo.\n");
            break;
        case 4:
            printf("\nVocê escolheu Pontos Turísticos como segundo atributo.\n");
            break;
        case 5:
            printf("\nVocê escolheu Densidade Demográfica como segundo atributo.\n");
            break;
        case 6:
            printf("\nVocê escolheu PIB per Capita como segundo atributo.\n");
            break;
        default:
            printf("\nOpção inválida!\n");
            return 0;
    }

    // Comparação das Cartas 

    float C1atributo1 = 0, C2atributo1 = 0;
    float C1atributo2 = 0, C2atributo2 = 0;
    float somaC1 = 0, somaC2 = 0;

    // Primeiro atributo
    switch (escolhaComparacao1) {
        case 1: 
            C1atributo1 = C1populacao; C2atributo1 = C2populacao; 
        break;
        case 2: 
            C1atributo1 = C1pib; C2atributo1 = C2pib; 
        break;
        case 3: 
            C1atributo1 = C1areakm; C2atributo1 = C2areakm; 
        break;
        case 4: 
            C1atributo1 = C1pontosturisticos; C2atributo1 = C2pontosturisticos; 
        break;
        case 5: 
            C1atributo1 = C1densidadePopulacional; C2atributo1 = C2densidadePopulacional; 
        break;
        case 6: 
            C1atributo1 = C1pibpercapita; C2atributo1 = C2pibpercapita; 
        break;
    }

    // Segundo atributo
    switch (escolhaComparacao2) {
        case 1: 
            C1atributo2 = C1populacao; C2atributo2 = C2populacao; 
        break;
        case 2: 
            C1atributo2 = C1pib; C2atributo2 = C2pib; 
        break;
        case 3: 
            C1atributo2 = C1areakm; C2atributo2 = C2areakm; 
        break;
        case 4: 
            C1atributo2 = C1pontosturisticos; C2atributo2 = C2pontosturisticos; 
        break;
        case 5: 
            C1atributo2 = C1densidadePopulacional; C2atributo2 = C2densidadePopulacional; 
        break;
        case 6: 
            C1atributo2 = C1pibpercapita; C2atributo2 = C2pibpercapita; 
        break;
    }

    // Aplicando regra inversa da densidade
    float valor1C1 = C1atributo1;
    float valor1C2 = C2atributo1;
    float valor2C1 = C1atributo2;
    float valor2C2 = C2atributo2;

    if (escolhaComparacao1 == 5) {
        valor1C1 = 1 / C1atributo1;
        valor1C2 = 1 / C2atributo1;
    }
    if (escolhaComparacao2 == 5) {
        valor2C1 = 1 / C1atributo2;
        valor2C2 = 1 / C2atributo2;
    }

    //Soma dos atributos
    somaC1 = valor1C1 + valor2C1;
    somaC2 = valor1C2 + valor2C2;

    printf("\n========== Resultado da Comparação ==========\n");

    printf("Carta 1 - %s\n", C1nomecidade);

    if (escolhaComparacao1 == 1) {printf("População: %.2f\n", C1atributo1);}
    else if (escolhaComparacao1 == 2) {printf("PIB: %.2f\n", C1atributo1);}
    else if (escolhaComparacao1 == 3) {printf("Área em km²: %.2f\n", C1atributo1);}
    else if (escolhaComparacao1 == 4) {printf("Pontos Turísticos: %.2f\n", C1atributo1);}
    else if (escolhaComparacao1 == 5) {printf("Densidade Demográfica: %.2f\n", C1atributo1);}
    else if (escolhaComparacao1 == 6) {printf("PIB per Capita: %.2f\n", C1atributo1);}

    if (escolhaComparacao2 == 1) {printf("População: %.2f\n", C1atributo2);}
    else if (escolhaComparacao2 == 2) {printf("PIB: %.2f\n", C1atributo2);}
    else if (escolhaComparacao2 == 3) {printf("Área em km²: %.2f\n", C1atributo2);}
    else if (escolhaComparacao2 == 4) {printf("Pontos Turísticos: %.2f\n", C1atributo2);}
    else if (escolhaComparacao2 == 5) {printf("Densidade Demográfica: %.2f\n", C1atributo2);}
    else if (escolhaComparacao2 == 6) {printf("PIB per Capita: %.2f\n", C1atributo2);}

    printf("Soma dos atributos: %.2f\n\n", somaC1);

    printf("Carta 2 - %s\n", C2nomecidade);

    if (escolhaComparacao1 == 1) {printf("População: %.2f\n", C2atributo1);}
    else if (escolhaComparacao1 == 2) {printf("PIB: %.2f\n", C2atributo1);}
    else if (escolhaComparacao1 == 3) {printf("Área em km²: %.2f\n", C2atributo1);}
    else if (escolhaComparacao1 == 4) {printf("Pontos Turísticos: %.2f\n", C2atributo1);}
    else if (escolhaComparacao1 == 5) {printf("Densidade Demográfica: %.2f\n", C2atributo1);}
    else if (escolhaComparacao1 == 6) {printf("PIB per Capita: %.2f\n", C2atributo1);}

    if (escolhaComparacao2 == 1) {printf("População: %.2f\n", C2atributo2);}
    else if (escolhaComparacao2 == 2) {printf("PIB: %.2f\n", C2atributo2);}
    else if (escolhaComparacao2 == 3) {printf("Área em km²: %.2f\n", C2atributo2);}
    else if (escolhaComparacao2 == 4) {printf("Pontos Turísticos: %.2f\n", C2atributo2);}
    else if (escolhaComparacao2 == 5) {printf("Densidade Demográfica: %.2f\n", C2atributo2);}
    else if (escolhaComparacao2 == 6) {printf("PIB per Capita: %.2f\n", C2atributo2);}

    printf("Soma dos atributos: %.2f\n\n", somaC2);

    // Resultado final
    if (somaC1 > somaC2) {
        printf("########### A Carta 1 - %s foi a vencedora! ###########\n", C1nomecidade);
    } else if (somaC2 > somaC1) {
        printf("########### A Carta 2 - %s foi a vencedora! ###########\n", C2nomecidade);
    } else {
        printf("########### Houve um empate! ###########\n");
    }

    return 0;


}
