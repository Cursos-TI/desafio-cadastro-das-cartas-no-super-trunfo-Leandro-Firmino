#include <stdio.h>

int main(){
    
    //Variáveis
    char estado, codigo[4], cidade[20];
    char estado2, codigo2[4], cidade2[20];
    int habitantes, ponto;
    int habitantes2, ponto2;
    float area, pib;
    float area2, pib2;
    float densidade;
    float densidade2;
    float pibpercapita;
    float pibpercapita2;

    //Cadastros de informações da primeira carta
    printf("Informe os dados da Carta 1:\n");
    
    printf("Estado:");
    scanf("%c", &estado);

    printf("Codigo da Carta:");
    scanf("%s", &codigo);
    
    printf("Cidade:");
    scanf("%s", &cidade);

    printf("Número de Habitantes:");
    scanf("%d", &habitantes);

    printf("Área:");
    scanf("%f", &area);
    
    printf("PIB:");
    scanf("%f", &pib);
    
    printf("Pontos Turisticos:");
    scanf("%d", &ponto);
    
    //Cadastro de informações da segunda carta
    printf("Informe os dados da Carta 2:\n");

    printf("Estado:");
    scanf(" %c", &estado2);

    printf("Codigo da Carta:");
    scanf("%s", &codigo2);
    
    printf("Cidade:");
    scanf("%s", &cidade2);

    printf("Número de Habitantes:");
    scanf("%d", &habitantes2);

    printf("Área:");
    scanf("%f", &area2);
    
    printf("PIB:");
    scanf("%f", &pib2);
    
    printf("Pontos Turisticos:");
    scanf("%d", &ponto2);

    //Calculando densidade Populacional e Pib per Capita
    densidade = (float) habitantes / area;
    pibpercapita = (float) pib / habitantes;
    densidade2 = (float) habitantes2 / area2;
    pibpercapita2 = (float) pib2 / habitantes2;

    //Exibe na tela os atributos das carta 1
    printf("Carta 1\n");
    printf("estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Número de Habitantes: %d\n", habitantes);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Pontos Turisticos: %d\n", ponto);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f\n", pibpercapita);
     
    //Exibe na tela os atributos das carta 2
    printf("Carta 2\n");
    printf("estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Número de Habitantes: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turisticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    return 0;


}
