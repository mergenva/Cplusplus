#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 1, b = 2;
	
	cout << "�� ������:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "\n����� ������:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	return 0;
}
