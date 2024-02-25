#include<iostream>
#include<list>
using namespace std;

struct no
{
	int v; // destino da aresta
	int peso; // peso da aresta
};
int main()
{
	list<no> adj[10]; // lista de adjacencia
	int nVertices = 4; // numero de vertices do grafo
	int u, v; // origem e destino da aresta
	int p; // peso da aresta u-v
	int i; // contador
	no aux; // var aux para inserir arestas em adj
	list<no>::iterator q; // iterator para varrer a lista de adjacencia
	int orientado = 0; // 0:nao orientado e 1: orientado

	//Lendo e inserindo aresta:
	for(i = 0; i < 4; i++)
	{
		cin >> u >> v >> p;
		aux.v = v;
		aux.peso = p;
		adj[u].push_back(aux);
		
		
		if (orientado == 0) // cria a aresta de volta p/ grafos nao orientados
		{
			aux.v = u;
			adj[v].push_back(aux);
		}
	}

	//Mostrando a lista de adjacencia:
	for(i = 0; i < nVertices; i++)
		for(q = adj[i].begin(); q != adj[i].end(); q++)
			cout << i << " " << q->v << " " << q-> peso << endl;

	return 0;
}

