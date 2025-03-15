#include <stdio.h>
#include <string.h>


int main() {

    char cidade1[4], nome1[30], estado1[3]; 
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float dp1, pc1, Superpoder1;

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

     // Cálculos carta 1
   dp1 = (float) populacao1 / area1;
   pc1 = (float) (pib1 * 1000000000.0 / populacao1);
   float dp1_invertida = -(1.f / dp1);
   Superpoder1 = populacao1 + area1 + pib1 + pc1 + dp1_invertida;



   //------------------------------------------------------------------------------//

    char cidade2[4], estado2[3], nome2[30];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float dp2, pc2, Superpoder2;
    
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

    // Cálculos carta 1
    dp2 = (float) populacao2 / area2;
    pc2 = (float) (pib2 * 1000000000.0 / populacao2);
    float dp2_invertida = -(1.f / dp2);
    Superpoder2 = populacao2 + area2 + pib2 + pc2 + dp2_invertida;

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
    printf("Super Poder: %.2f\n", Superpoder1);

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
    printf("Super Poder: %.2f\n", Superpoder2);

    // Comparação das cartas

    printf("\n--------------------\n");
    //População:
    printf("\n -----Comparação das Cartas-----\n");
    printf("A População de %s: %d\n", nome1 , populacao1);
    printf("A População de %s: %d\n", nome2, populacao2);
    if(populacao1 > populacao2){
      printf("A Carta 1 (São Paulo) Venceu!\n");
    } else{
      printf("A Carta 2 (Rio de Janeiro) Venceu!\n");
    }

    printf("\n--------------------\n");
    //Area:
    printf("A Area de %s: %.2f\n", nome1, area1);
    printf("A Area de %s: %.2f\n", nome2, area2);
    if(area1 > area2){
      printf("A Carta 1 (São Paulo) Venceu!\n");
    } else{
      printf("A Carta 2 (Rio de Janeiro) Venceu!\n");
    }

    printf("\n--------------------\n");
    //PIB:
    printf("O PIB de %s: %.2f\n", nome1, pib1);
    printf("O PIB de %s: %.2f\n", nome2, pib2);
    if(pib1 > pib2){
      printf("A Carta 1 (São Paulo) Venceu!\n");
    } else{
      printf("A Carta 2 (Rio de Janeiro) Venceu!\n");
    }

    printf("\n--------------------\n");
     //Pontos Turisticos:
     printf("Os pontos turisticos de %s: %d\n", nome1, pontos_turisticos1);
     printf("Os pontos turisticos de %s: %d\n", nome2, pontos_turisticos2);
     if(pontos_turisticos1 > pontos_turisticos2){
       printf("A Carta 1 (São Paulo) Venceu!\n");
     } else{
       printf("A Carta 2 (Rio de Janeiro) Venceu!\n");
     }
 
     printf("\n--------------------\n");
    //Densidade populacional:
    printf("A Densidade Populacional  de %s: %.2f\n", nome1, dp1);
    printf("A Densidade Populacional de %s: %.2f\n", nome2, dp2);
    if(dp1 < dp2){
      printf("A Carta 1 (São Paulo) Venceu!\n");
    } else{
      printf("A Carta 2 (Rio de Janeiro) Venceu!\n");
    }

    printf("\n--------------------\n");
    //PIB percapita:
    printf("O PIB percapita de %s: %.2f\n", nome1, pc1);
    printf("O PIB percapita de %s: %.2f\n", nome2, pc2);
    if(pc1 > pc2){
      printf("A Carta 1 (São Paulo) Venceu!\n");
    } else{
      printf("A Carta 2 (Rio de Janeiro) Venceu!\n");
    }

    printf("\n--------------------\n");
    //Super Poder:
    printf("O Super Poder de %s: %.2f\n", nome1, Superpoder1);
    printf("O Super Poder de %s: %.2f\n", nome2, strupr);
    if(Superpoder1 > Superpoder2){
      printf("A Carta 1 (São Paulo) Venceu!\n");
    } else{
      printf("A Carta 2 (Rio de Janeiro) Venceu!\n");
    }

    
    return 0;
}