#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 5, b = 10, temp;
	
	cout << "�� ������:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "\n����� ������:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	return 0;
}
