#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
//#include"FillRand.cpp"	//Реализации функций НЕ подключаются на место вывоза
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

void ShiftLeft(int arr[], const int n, const int shifts);
void ShiftLeft(double arr[], const int n, const int shifts);

void ShiftRight(int arr[], const int n, const int shifts);
void ShiftRight(double arr[], const int n, const int shifts);

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	//FillRand(arr, n);	//Заполнение массива случайными числами:
	Print(arr, n);		//Вывод исходного массива на экран:
	Sort(arr, n);		//Сортировка массива:
	Print(arr, n);		//Вывод отсортированного массива на экран:
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;

	Print(arr, n);
	/*int shifts;
	cout << "Введите количество сдвигов: "; cin >> shifts;
	ShiftLeft(arr, n, shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> shifts;
	ShiftRight(arr, n, shifts);
	Print(arr, n);*/
	cout << delimiter << endl;

	//		Объявление двумерного массива:

	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое:  " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение:  " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение:  " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	int shifts;
	cout << "Введите количество сдвигов: "; cin >> shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, shifts);
	Print(i_arr_2, ROWS, COLS);
}


void ShiftLeft(int arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(int arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}
void ShiftRight(double arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shifts);
	}*/
	ShiftLeft(arr[0], ROWS*COLS, shifts);
}