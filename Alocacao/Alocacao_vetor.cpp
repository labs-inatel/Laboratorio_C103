#include<iostream>

using namespace std;

int main()
{
	int *vetor= NULL; // ponteiro para um vetor
	int tam; // tamanho do vetor
	int i; // contador
	
	cin >> tam; // ler o tamanho do vetor
	
	vetor = new int[tam]; // alocar memoria para o vetor
	
	for(i=0;i<tam;i++) // preencher o vetor
		cin >> vetor[i];
	
	for(i=0;i<tam;i++) // mostrar o vetor
		cout << vetor[i] << " ";
	cout << endl;
	
	// liberar espaço de memória alocado do vetor
	delete[]vetor;
	
	return 0;
}
