#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char c;
	cout << "������� ������: ";
	cin >> c;
	cout << "ASCII-��������: " << int(c) << endl;
	return 0;
}
