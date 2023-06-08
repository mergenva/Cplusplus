#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char simvol1 = 'A';
	char simvol2 = 'B';
	char simvol;
	
	simvol = simvol1 + simvol2;
	
	cout << "Получилось" << simvol << endl;
	return 0;
}
