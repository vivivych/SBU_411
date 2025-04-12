#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//вывод переменной 'a' на экран
	cout << &a << endl;	//взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;	//вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;
}
/*
---------------------------------
	& - Оператор взятия адреса (Address-of operator)
	* - Оператор разыменования (Dereference operator)
---------------------------------
*/