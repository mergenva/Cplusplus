#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	
	cout << "Введите число: ";
	cin >> number;
	
	cout << "Вы ввели " << number << endl;
	return 0;
}
