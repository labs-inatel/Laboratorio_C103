#include<iostream>
#include<cmath>
#include<iomanip> 
using namespace std;

struct dados
{
	int codigo; // codigo do produto
	int quantidade; // quantidade em estoque
	float preco; // preco unitario
};

// A funcao gira em torno do pivo que seria a posicao do meio
//atraves desta posicao, se compara os valores da sua direita e esquerda
//se os valores da esquerda do pivo forem menores que o pivo, incrementa esquerda
//se os valores da direita do pivo forem maiores que o pivo, decrementa direita
// Logo em seguida, compara se a esquerda do pivo é maior/igual a direita, permitindo a troca das posicoes
void quickSort(dados estoque[], int tam, int i, int j) // sintaxe da funcao quickSort
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	float trab_preco;
	pivo = estoque[(int)round((esq + dir) / 2.0)].codigo;
	do
	{
		while (estoque[esq].codigo < pivo) //esquerda do pivo
			esq++;
		while (estoque[dir].codigo > pivo) //direita do pivo
			dir--;
		if (esq <= dir)
		{
			trab = estoque[esq].codigo;
			estoque[esq].codigo = estoque[dir].codigo;
			estoque[dir].codigo = trab;

			trab = estoque[esq].quantidade;
			estoque[esq].quantidade = estoque[dir].quantidade;
			estoque[dir].quantidade = trab;

			trab_preco = estoque[esq].preco;
			estoque[esq].preco = estoque[dir].preco;
			estoque[dir].preco = trab_preco;

			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		quickSort(estoque, tam, i, dir);
	if (j - esq >= 0)
		quickSort(estoque, tam, esq, j);

}

int main()
{
	dados estoque[100]; // struct
	int n; // quantidade de elementos
	int i; // contador
	int j = 0; // contador

	cin >> n; // ler quantidade de elementos

	for(i = 0; i < n; i++) // Fazer leitura de codigo, quantidade e preco
	{
		cin >> estoque[i].codigo;
		cin >> estoque[i].quantidade;
		cin >> estoque[i].preco;
	}

	quickSort(estoque, n, j, i); // Chamar funcao

	for(i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2);
		cout << "Codigo: " << estoque[i].codigo << endl;
		cout << "Quantidade em estoque: " << estoque[i].quantidade << endl;
		cout << "Preco unitario: R$ " << estoque[i].preco << endl << endl;
	}

	return 0;
}