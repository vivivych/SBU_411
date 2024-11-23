#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "DataTypes" << endl;
	cout << true << endl;



	//cout << DBL_MAX << endl;

	//int a = 2;	// целое число со знаком (может хранить как полодительные, так и отрицательные целые числа)
	//signed int b = 3;	//целое число со знаком (может хранить как полодительные, так и отрицательные целые числа)
	//unsigned int c = 5;	//беззнаковое целое число (может хранить только положительные целые числа)
	
	//double priceOfCoffee;
	//double price_of_coffee;
	//snake_case_style - змеиный стиль именования переменных
	//PascalCaseStyle - CamelCaseStyle
	//smallCamel
	//BigCamel


	double price_of_coofee;
	int number_of_bros;

	cout << "Введите стоимость чашки кофе: ";	cin >> price_of_coofee;
	cout << "Введите количество Ваших Бро:";	cin >> number_of_bros;
	cout << "Общая стоимость: " << price_of_coofee * number_of_bros << " руб.\n";
}

/*
---------------------
Variable - это именованная область памяти, содержимое которой может изменяться
		   в процессе выполнения программы.

			type name;	//синтаксис объявления переменной
type - это тип объявляемой переменной, он определяет 3 вещи:
		1. Сколько памяти переменная будет занимать;
		2. Какие значения она сможет принимать;
		3. Какие операции над ней можно выполнять;

  I.	Логические: bool (Boolean) 1 Byte true | false
					true  == 1
					false == 0
					1 Byte = 8 bit
					bit - Binary Digit
					Byte - это минимальный объем памяти, который может проадресовать Процессор.
					Byte - это минимальный объем памяти, который может прочитать/записать Процессор.
					0 - это FALSE;
					TRUE - ЭТО ВСЕ ЧТО НЕ 0
 II.	Символьные: char (Character - Символ)
					ASCII - American Standard Code for Information Interchange
					256
III.	Числовые:	Целочисленные и Вещественные
					Целочисленные бывают unsigned, signed
					unsigned - хранят только положительные целы числа;
					  signed - хранят как положительные, так и отрицптельные целые числа;

					//short		2 Bytes;
					//long		4 Byte;
					//int	НЕ меньше чем 'short', и НЕ больше чем 'long', в MS VS всегда 4 Байта, независимо от целевой архитектуры
					//long long 8 Bytes;

					ALU - Arithmetical Logic Unit (Арифметико-Логическое Устройство).


					Вещественные типы:
					float	4 Bytes;
					double	8 Bytes;
					Все операции над вещественными типами выполняет 
					FPU - Floating Point Unit;

---------------------
*/