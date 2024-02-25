#include<iostream>

using namespace std;

int binaria(int vetor[], int tamanho, int x) // Funçao
{
	bool encontrado; // variavel logica pra x
	int baixo, meio, alto; // variaveis para filtrar o vetor

	// atribuindo valores para variaveis 
	baixo = 0; 
	alto = tamanho - 1;
	encontrado = false;

	while ((baixo <= alto) && (encontrado == false)) // 
	{
		meio = (baixo + alto) / 2; // verificando/calculando meio a partir dos valores de baixo e alto

		if (x < vetor[meio]) // se o x for menor q o vetor do meio
			alto = meio - 1; // filtra valores
		else if (x > vetor[meio]) // se o x maior q o vetor do meio
			baixo = meio + 1;  // filtra valores
		else
			encontrado = true; // senao, x foi encontrado
	}
	if (encontrado) 
		return meio; // retorna meio para x encontrado
	else
		return - 1; // retorna -1 para x nao encontrado
}
int main ()
{
	int i; // contador
	int num; // variavel auxilar para leitura
	int n; // numero de elementos dentro do vetor
	int x; // valor procurado
	int vetor[10]; // vetor
	int procurado;

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

	cin >> x; //Lendo valor x

	procurado = binaria(vetor, n, x); // chamando função

	if(procurado == -1) //se a função retornar -1, nao possui acesso
		cout << "Nao possui acesso" << endl; 
	else // senao
		cout << "Possui acesso" << endl; // possui acesso
}
