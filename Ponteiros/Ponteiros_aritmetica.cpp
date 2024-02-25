#include<iostream>

using namespace std;

int main()
{
	int vetor[3]; // vetor
	int *p = NULL; // ponteiro para varrer o vetor

	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = -3;

	cout << "vetor = " << vetor << endl; // apresenta o endereço do vetor (posição 0)
	cout << "*vetor = " << *vetor << endl; // apresenta o primeiro elemento do vetor

	p = vetor;
	cout << "*p = " << *p << endl; // vai no endereço e mostra o que tem la dentro

	p++; // desloca para o proximo endereço
	cout << "*p = " << *p << endl; // mostra o segundo elemento do vetor

	p++; // desloca para o proximo endereço
	cout << "*p = " << *p << endl; // mostra o terceiro elemento do vetor

	p--; // desloca para o endereço anterior
	cout << "*p = " << *p << endl; // mostra o segundo elemento do vetor novamente

	p--; // desloca para o endereço anterior
	cout << "*p = " << *p << endl; // mostra o primeiro elemento do vetor novamente
	return 0;

}
