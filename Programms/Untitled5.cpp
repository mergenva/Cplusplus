#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������ char: " << sizeof(char) << " byte" << endl;
	cout << "������ int: " << sizeof(int) << " bytes" << endl;
	cout << "������ float: " << sizeof(float) << " bytes" << endl;
	cout << "������ double: " << sizeof(double) << " bytes" << endl;
	return 0;
}
