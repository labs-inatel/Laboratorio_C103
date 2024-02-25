#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int>pilha; // ponteiro para pilha

	//Inserindo elementos na pilha
	pilha.push_front(40);
	pilha.push_front(32);
	pilha.push_front(51);
	pilha.push_front(70);

	// Removendo e mostrando elementos da pilha
	while(!pilha.empty())
	{
		cout << *pilha.begin() << " "; // aponta o primeiro nó da lista
		pilha.pop_front(); // remove o primeiro nó da lista
	}
	cout << endl;

	return 0;
}
