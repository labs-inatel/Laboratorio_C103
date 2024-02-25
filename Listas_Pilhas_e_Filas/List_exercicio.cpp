#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lista1; // ponteiro para a lista1 - venda
	list<int> lista2; // ponteiro para a lista2 - estoque
	list<int>::iterator p; // iterador para varrer a lista1
	list<int>::iterator q; // iterador para varrer a lista2
	int n; // número de operações
	int cod, produto; // codigo e produto
	int i; // contador

	// Inserindo elementos na lista
	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> cod;

		if(cod == 1)
		{
			cin >> produto;
			lista1.push_back(produto);
		}
		else if(cod == 2)
		{
			q=lista1.begin();
			lista2.push_front(*q);
			lista1.pop_front();
		}
	}

	cout << "Estoque: ";
	for(q = lista1.begin(); q != lista1.end(); q++)
		cout << *q << " ";

	cout << endl << "Venda: ";
	for(p = lista2.begin(); p != lista2.end(); p++)
		cout << *p << " ";

	//Liberando a memória utilizada pelas listas
	while(!lista1.empty())
		lista1.pop_front();

	while(!lista2.empty())
		lista2.pop_front();

	return 0;
}
