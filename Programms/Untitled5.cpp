#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Размер char: " << sizeof(char) << " byte" << endl;
	cout << "Размер int: " << sizeof(int) << " bytes" << endl;
	cout << "Размер float: " << sizeof(float) << " bytes" << endl;
	cout << "Размер double: " << sizeof(double) << " bytes" << endl;
	return 0;
}
