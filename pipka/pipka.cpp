#include <iostream>
using namespace std;


class Factorial
{
public:
	static int FactorialRecursive(const int &n)
	{
		if (n == 0)
		{
			return 1;
		}
		else
		{
			return n * FactorialRecursive(n - 1);
		}
	}
};

int main()
{
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian_Russian.1251");

	int n;
	cout << "Введите число, чтобы вычислить его факториал: " << endl;
	cin >> n;
	cout << "Факториал " << n << " равен " << Factorial::FactorialRecursive(n);
}