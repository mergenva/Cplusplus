#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int first, second, sum;
	
	cout << "Введите два целых числа: ";
	cin >> first >> second;
	
	// Вычисляем сумму
	sum = first + second;
	
	// Выводим сумму
	cout << first << " + " << second << " = " << sum << endl;
	return 0;
}
