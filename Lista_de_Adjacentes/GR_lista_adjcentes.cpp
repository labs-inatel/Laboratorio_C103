#include<iostream>
#include<list>
using namespace std;

struct no
{
	int v; // destino da aresta
	int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux; // var aux para inserir arestas em adj

	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	if (orientado == 0) // cria a aresta de volta p/ grafos nao orientados
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

int main()
{
	list<no> adj[10]; // lista de adjacencia
	int nVertices; // numero de vertices do grafo
	int u, v; // origem e destino da aresta
	int p; // peso da aresta u-v
	int i; // contador
	list<no>::iterator q; // iterator para varrer a lista de adjacencia
	int orientado; // 0:nao orientado e 1: orientado

	// Lendo numero de vertices e se grafo é orientado ou não:
	cin >> nVertices >> orientado;
	
	//Lendo e inserindo aresta:
	cin >> u >> v >> p;
	
	while(u != -1 && v != -1 && p != -1)
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}

	//Mostrando a lista de adjacencia:
	for(i = 0; i < nVertices; i++)
		for(q = adj[i].begin(); q != adj[i].end(); q++)
			cout << i << " " << q->v << " " << q-> peso << endl;

	return 0;
}
