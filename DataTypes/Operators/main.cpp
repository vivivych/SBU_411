#include<iostream>
using namespace std;

//#define ASSIGNMENT_OPERATOR

void main()
{
	setlocale(LC_ALL, "");
	//cout << 17. / 3 << endl;
	//cout << 17. % 3 << endl;

#ifdef ASSIGNMENT_OPERATOR
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Suffix decrement

	int a = 2;
	int b = 3;
	//a += b;
	a = a + b;
}