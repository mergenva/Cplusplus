#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double first, second, product;
	cout << "������� ��� �����: ";
	
	cin >> first >> second;
	
	product = first * second;
	
	cout << "��������� = " << product << endl;
	
	return 0;
}
