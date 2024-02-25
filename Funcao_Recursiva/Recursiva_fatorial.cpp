#include <iostream>

using namespace std;

int fatorial(int n)
{
	if(n == 0) // condição de parada
		return 1;
	else // chamada recursiva
		return n * fatorial(n - 1);
}

int main()
{
	int n; //variavel para coletar o numero fornecido pelo usuario
	int res; //recebe resultado da função fib
	
	cin >> n; //entrada de dados
	
	res = fatorial(n); //chamar a função
	
	cout << res; // Apresentar o resultado
	
	return 0;
}
