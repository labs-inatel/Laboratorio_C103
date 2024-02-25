#include<iostream>

using namespace std;

void bubbleSort(int vetor[], int tamanho) // sintaxe da funcao bubbleSort
{
	int i, j; // contadores
	int trab; // variavel auxiliar para armazenar elementos na troca
	bool troca; // variavel de sinalizacao de troca
	int limite; // variavel para armazenar tamanho limite do vetor

	troca = true; // atribuir true para variavel de sinalizacao de troca
	limite = tamanho - 1; // tamanho limite do vetor
	
	while (troca) // Se a variavel troca for true, entra no while
	{
		//Atribuir false para troca
		// Fazerum For para fazer a troca de acordo com a tamanho limite do vetor
		// Realizar a troca dos elementos, se valor armazenado em vetor[i] for maior que o valor de vetor[i+1]
		// Atribuir true para variavel troca, se houver troca de elementos
		// Atribuir valor de i para o contador j, para que o limite do vetor passe a ser a posicao do contador j
		troca = false; 
		cout << limite;
		for (i = 0; i < limite; i++) 
			if (vetor[i] > vetor[i + 1]) 
			{
				trab = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
			}
		limite = j;
	}
	
	for (j = 0; j < tamanho; j++) // apresentando o vetor resultado
			cout << vetor[j] << " ";
		
		cout << endl;
}
int main()
{
	int i = 0; // contador
	int num; // variavel auxilar para leitura
	int n; // numero de elementos dentro do vetor
	int vetor[10]; // vetor de elementos

	cin >> num; //lendo valores

	//Armazenar valores diferentes de 0 no vetor 
	while (num != 0)
	{
		vetor [i] = num;
		i++;
		cin >> num;
	}
	n = i;

	bubbleSort(vetor, n); // chamando função

	return 0;
}
