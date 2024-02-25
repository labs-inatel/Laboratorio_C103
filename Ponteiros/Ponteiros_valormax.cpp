#include<iostream>

using namespace std;

int main()
{
	int *vetor = NULL; // ponteiro para um vetor
	int tam; // tamanho do vetor
	int i; // contador
	int maior; // variavel para armazenar o maior elemento
	
	maior = -1000;
	
	cin >> tam; // ler o tamanho do vetor

	vetor = new int[tam]; // alocar memoria para o vetor

	for(i = 0; i < tam; i++) // preencher o vetor
	{
		cin >> vetor[i];

		if(vetor[i] > maior) // verificando qual o maior elemento do vetor
			maior = vetor[i];
	}
	cout << maior << endl; // apresentando o maior elemento

	// liberar espaço de memória alocado do vetor
	delete[]vetor;

	return 0;
}
