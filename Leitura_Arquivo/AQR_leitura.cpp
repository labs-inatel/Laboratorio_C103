#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	string texto;
	ifstream arq ("arquivo.txt"); 
	
	if (arq.is_open())
		while (! arq.eof())
		{
			getline (arq, texto); 
			cout << texto << endl;
		}
		arq.close();

	return 0;
}
