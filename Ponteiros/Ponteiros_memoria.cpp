#include<iostream>
#include<iomanip>
using namespace std;
struct dado
{
	int n1;
	int n2;
	int n3;
	int n4;
	float media;
};
int main()
{
	dado *total; // ponteiro para a struct
	int soma; // recebe valor da soma das notas de cada aluno

	//Alocar memoria para a struct
	total = new dado;
	
	// Inserir valores
	cin >> total -> n1 >> total -> n2 >> total -> n3 >> total -> n4;

	// media das notas
	soma = total -> n1 + total -> n2 + total -> n3 + total -> n4;
	total -> media = soma * 1.0 / 4.0;

	// Mostrar media das notas com duas casas de precisao
	cout << fixed << setprecision(2);
	cout << total -> media << endl;

	// Liberar memoria
	delete [] total;
	
	return 0;
}
