#include <stdio.h>

struct estudante {
	char primeiroNome[50];
	int matricula;
	float nota;
} s[5];

int main() {
	int i;
	printf("Entre com as informações dos estudantes:\n");

	for(i=0;i<5;i++) {
		s[i].matricula = i + 1;
		printf("Matrícula número %d,\n", s[i].matricula);
		printf("Entre com o primeiro nome: ");
		scanf("%s", s[i].primeiroNome);
		printf("Entre com a nota: ");
		scanf("%f", &s[i].nota);
	}

	printf("Mostrando as informações:\n\n");

	for(i=0;i<5;i++){
		printf("Matrícula número: %d\n", i+1);
		printf("Primeiro nome: ");
	        puts(s[i].primeiroNome);
		printf("Nota: %.1f", s[i].nota);
		printf("\n");
	}
	return 0;
}
