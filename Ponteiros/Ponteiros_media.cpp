#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int *vetor = NULL; // ponteiro para um vetor
	int tam; // tamanho do vetor
	int i; // contador
	float soma; // variavel para somar elementos
	float media; // variavel para armazenar media

	soma = 0; // atribuindo 0 para variavel soma nao pegar lixo de memoria
	
	cin >> tam; // ler o tamanho do vetor

	vetor = new int[tam]; // alocar memoria para o vetor

	for(i = 0; i < tam; i++) // preencher o vetor
		cin >> vetor[i];

	for(i = 0; i < tam; i++) // mostrar o vetor
		soma = soma + vetor[i];

	media = soma / tam;

	cout << fixed << setprecision(2);
	cout << media << endl;

	// liberar espaço de memória alocado do vetor
	delete[]vetor;

	return 0;
}