#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int> fila; // ponteiro para a fila
	
	// Inserindo elementos na fila
	fila.push_back(40);
	fila.push_back(32);
	fila.push_back(51);
	fila.push_back(70);
	
	// Removendo e mostrando os elementos da fila
	while(!fila.empty())
	{
		cout << *fila.begin() << " "; // fila.begin() aponta para o primeiro nó da lista
		fila.pop_front(); // remove o primeiro nó da lista
	}
	
	return 0;
}
