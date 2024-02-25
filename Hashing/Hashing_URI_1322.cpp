#include<iostream>
#include<cmath>
using namespace std;

int hash1(int k, int i, int m) // Sintaxe da função hashing - sondagem linear
{
	int total; // variavel para armazenar o valor da expressao

	total = (k + i) % m; // expressao para calcular posicao sendo armazenada na variavel total

	if(total >= 0)
		return total; // retorna posicao se total for um total positivo ou igual a zero
	else
		return total + m; // retorna a (posicao+tamanho) se o total for negativo
}
int main()
{
	int chave; // elemento 1
	int tamanho; // elemento 2
	int total; // variavel para receber hash
	int i;

	cin >> chave >> tamanho; // Ler a chave e o tamanho do vetor

	for(i = 0; i < tamanho; i++) // for para chamar a função e mostrar o vetor obtido
	{
		total = hash1(chave, i, tamanho);
		cout << total;

		if(i != tamanho - 1)
			cout << " ";
	}

	cout << endl;

	return 0;
}
