#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int> lista; // ponteiro para a fila
	list<int>::iterator p; // iterador para varrer a lsita
	int x; // var aux para leitura de dados a serem inseridos na lista
	int soma; // soma dos elementos da lista

	// Inserindo elementos na fila: 2 1 5 0
	cin >> x;

	while(x != 0)
	{
		lista.push_front(x);
		cin >> x;
	}

	// Removendo e mostrando os elementos da fila
	for(p = lista.begin(); p != lista.end(); p++)
		soma = soma + *p;
	
    // Calculando e mostrando a soma dos elementos da lista
	cout << "soma = " << soma << endl;

	//Liberando a memória utilizada pela lista
	while(!lista.empty())
		lista.pop_front();

	return 0;
}
