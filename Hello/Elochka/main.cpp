#include<iostream>
using namespace std;

#define offset		"\t\t\t\t\t\t"
#define offset_1	"\t\t\t\t"
#define offset_2	"\t\t\t\t\t\t\t\t"
//Директива #define (определить) говорит компилятору, что нужно создать 
//МАКРООПРЕДЕЛЕНИЕ (МАКРОС).
//МАКРОС показывает компилятору ЧТО_ЗВМЕНИТЬ и ЧЕМ_ЗАМЕНИТЬ
//В нашем случае имя OFFSET будет заменено значением "\t\t\t\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << offset_1 << "В лесу родилась ёлочка\n";
	cout << offset_1 << "В лесу она росла\n";
	cout << offset_1 << "Зимой и летом стройная\n";
	cout << offset_1 << "Зеленая была\n";
	cout << offset << "\n";
	cout << offset << "\n";
	cout << offset_2 << "Метель ей пела песенку:\n";
	cout << offset_2 << "-Спи, ёлочка, бай-бай!-\n";
	cout << offset_2 << "Мороз снежком укутывал:\n";
	cout << offset_2 << "-Смотри, не замерзай!-\n";
	cout << offset << "\n";
	cout << offset << "\n";
	cout << offset << "Трусишка-зайка серенький\n";
	cout << offset << "Под ёлочкой скакал\n";
	cout << offset << "Порою волк, сердитый волк\n";
	cout << offset << "Рысцою пробегал\n";
	cout << offset << "\n";
	cout << offset << "\n";
	cout << offset << "Теперь она, нарядная\n";
	cout << offset << "На праздник к нам пришла\n";
	cout << offset << "И много, много радостей\n";
	cout << offset << "Детишкам принесла.\n";
}
