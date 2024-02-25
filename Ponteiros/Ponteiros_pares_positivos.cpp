#include<iostream>

using namespace std;

int main()
{
	int *vetor = NULL; // ponteiro para um vetor
	int tam; // tamanho do vetor
	int i; // contador
	int pares_positivos; // variavel para armazenar o pares e positivos
	
	pares_positivos = 0; // atribuindo 0 para a variavel nao pegar lixo de memoria
	
	cin >> tam; // ler o tamanho do vetor

	vetor = new int[tam]; // alocar memoria para o vetor

	for(i = 0; i < tam; i++) // preencher o vetor
	{
		cin >> vetor[i];

		if(vetor[i] >= 0 && vetor[i]%2 == 0) // verificando quais elementos são pares e positivos
			pares_positivos++; // somando a quantidade de elementos pares e positivos
	}
	cout << pares_positivos << endl; // apresentando a quantidade de elementos pares e positivos

	// liberar espaço de memória alocado do vetor
	delete[]vetor;

	return 0;
}