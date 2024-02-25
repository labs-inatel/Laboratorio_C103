#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
    int i, j; // contadores
    int chave;
    for (j = 1; j < tamanho; j++)
    {
        chave = vetor[j];
        cout << "chave = " << chave << endl;
        i = j - 1;
        while ((i >= 0) && (vetor[i] > chave))
        {
            vetor[i + 1] = vetor[i];
            i = i - 1;
        }
        vetor[i + 1] = chave;
    }
}
int main()
{
	int i = 0; // contador
	int num; // variavel auxilar para leitura
	int n; // numero de elementos dentro do vetor
	int vetor[10]; // vetor de elementos

	cin >> num; //lendo valores

	//Armazenando valores diferentes de 0
	while (num != 0)
	{
		vetor [i] = num;
		i++;
		cin >> num;
	}
	n = i;

	insercaoDireta(vetor, n); // chamando função

	return 0;
}
