#include<iostream>
#include<cmath>
using namespace std;

int hash_aux(int k, int m)
{
	int total;

	total = k % m;

	if(total >= 0)
		return total;
	else
		return total + m;
}
int main()
{
	int x; // elemento 1
	int y; // elemento 2
	int total; // variavel para receber hash

	cin >> x >> y;
	if (x != 0 && y != 0)
	{
		total = hash_aux(x, y);
		cout << total << endl;
	}

	while(x != 0 && y != 0)
	{
		cin >> x >> y;
		if (x != 0 && y != 0)
		{
			total = hash_aux(x, y);
			cout << total << endl;
		}
	}

	return 0;
}