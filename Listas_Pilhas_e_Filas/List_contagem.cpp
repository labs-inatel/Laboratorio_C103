#include<iostream>
#include<list>
using namespace std;

int contar(list<int> lista)
{
	int quant = 0;
	list<int>::iterator p; // iterador para varrer a lista
	
	for(p = lista.begin(); p != lista.end(); p++)
		quant++;
	
	return quant;
}

int main()
{
	list<int> lista; // ponteiro para a lista
	int x; // var aux para leitura de dados a serem inseridos na lista
	int quantidade; // quantidade dos elementos da lista

	// Inserindo elementos na lista
	cin >> x;

	while(x != 0)
	{
		lista.push_front(x);
		cin >> x;
	}
	
	quantidade = contar(lista);
	
    // Calculando e mostrando a soma dos elementos da lista
	cout << quantidade << endl;

	//Liberando a memória utilizada pela lista
	while(!lista.empty())
		lista.pop_front();
	return 0;
}
