#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);	//Заполняет массив случайными числами
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);	//Заполнение массива случайными числами:
	Print(arr, n);		//Вывод исходного массива на экран:
	Sort(arr, n);		//Сортировка массива:
	Print(arr, n);		//Вывод отсортированного массива на экран:

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100; //функция возвращает псевдослучайное число в диапозоне от 0 до 32676
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}