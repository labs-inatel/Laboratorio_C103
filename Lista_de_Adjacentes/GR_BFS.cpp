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

void bfs(list<no>adj[], int nVertices, int s)
{
	list<int>Q;
	list<no>::iterator it;
	int u, v;
	int state[20];
	int p [20];
	
	for(u = 0; u < nVertices; u++)
	{
		if(u != s)
		{
			state[u] = -1; // undiscovered
			p[u] = -1;
		}
	}

	state[s] = 0; // discovered
	p[s] = -1;
	Q.push_back(s);

	while(!Q.empty())
	{
		u = Q.front();
		Q.pop_front();
		cout << u << endl;
		for(it = adj[u].begin(); it != adj[u].end(); it++)
		{
			v = it-> v;
			cout << u << v << endl;
			if(state[v] == -1)
			{
				state[v] = 0; // discovered
				p[v] = u;
				Q.push_back(v);
			}
		}
		state[u] = 1; // processed
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
	int orientado = 0; // 0:nao orientado e 1: orientado
	int s; // segundo vertice da lista

	// Lendo numero de vertices e se grafo é orientado ou não:
	cin >> nVertices >> s;

	//Lendo e inserindo aresta:
	cin >> u >> v >> p;

	while(u != -1 && v != -1 && p != -1)
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}

	bfs(adj, nVertices, s);

	return 0;
}
