#include<iostream>
#include<cmath>
using namespace std;

struct dado 
{
	int k; // tamanho da tabela
	int status; // chaves da tabela
};
int hash_aux(int k, int m) // Sintaxe da função hashing 
{
	int total;

	total = k % m; 

	// retornando posições
	if(total >= 0)
		return total;
	else
		return total + m;
}
int hash1(int k, int i, int m) // Sintaxe da função hashing - sondagem linear
{
	return (hash_aux(k, m) + i) % m; 
}

int hash_insert(dado T[], int m, int k) // sintaxe da função de inserção de elementos
{
	int j; // contador
	int i = 0; // contador
	do
	{
		j = hash1(k, i, m); // atribuindo a funcao hash1 para o contador
		if (T[j].status != 1) // verificando o status da posicao
		{
			T[j].k = k;
			T[j].status = 1;
			return j; // retornando a posicao da chave
		}
		else
			i = i + 1;
	}
	while (i != m);

	return -1; // retornando -1 se a chave não for possivel inserir
}
int main()
{
	dado T[30]; // struct para armazenar tamanho e chaves da tabela
	int i = 0; // contador
	int k; // chaves a serem inseridas
	int total; // variavel para armazenar o retorno da função hash_insert
	int tamanho; // tamanho da tabela

	cin >> tamanho; // fazendo leitura do tamanho da tabela

	// acresentando -1 em todas as posições de k dentro da struct
	for (i = 0; i < tamanho; i++)
	{
		T[i].k = -1;
		T[i].status = -1;
	}

	// fazendo a leitura das chaves e comparando se não é zero
	cin >> k;
	i = 0;
	while (k != 0)
	{
		if (k != 0)
		{
			total = hash_insert(T, tamanho, k); // chamando a função hash_insert
			i++;
		}
		cin >> k;
	}

	// apresentando o vetor resultado
	for (i = 0; i < tamanho; i++)
	{
		cout << T[i].k;

		if(i != tamanho - 1)
			cout << " ";
	}
	cout << endl;

	return 0;
}
