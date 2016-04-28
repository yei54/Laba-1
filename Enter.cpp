#include "Drob.h"

void main()
{
	setlocale(LC_ALL, "rus");
	int sizeMass;
	cout << "\n\tПривет" << endl << "Введите число - размер массива" << endl;
	cin >> sizeMass;
	system("cls");
	cout << "Размер массива: " << sizeMass << endl << "Введите числа через пробел, нажмите Enter" << endl;
	char *mass = new char[sizeMass];

	for (int i = 0; i < sizeMass; i++)
	{
		cin >> mass[i];
	}
	system("cls");
	for (int i = 0; i < sizeMass; i++)
	{
		cout << mass[i];
	}
	Drob A;
	Drob B;
	char c = 0;
	while (c != '0')
	{
		cout << endl << endl << "\tВызов дробей:" << endl;
		cout << "1. Случайная дробь.";
		cout << "\t2. Заданная дробь." << endl;
		cout << endl << "\tОперации с дробями:" << endl;
		cout << "3. Сократить дробь.";
		cout << "\t4. Умножить дроби.";
		cout << "\t5. Разделить дроби." << endl;
		cout << endl << "0. Выход." << endl << endl;
		cin >> c;
		switch (c)
		{
		case '1':
			
			break;
		case '2':
			system("cls");
			A.Scan();
			B.Scan();
			system("cls");
			cout << "Дробь: ";
			A.Print();
			B.Print();
			system("pause");
			system("cls");
			break;
		case '3':
			system("cls");
			A.Sokratit();
			B.Sokratit();
			
			cout << "Дробь: ";
			A.Print();
			B.Print();
			
			break;
		case '4':

			break;
		case '5':

			break;
		default:
			break;
		}
	}
    
	
	delete[] mass;
	
	system("pause");
}
