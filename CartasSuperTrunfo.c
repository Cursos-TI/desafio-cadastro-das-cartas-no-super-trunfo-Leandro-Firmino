#include <stdio.h>

int main(){
    
    //Variáveis
    char estado, codigo[4], cidade[20];
    char estado2, codigo2[4], cidade2[20];
    int ponto, ponto2;
    unsigned long int habitantes, habitantes2;
    
    float area, pib;
    float area2, pib2;
    float densidade;
    float densidade2;
    float pibpercapita;
    float pibpercapita2;

    float superPoder, superPoder2;
    
    int resultadoHabitantes=2;
    int resultadoArea=2;
    int resultadoPib=2;
    int resultadoPontosTuristicos=2;
    int resultadoDensidadePopulacional=2;
    int resultadoPibPercapita=2;
    int resultadoSuperPoder=2;

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

    //Calculando o "Super Poder"
    superPoder = (float) habitantes + area + pib + ponto + pibpercapita - densidade;
    superPoder2 = (float) habitantes2 + area2 + pib2 + ponto2 + pibpercapita2 - densidade2;

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
    printf("Super Poder: %f\n", superPoder);
     
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
    printf("Super Poder: %f\n", superPoder2);

    //Comparando os atributos das cartasa
    resultadoHabitantes -= habitantes > habitantes2;
    resultadoArea -= area > area2;
    resultadoPib -= pib > pib2;
    resultadoPontosTuristicos -= ponto > ponto2;
    resultadoDensidadePopulacional -= densidade > densidade2;
    resultadoPibPercapita -= pibpercapita < pibpercapita2;
    resultadoSuperPoder -= superPoder > superPoder2;
    printf("*** Comparação das Cartas ***\n");
    printf("População: Carta %d venceu (%d)\n",resultadoHabitantes, habitantes > habitantes2);
    printf("Área: Carta %d venceu (%d)\n", resultadoArea, area > area2);
    printf("PIB: Carta %d venceu (%d)\n",resultadoPib, pib > pib2);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n",resultadoPontosTuristicos, ponto > ponto2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidadePopulacional, densidade > densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPibPercapita, pibpercapita < pibpercapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder, superPoder > superPoder2);

    return 0;

}