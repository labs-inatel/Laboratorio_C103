#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int n = 64;
	int i = 1;
	
	while(i <= n)
	{
		foo();
		i = i * 2;
		cout << i << endl;
	}

	return 0;
}
