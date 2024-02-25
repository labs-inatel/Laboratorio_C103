#include<iostream>

using namespace std;

int main()
{
	int n; // quantidade problema
	int i, j, k; // contador
	int x; // var aux
	int cont = 0; // n de vezes que x=2*i é executado

	cin >> n;

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			for(k = 0; k < n; k++)
			{
				x = 2 * i;
				cont++;
			}

	cout << cont << " vezes" << endl;

	return 0;
}
