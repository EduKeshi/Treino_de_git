#include <stdio.h> // Biblioteca para entradas e saidas, o ".h" é de header

int main() {
	// Mensagem de boas vindas
	printf("\n********************************************\n");
	printf("**Bem vindo ao nosso jogo de adivinhacao!**"); // Para printar na tela com a string formatada tem que usar o "printf"
	printf("\n********************************************\n");

	// Número secreto
	int numero_secreto = 42; 
	printf("O numero secreto e: %d.\n", numero_secreto);

	// Fazendo o input
	int chute;
	printf("\nQual e o seu chute?\n-Resposta: ");
	scanf("%d", &chute); // Eu quero ler uma sequência de digitos e salvar na variável chute, o & é para dizer que eu quero salvar no endereço do chute.
	printf("\nO seu chute foi %d.\n", chute);
	
	return 0;  
}