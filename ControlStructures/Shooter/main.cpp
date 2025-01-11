#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Enter	13
#define Escape	27

#define UpArrow		72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

//#define IF_ELSE

void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши, и возвращает ASCII-код нажатой клавиши.
						//Этот ASCII-код мы записываем в переменную 'key' оператором присваивания
		//cout << (int)key << "\t" << key << endl;
		//(int)key - это явное преобразование переменной 'key' в тип данных 'int', для того чтобы увидеть числовой код нажатой клавиши.

		if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter) cout << "Огонь" << endl;
		else if (key != -32 && key != Escape) cout << "Error" << endl;
	} while (key != Escape);

	//(type)value;	//C-Like notation (C-подобная форма записи)
	//type(value);	//Functional notation (Функциональная форма записи)    
#endif // IF_ELSE

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'W':
		case 'w': cout << "Вперед" << endl; break;
		case DownArrow:
		case 'S':
		case 's': cout << "Назад" << endl; break;
		case LeftArrow:
		case 'A':
		case 'a': cout << "Влево" << endl; break;
		case RightArrow:
		case 'D':
		case 'd': cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default:	cout << "Error" << endl;
		}
	} while (key != Escape);

}