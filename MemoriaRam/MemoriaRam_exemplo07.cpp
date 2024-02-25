#include<iostream>

using namespace std;

int main() // Declarando variaveis
{
	int i; // contador
	int num; // variavel auxilar para leitura
	int n; // numero de elementos dentro do vetor
	int x; // valor procurado
	int vetor[10]; // vetor

	//Atribuindo valores p/ variaveis 
	i = 0;
	n = 0;

	cin >> num; //lendo valores

	//Armazenando valores diferentes de -1
	while (num != -1)
	{
		vetor [i] = num;
		i++;
		n++;
		cin >> num;
	}

	cin >> x; // lendo valor procurado

	for (i = 0; i < n; i++) // achando X e mostrando posicao
	{
		if (vetor [i] == x)
		{
			cout << "Possui acesso" << endl;
			break;
		}
	}

	if (vetor[i] != x) // Caso X não esteja no vetor
		cout << "Nao possui acesso" << endl;

	return 0;

}
