#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CALC_IF_ELSE
#define CALC_SWITCH

void main()
{
	setlocale(LC_ALL, "");
	double a, b;//Числа, вводимые пользователем.
	char s;		//Sign - знак операции.

#ifdef CALC_IF_ELSE
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif // CALC_IF_ELSE

#ifdef CALC_SWITCH
	cout << "Введите простое арифметическое выражение: ";
	cin >> a;
	do
	{
		//cout << a;
		cin >> s >> b;
		switch (s)
		{
		case '+': a += b; break;
		case '-': a -= b; break;
		case '*': a *= b; break;
		case '/': a /= b; break;
		default:  cout << "Error: No operation" << endl;
		}
		//cout << a << s << b << " = " << a << endl;
		cout << " = ";
		cout << a;
	} while (true);
#endif // CALC_SWITCH

}