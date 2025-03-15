#include <iostream>

using namespace std;

#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");
	int n, x, y, c, q;
	cout << " ¬ведите кол-во строк: " << endl;
	cin >> n;

	for (y = 0; y < n; y++)
	{
		c = 1;
		for (q = 0; q < n - y; q++)
		{
			cout << "  ";
		}
		for (x = 0; x <= y; x++)
		{
			cout << "    " << c;
			c = c * (y - x) / (x + 1);
		}
		cout << "\n";
	}
	cout << "\n";
	return 0;
}