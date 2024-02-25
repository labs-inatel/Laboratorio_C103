#include <iostream>

using namespace std;

int fib(int n)
{
	if(n == 0 || n == 1) // condição de parada
		return 1;
	else // chamada recursiva
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int numero; //variavel para coletar o numero fornecido pelo usuario
	int res; //recebe resultado da função fib
	
	cin >> numero; //entrada de dados
	
	res = fib(numero); //passando o valor fornecido para a função fib
	
	cout << res << endl; //mostrando o resultado
	
	return 0;
}
