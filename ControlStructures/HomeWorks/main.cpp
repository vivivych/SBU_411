#include <iostream>
#include <conio.h>
using namespace std;
//#define SQUARE
//#define TRIANGLE_INCREASE

int main()
{
	//setlocale(LC_ALL, "");
#ifdef SQUARE

	int n, m;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < m; i++)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE_INCREASE

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int a = 0; a <= i; a++)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif
	//cout << "\u25A0" << endl;
	//cout << (char)254 << endl;
	//cout << (char)254u;
	//cout << (char)253u;
	printf("\x1B[31m \033[0m\t\t");
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int i = 0; i < num; i++)
		{
			if (i == 2)
				cout << endl;
			cout << (char)254u << (char)255u;

		}
		cout << endl;
	}
}