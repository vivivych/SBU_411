#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define SIMPLE_NUMBERS
//#define PERFECT_NUMBER

void main()
{
	setlocale(LC_ALL, "");
	//for (;;)	//while(true)
		//cout << "Hello FOR";;;;;;;;;;;;;;;;;;;;;;;

#ifdef FACTORIAL
	int n;	//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;	//Arithmetical overflow (Арифметическое переполнение) - это ситуация, при которой старший бит результата не сохраняется в переменной или регистре.
		cout << f << endl;
		//inf - Infinity (Бесконечность).
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//Основание степени
	int n;	//Показатель степени
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << a << " ^ " << n << " = " << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI
	int n;
	cout << "Введите предел: "; cin >> n;

	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif // FIBONACCI

#ifdef SIMPLE_NUMBERS
	int n;
	cout << "Введите ыпредельное число: "; cin >> n;

	for (int i = 1; i < n; i++)
	{
		bool simple = true;	//Предположим что число простое,
		//Но это нужно провертрить:
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE_NUMBERS

#ifdef PERFECT_NUMBER
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 2; i < n; i++)
	{
		bool perfect = true;
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)sum += j;
		}
		if (i == sum)cout << i << "\t";
	}
	cout << endl;
#endif // PERFECT_NUMBER

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			//cout << i << " * " << j << " = " << i*j << endl;
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
/*
------------------------------
for - это цикл на заданное число итераций.
for применяется в том случае, когда мы значем сколько раз должен выполниться цикл.
------------------------------

for (counter; condition; expression)
{
	.....;
	group-of-statements;
	.....;
}

counter - это счетчик цикла.
Счетчик - это переменная, которая считает сколько раз выполнился,
		  или будет выполнен цикл.
		  Эта переменная может быть объявлена как в самом цикле, так и перед ним.

condition - это условие продожения или заверщения цикла.

expression - это выражение, которое изменяет счетчик.
			 В этом выражении как правило пишут Increment/Decrement,
			 но здесь можно писать все что угодно.
group-of-statements - это тело цикла, т.е. код, который нужно зациклить.
*/