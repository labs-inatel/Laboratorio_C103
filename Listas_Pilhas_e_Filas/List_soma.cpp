#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista)
{
	list<int>::iterator p; // iterador para varrer a lista
	int soma = 0; // soma dos elementos da lista

	for(p = lista.begin(); p != lista.end(); p++)
		soma = soma + *p;

	return soma;
}
int main()
{
	list<int> lista; // ponteiro para a lista
	int x; // var aux para leitura de dados a serem inseridos na lista
	int total; // armazena retorno da função

	// Inserindo elementos na lista
	cin >> x;

	while(x != 0)
	{
		lista.push_front(x);
		cin >> x;
	}

	//Chamando a função
	total = soma(lista);
	
	// Calculando e mostrando a soma dos elementos da lista
	cout <<  total << endl;

	//Liberando a memória utilizada pela lista
	while(!lista.empty())
		lista.pop_front();

	return 0;
}