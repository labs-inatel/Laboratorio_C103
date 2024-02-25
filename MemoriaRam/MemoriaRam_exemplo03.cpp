#include<iostream>

using namespace std;

int main()
{
	int n; // quantidade problema
	int i; // contador
	int x; // var aux
	int cont = 0; // n de vezes que x=2*i é executado

	cin >> n;

	i=0;
	while(i < n)
	{
		x = 2 * i;
		i++;
		cont++;
	}

	cout << cont << " vezes" << endl;

	return 0;
}
