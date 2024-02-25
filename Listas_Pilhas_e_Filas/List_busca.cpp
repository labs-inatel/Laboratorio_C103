#include<iostream>
#include<list>
using namespace std;

bool encontrar(list<int> lista, float x)
{
	list<int>::iterator p; // iterador para varrer a lista
	bool achou;

	for(p = lista.begin(); p != lista.end(); p++)
	{
		if(*p == x)
			achou = true;
	}
	return achou;
}
int main()
{
	list<int> lista; // ponteiro para a lista
	int x; // var aux para leitura de dados a serem inseridos na lista
	bool encontrado; // quantidade dos elementos da lista
	float y; // valor a ser encontrado

	// Inserindo elementos na lista
	cin >> x;

	while(x != 0)
	{
		lista.push_front(x);
		cin >> x;
	}
	cin >> y;

	encontrado = encontrar(lista, y);

	// Verificando se achou ou não:
	if(encontrado == true)
		cout << "Encontrado" << endl;
	else if (encontrado != true)
		cout << "Nao encontrado" << endl;

	//Liberando a memória utilizada pela lista
	while(!lista.empty())
		lista.pop_front();

	return 0;
}
