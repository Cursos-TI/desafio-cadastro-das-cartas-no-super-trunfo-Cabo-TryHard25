#include <stdio.h>

int main() {
    char cidade[20] = "Acre";
    char letra = 'a';
    char Cidade[20] = "Rondonia";
    char Letra = 'r'; 
    double salarioDoPovo = 30554.25;
    int populacao, pontos;
    char opcao;

    printf("Bem-vindo ao jogo super trunfo\n");
    printf("Menu de jogo\n");


    printf("Escolha uma opção: ");
    scanf(" %c", &opcao);

    printf("Cadastre sua cidade: ");
    scanf("%s", cidade);

 
    printf("O salário do povo é: %.2lf\n", salarioDoPovo); 
    printf("Cidade cadastrada: %s\n", cidade);
    printf("Opção escolhida: %c\n", opcao);

    return 0;
}
