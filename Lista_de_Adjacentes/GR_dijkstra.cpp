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

void dijkstra(list<no>adj[], int nVertices, int start, int end)
{
	int distance[20];
	int parent [20];
	bool intree [20];
	int u, v;
	int weight;
	int dist;
	int destino;
	int pai = end;
	list<no>::iterator p;
	list<int>pilha;

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
			weight = p->peso;
			if(distance[destino] > distance[v] + weight)
			{
				distance[destino] = distance[v] + weight;
				parent[destino] = v;
			}
		}
		v = 0;
		dist = INT_MAX;
		for(u = 0; u < nVertices; u++)
		{
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
		}
	} 
	while(pai != -1)
	{
		pilha.push_front(pai);
		pai = parent[pai];
	}
	cout << "Menor caminho: ";
	while(!pilha.empty())
	{
		cout << *pilha.begin() << " ";
		pilha.pop_front();
	}
	cout << endl;
	cout << "Custo: " << distance[end] << endl;
}

int main()
{
	list<no> adj[10]; // lista de adjacencia
	int nVertices; // numero de vertices do grafo
	int u, v; // origem e destino da aresta
	int p; // peso da aresta u-v
	list<no>::iterator q; // iterator para varrer a lista de adjacencia
	int orientado;// 0:nao orientado e 1: orientado
	int vtinicial; // vértice inicial do caminho
	int vtfinal; // vértice de destino

	// Lendo numero de vertices, se grafo é orientado ou não e vértice inicial da árvore:
	cin >> nVertices >> orientado >> vtinicial >> vtfinal;

	//Lendo e inserindo aresta:
	cin >> u >> v >> p;

	while(u != -1 && v != -1 && p != -1)
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}
	dijkstra(adj, nVertices, vtinicial, vtfinal);

	return 0;
}
