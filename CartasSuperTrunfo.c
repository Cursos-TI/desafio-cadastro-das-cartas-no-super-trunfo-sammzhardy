#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    int código;
    char nome[50];
    int população;
    float área;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade: ");
    scanf("%d", &código);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &população);

    printf("Digite a área da cidade: ");
    scanf("%f", &área);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf ("O código da cidade é: %d \n", código);
    printf ("O nome da cidade é: %s \n", nome);
    printf ("A população da cidade é: %d \n", população);
    printf ("A área da cidade é: %.2f \n", área);

    return 0;
}
