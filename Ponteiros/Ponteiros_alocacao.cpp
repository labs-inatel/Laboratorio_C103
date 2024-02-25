#include<iostream>
#include<iomanip>
using namespace std;
struct dado
{
	float n1;
	float n2;
	float n3;
	float n4;
	float media;
};
int main()
{
	dado *total; // ponteiro para a struct
	int i; // contadores
	int tam; // tamanho do vetor
	int soma[2];
	int soma1 = 0;

	// Ler tamanho
	cin >> tam;

	//Alocar memoria para a struct
	total = new dado[tam];

	// Inserir valores
	for(i = 0; i < tam; i++)
	{
		cin >> total[i].n1 >> total[i].n2 >> total[i].n3 >> total[i].n4;

		soma[i] = total[i].n1 + total[i].n2 + total[i].n3 + total[i].n4;
		
		soma1 = soma1 + soma[i];
	}

	total[i].media = soma1 * 1.0 / (tam *4.0); 
	
	// Mostrar media das notas com duas casas de precisao
	cout << fixed << setprecision(2);
	cout << total[i].media;

	// Liberar memoria
	delete [] total;

	return 0;
}
