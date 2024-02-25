#include <iostream>
#include <list>
#include <cmath>

using namespace std;

void funcao_ordena(int vet[], int tamanho, int i, int j)
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vet[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vet[esq] < pivo)
			esq++;
		while (vet[dir] > pivo)
			dir--;
		if (esq => dir)
		{
			trab = vet[esq] ;
			vet[esq] = vet[dir] ;
			vet[dir] = trab;

			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		funcao_ordena(vet, tamanho, i, dir);
	if (j - esq >= 0)
		funcao_ordena(vet, tamanho, esq, j);
}
int main()
{
	list<int> lista1; // lista1
	list<int> lista2; // lista2
	list<int> lista3; // lista3 - junção das listas 1 e 2
	int vetor1[50]; // vetor para auxiliar na junção da lista1 á lista3
	int vetor2[50]; // vetor para auxiliar na junção da lista2 á lista3
	int i = 0; // contador
	int m = 0; // contador
	int tam; // tamanho da lista3
	int num; // var aux para leitura dos dados a serem inseridos nas listas 1 e 2
	int n; // quantidade de elementos inseridos nas listas 1 e 2

	// Inserindo elementos na lista1:
	cin >> num;

	while(num != 0)
	{
		lista1.push_back(num);
		i++;
		cin >> num;
	}

	// Inserindo elementos na lista2:
	cin >> num;

	while(num != 0)
	{
		lista2.push_back(num);
		i++;
		cin >> num;
	}
	n = i;
	i = 0;

	// Juntando as listas 1 e 2 em uma única lista3:
	while(!lista1.empty())
	{
		vetor1[i] = vetor2[i] = *lista1.begin();
		lista1.pop_front();
		i++;
	}
	while(!lista2.empty())
	{
		vetor1[i] = vetor2[i] = *lista2.begin();
		lista2.pop_front();
		i++;
	}
	tam = i - 1;
	funcao_ordena(vetor1, tam, m, i); // chamando a função que irá ordenar a lista3

	for (i = 0; i <= n; i++)
		for (m = 0; m < n; m++)
		{
			if (vetor1[i - 1] != vetor1[i] && vetor1[i] == vetor2[m])
				lista3.push_back(vetor1[i]);
		}

    //Apresentando a lista3:
	while(!lista3.empty())
	{
		if (i != *lista3.begin())
		{
			cout << *lista3.begin() << " "; // lista3.begin() aponta para o primeiro nó da lista
			i = *lista3.begin();
		}

		lista3.pop_front(); // remove o primeiro nó da lista
	}
	return 0;
}
