#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura "Pessoa"
typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

// Função que recebe um ponteiro para uma pessoa e altera sua idade
void mudarIdade(Pessoa *p, int novaIdade) {
    p->idade = novaIdade;
}

int main() {
    // Declaração de uma variável do tipo Pessoa
    Pessoa pessoa;

    // Atribuição de valores para os campos da estrutura
    strcpy(pessoa.nome, "João");
    pessoa.idade = 25;
    pessoa.altura = 1.75;

    // Chamada da função mudarIdade passando o endereço da pessoa e uma nova idade
    mudarIdade(&pessoa, 30);

    // Impressão dos valores da estrutura
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %f\n", pessoa.altura);

    return 0;
}

