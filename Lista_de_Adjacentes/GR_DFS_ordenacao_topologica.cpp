#include<iostream>
#include<list>
using namespace std;

struct no
{
	int v; // destino da aresta
};
void cria_aresta(list<no>adj[], int u, int v, int orientado)
{
	no aux; // var aux para inserir arestas em adj

	aux.v = v;
	adj[u].push_back(aux);
	if (orientado == 0) // cria a aresta de volta p/ grafos nao orientados
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}
void ordenacao_topologica(int f[], int nVertices)
{
	int vet[100]; // vetor para guardar as posições de f[]
	int posicoes[100]; // vetor para guardar as posições depois de ordenado
	int aux;
	int i, j, pos;

	for (i = 0; i < nVertices; i++) 
		vet[i] = f[i];

	for (i = 0; i < nVertices; i++)
	{
		pos = i;
		for (j = i + 1; j < nVertices; j++)
			if(f[i] < f[j])
				pos = j; //variavel aux pos recebe contador j

		//ordenando f[] em ordem do maior para o menor:
		aux = f[i];
		f[i] = f[pos];
		f[pos] = aux;
	}
	
	// Acresentando as posições em um vetor depois de ordenar f[]
	for (i = 0; i < nVertices; i++)
		for (j = 0; j < nVertices; j++)
			if(vet[i] == f[j])
				posicoes[j] = i;

	//Apresentando o vetor das posições:		
	for (i = 0; i < nVertices; i++)
		cout << posicoes[i] << " ";

}

void dfs_visit(list<no>adj[], int nVertices, int color[], int f[], int d[], int pi[], int u, int &time)
{
	int aux;
	list<no>::iterator v;

	color[u] = 1; // O vértice u branco acaba de ser descoberto
	time = time + 1;
	d[u] = time;
	for(v = adj[u].begin(); v != adj[u].end(); v++)// Explorar a borda (u, v)
	{
		aux = v -> v;
		if (color[aux] == 0)
		{
			pi[aux] = u;
			dfs_visit(adj, nVertices, color, f, d, pi, aux, time);
		}
	}

	color[u] = 2; // Enegrecimento u; está terminado
	time = time + 1;
	f[u] = time;
}
void dfs(list<no>adj[], int nVertices)
{
	int color[100];
	int f[100];
	int d[100];
	int pi[100];
	int u;
	int time;

	for(u = 0; u < nVertices; u++)
	{
		color[u] = 0;
		pi[u] = -1;
	}
	time = 0;
	for(u = 0; u < nVertices; u++)
		if (color[u] == 0)
			dfs_visit(adj, nVertices, color, f, d, pi, u, time);
		
	ordenacao_topologica(f, nVertices); // chamando função de ordenação topologica	
}
int main()
{
	list<no> adj[100]; // lista de adjacencia
	int nVertices; // numero de vertices do grafo
	int u, v; // origem e destino da aresta
	list<no>::iterator q; // iterator para varrer a lista de adjacencia
	int orientado; // 0:nao orientado e 1: orientado

	//Lendo quantidade de vertices e de grafos orientados:
	cin >> nVertices >> orientado;

	//Lendo e inserindo aresta:
	cin >> u >> v;

	while(u != -1 && v != -1)
	{
		cria_aresta(adj, u, v, orientado); // chamando função que cria aresta
		cin >> u >> v;
	}

	dfs(adj, nVertices); // chamando dfs

	return 0;
}

