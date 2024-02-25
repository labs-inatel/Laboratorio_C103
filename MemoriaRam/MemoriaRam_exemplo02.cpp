#include<iostream>

using namespace std;

int main()
{
	int n; // quantidade problema
	int i, j; // contador
	int x; // var aux
	int cont = 0; // n de vezes que x=2*i é executado

	cin >> n;

	for(i = 0; i < n; i++) // f(n) = n
	{
		j = 1; ////
		while(j < n) // f2(n) = log2(n)
		{
			x = 2 * i;
			cont++;
			j = j * 2; ///
		}
	}
// f(n) = f1(n) * f2(log2(n)) --> n* log2(n)
	cout << cont << " vezes" << endl;

	return 0;
}

