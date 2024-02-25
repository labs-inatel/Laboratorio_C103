#include <iostream>

using namespace std;

int sequencial(int vetor[], int tam, int x) // sintaxe da funcao
{
	bool encontrado = false; // varviavel auxiliar para busca
	int i = 0; // contador da posicao
	
	while (encontrado == false && i < tam) // Realizando a buscativa com base no tamanho do vetor e variavel encontrado false
		encontrado = vetor[i++] == x;  // comparando vetor com x e armazenando na variavel encontrado

	if (encontrado) // se  x foi encontrado 
		return (i - 1); // retorna a posicao dele
	else
		return -1; // senao, retorna -1
}
int main()
{
	int i = 0; // contador
	int num; // variavel auxilar para leitura
	int n; // numero de elementos dentro do vetor
	int x; // valor procurado
	int vetor[10]; // vetor
	int procurado; // variavel p/ armazenar retorno da função

	cin >> num; //lendo valores

	//Armazenando valores diferentes de -1
	while (num != -1)
	{
		vetor [i] = num;
		i++;
		cin >> num;
	}
	n = i;

	cin >> x; //Lendo valor x

	procurado = sequencial(vetor, n, x); // chamando função

	if(procurado == -1) //se a função retornar -1, nao possui acesso
		cout << x << " nao encontrado" << endl;
	else // senao
		cout <<  x << " encontrado na posicao " << procurado << endl; // possui acesso

	return 0;
}
