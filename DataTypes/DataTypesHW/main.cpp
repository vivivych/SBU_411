#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double money;
	cout << "Введите сумму: "; cin >> money;
	int dollar = money;		//Неявное преобразование типов из 'double' в 'int'
	cout << dollar << " dollars\t";
	int cent = (money - dollar + .00000001) * 100;
	//int cent = money * 100 - dollar * 100;
	cout << cent << " cents\n";
}