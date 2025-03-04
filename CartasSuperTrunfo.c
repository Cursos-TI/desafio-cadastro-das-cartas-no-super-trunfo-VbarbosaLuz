#include <stdio.h>
#include <string.h>


int main() {
    char cidade1[4], nome1[30], estado1[3]; 
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float dp1, pc1;

    // Coleta de Dados Carta 1
    printf("\n----- Cadastrar carta 1 -----\n");
    printf("Digite o estado (A-H): ");
    scanf("%2s", estado1);

    printf("Digite o número da cidade (ex: A01): ");
    scanf("%3s", cidade1);

    printf("Digite o Nome da Cidade: ");
    scanf("%*c"); // Limpa buffer antes de fgets()
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();

    pib1 = pib1 * 1000000000.0f;
    dp1 = (float) populacao1 / area1;
    pc1 =  pib1 / (float) populacao1;

     // Coleta de Dados Carta 2
    char cidade2[4], estado2[3], nome2[30];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float dp2, pc2;
    // Coleta de Dados Carta 2
    printf("\n----- Cadastrar carta 2 -----\n");
    printf("Digite o estado (A-H): ");
    scanf("%2s", estado2);

    printf("Digite o número da cidade (ex: A01): ");
    scanf("%3s", cidade2);

    printf("Digite o Nome da Cidade: ");
    scanf("%*c"); // Limpa buffer antes de fgets()
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &pontos_turisticos2);
    getchar();

    pib2 = pib2 * 1000000000.0f;
    dp2 = (float) populacao2 / area2;
    pc2 = pib2 / (float) populacao2;

    // Exibir Dados Carta 1
    printf("\n----- Dados Da Carta 1 -----\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código da Carta: %s\n", estado1, cidade1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per Capita: %.2f\n", pc1);

    // Exibir Dados Carta 2
    printf("\n----- Dados Da Carta 2 -----\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código da Carta: %s\n", estado2, cidade2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", dp2);
    printf("PIB per Capita: %.2f\n", pc2);
    
    return 0;
}