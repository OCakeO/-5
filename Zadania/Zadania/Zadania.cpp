#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void NumZadania1();
void NumZadania2();
void NumPr3();
int NumZadania3();
int NumPr4();
int NumPr5();

int main()
{
	setlocale(LC_ALL, "rus"); // подключем Русский алфавит
	
	int NuмPr = 0;
	cout << "Введите номер Практической работы (3,4,5)";
	cin >> NuмPr; 
	switch (NuмPr) 
	{
	case 3: 
		NumPr3();
		break;
	case 4:
		NumPr4();
		break;
	case 5: 
		NumPr5();
		break;
	default: 
		cout << "Такого задания нет" << endl;
		break;
	}
	return 0;
}

void NumPr3() {
	int NuмZadania = 0; // Инициализация переменной Номер задания
	cout << "Введите номер подзадания (1,2,3): "; //Вывод сообщения в командную строку
	cin >> NuмZadania; // Пользователь вводит значение в переменную
	switch (NuмZadania) // Отлавливаем переменную с номером задания
	{
	case 1: // Если 1 задание то переходим в метод с названием NumZadania1();
		NumZadania1();
		break;// закрываем case
	case 2: // Если 2 задание то переходим в метод с названием NumZadania2();
		NumZadania2();
		break; // закрываем case
	case 3: // Если 3 задание то переходим в метод с названием NumZadania3();
		NumZadania3();
		break;// закрываем case
	default: // тот же самый case, только выполняется когда нет правильного 
		cout << "Такого подзадания нет" << endl; //Вывод сообщения в командную строку при неверном вводе номера подзадания
		NumPr3();
		break;// закрываем case
	}
}

void NumZadania1() {
	string n;
	int k = 0;
	cout << "Введите число: ";
	cin >> n;
	cout << "Сколько разрядов показать?" << endl;
	cin >> k;
	cout << "Ваше число: " << n.substr(0, k); // .substr(0,k) - это метод выводящий string 
}											// посимвольно от индекса (0) до индекса (к)
void NumZadania2() {
	int nummas;
	cout << "Введите размер массива: ";
	cin >> nummas;

	int *mas = new int[nummas]; // Создание динамического массива но это не совсем то что нужно по заданию так что это можно удалить 
								// удалите и напишите следующие int a[3] = {0, 1, 2};, где 3 это кол-во элементов в массиве
								// а в {, , ,} фигурных скобках сами числа массива
	int srednee = 0;
	cout << "Заполняем массив ранодомными числами" << endl;
	
	for (int i = 0; i < nummas; i++)
	{
		mas[i] = rand() % 100; // это удалить
		cout << mas[i] << " ";
		srednee += mas[i];
	}
	cout << endl;
	cout << "Средне арифмитическое массива равно: " << srednee / nummas << endl;
}
int NumZadania3() {
	string text; // 3-е задание не мне кажется не совсем верно изложенным по тексту задания, но все работает правильно
				// так что спросите у препода как что сделать
	char vibor;

	cout << "Введите текст: ";
	cin.get();

	getline(cin, text);
	cout << endl;

	int size = text.size();
	cout << "Для преобразования строки в ВЫСОКИЙ РЕГИСТР нажмите : 1 " << endl;
	cout << "Для преобразования строки в нижний регистр нажмите : 2 " << endl;
	cout << "Для преобразования строки в Заглавные Буквы нажмите : 3 " << endl;
	cout << "Для преобразования строки в нИЖНИЙ рЕГИСТР кАЖДОГО сЛОВА нажмите : 4 " << endl;
	cout << "Для преобразования строки в Как в обычном предложении нажмите : 5 " << endl;
	cout << "Для выхода нажмите : f " << endl;
	cout << endl;


	cin >> vibor;
	switch (vibor)
	{
	case 49:
		
		for (int i = 0; i < size; i++) {
			if ((int)text[i] > 96) 
			text[i] = (int)text[i] - 32;
		}		
		cout << text << endl;
		break;
	case 50:
		for (int i = 0; i < size; i++) {
			if ((int)text[i] < 91)
				text[i] = (int)text[i] + 32;
		}
		cout << text << endl;
		break;
	case 51:
		for (int i = 0; i < size; i++) {
			if ((int)text[i] < 91) {
				if ((int)text[i] != 32)
				text[i] = (int)text[i] + 32;
			}
		}
		text[0] = (int)text[0] - 32;

		for (int i = 0; i < size; i++) {
			if ((int)text[i] == 32)
				text[i+1] = (int)text[i+1] - 32;
		}

		cout << text << endl;
		break;
	case 52:
		for (int i = 0; i < size; i++) {
			if ((int)text[i] > 96)
				text[i] = (int)text[i] - 32;
		}
		text[0] = (int)text[0] + 32;

		for (int i = 0; i < size; i++) {
			if ((int)text[i] == 32)
				text[i + 1] = (int)text[i + 1] + 32;
		}
		cout << text << endl;
		break;
	case 53:
		for (int i = 0; i < size; i++) {
			if ((int)text[i] < 91) {
				if ((int)text[i] != 32)
					text[i] = (int)text[i] + 32;
			}
		}
			text[0] = (int)text[0] - 32;

		cout << text << endl;
		break;
	case 102:
		return 0;
		break;
	default:
		cout << "Белым по черному написанно что можно выбрать..." << endl;
		NumZadania3();
		break;
	}
	
}
int NumPr4() {
	int NumZadania4 = 0;
	cout << "Введите номер подзадания(1,2): " << endl;
	cin >> NumZadania4;
	if (NumZadania4 == 1) {
		int massiv[200000]; // объявили массив 
		int b;
		srand(time(0));

		for (int i = 0; i < 200000; i++) {
			massiv[i] = rand() % 100; //Рандом
		}
		b = massiv[0];
		for (int i = 0; i < 200000; i++) {
			if (massiv[i] <= b) {
				b = massiv[i];
			}
		}

		cout << "Минимальное число: " << b << endl;

		cout << "Работа программы в секкундах = " << clock() / 1000.0 << endl; // время работы программы                  
		system("pause");
		return 0;
	}
	else if (NumZadania4 == 2) {
		int a = 0;
		char b = 'b';
		bool c = 0;
		short d = 0;
		long e = 0;
		float f = 0;
		double g = 0;
		long double k = 0;

		cout << "&int:		" << &a << endl;
		cout << "&char:		" << &b << endl;
		cout << "&bool:		" << &c << endl;
		cout << "&short:		" << &d << endl;
		cout << "&long:		" << &e << endl;
		cout << "&float:		" << &f << endl;
		cout << "&double:	" << &g << endl;
		cout << "&long double:	" << &k << endl;

		cout << endl;

		cout << "sizeof int:		" << sizeof a << endl;
		cout << "sizeof char:		" << sizeof b << endl;
		cout << "sizeof bool:		" << sizeof c << endl;
		cout << "sizeof short:		" << sizeof d << endl;
		cout << "sizeof long:		" << sizeof e << endl;
		cout << "sizeof float:		" << sizeof f << endl;
		cout << "sizeof double:		" << sizeof g << endl;
		cout << "sizeof long double:	" << sizeof k << endl;
	}
	else {
		cout << "Нет такого номера" << endl;
		NumPr4();
	}
}
int NumPr5() {
	int i;
	float y, y1;
	float x;

	cout << "Ведите x: ";
	cin >> x;
	y = x;
	do {
		y1 = y;
		y = 0.5 * (y + 3 * x / (2 * y * y + x / y));
	} while (abs(y - y1) > 1 / 100000); // Функция вычисляет абсолютное значение и возвращает модуль значения val (|val|).
	cout << "y = " << y << endl;


	return 0;
}