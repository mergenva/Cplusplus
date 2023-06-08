#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char c;
	cout << "Введите символ: ";
	cin >> c;
	cout << "ASCII-значение: " << int(c) << endl;
	return 0;
}
