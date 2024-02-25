#include<iostream>
#include<list>
#include<limits.h>
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
void prim(list<no>adj[], int nVertices, int start)
{
	list<no>::iterator p;
	int u, v;
	int destino;
	int dist;
	bool intree[20];
	int parent[20];
	int weight;
	int distance[20];
	int custo = 0;

	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}
	distance[start] = 0;
	v = start;

	while(intree[v] == false)
	{
		intree[v] = true;
		for(p = adj[v].begin(); p != adj[v].end(); p++)
		{
			destino = p->v;
			weight = p-> peso;
			if(distance[destino] > weight && intree[destino] == false)
			{
				distance[destino] = weight;
				parent[destino] = v;
			}
		}
		v = 0;
		dist = INT_MAX;
		for(u = 0; u < nVertices; u++)
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
	}
	cout << "Arvore Geradora Minina: " << endl;
	for(u = 1; u < nVertices; u++)
	{
		cout << parent[u] << " " << u << endl;
		custo += distance[u];
	}
	cout << "Custo: " << custo << endl;
}
int main()
{
	list<no> adj[10]; // lista de adjacencia
	int nVertices; // numero de vertices do grafo
	int u, v; // origem e destino da aresta
	int p; // peso da aresta u-v
	list<no>::iterator q; // iterator para varrer a lista de adjacencia
	int orientado;// 0:nao orientado e 1: orientado
	int vertarvore; // vértice inicial da árvore

	// Lendo numero de vertices, se grafo é orientado ou não e vértice inicial da árvore:
	cin >> nVertices >> orientado >> vertarvore;

	//Lendo e inserindo aresta:
	cin >> u >> v >> p;

	while(u != -1 && v != -1 && p != -1)
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}
	prim(adj, nVertices, vertarvore);

	return 0;
}
