#include "Drobina.h"

void DvumerMassUkaz(Drobina ***MassUkazatelei, int sizemass);
void AddDrob(Drobina ***MassUkazatelei, int NumberObj);
void СhangeDrob(Drobina ***MassUkazatelei, int NumberObj);
void DelDvumerMassUkaz(Drobina **MassUkazatelei, int sizemass);
void PrintAllDrobi(Drobina **MassUkazatelei, int sizemass);
void main()
{
	setlocale(LC_ALL, "Rus");
	Drobina **MassUkazatelei = NULL; //указатель на указатель
	int SizeMass = 0;
	cout << "Введите размер массива объектов, затем Enter.\n";
	cin >> SizeMass;
	system("cls");
	int NumberObj = 0; // кол-во объектов

	DvumerMassUkaz(&MassUkazatelei, SizeMass);

	char c = 0;
	while (c != '0')
	{
		cout << endl << endl << "1. Добавить дробь." << endl;
		cout << endl << endl << "2. Изменить дробь." << endl;
		cout << endl << endl << "3. Показать все дроби." << endl;
		cout << endl << "0. Выход." << endl << endl;

		cin >> c;
		system("cls");
		switch (c)
		{
		case '1':
			if((NumberObj + 1) <= SizeMass)
			{
				NumberObj++;
				AddDrob(&MassUkazatelei, NumberObj);
				cout << NumberObj << endl;
				break;
			}
			else
			{
				cout << "Дробь не создана! Массив полон." << endl;
				Sleep(2000);
				system("cls");
				break;
			}
		case '2':
			int numObj;
			cout << "Введите номер изменяемого объекта, от 1 до " << NumberObj << ", нажмите Enter" << endl;
			cin >> numObj;
			system("cls");
			СhangeDrob(&MassUkazatelei, numObj);
			break;
		case '3':
			
			
			PrintAllDrobi(MassUkazatelei, SizeMass);
			break;
		default:
			break;
		}

		
	}

	DelDvumerMassUkaz(MassUkazatelei, SizeMass);

}

void DvumerMassUkaz(Drobina ***MassUkazatelei, int sizemass)
{
	*MassUkazatelei = new Drobina*[sizemass];
	for (int i = 0; i < sizemass; i++)
	{
		(*MassUkazatelei)[i] = new Drobina();
	}
}
void AddDrob(Drobina ***MassUkazatelei, int num)
{
	int Cislit;
	int Znamen;
	cout << "Введите числитель 'пробел' знаменатель, нажмите Enter" << endl;
	cin >> Cislit >> Znamen;
	system("cls");
	(*MassUkazatelei)[(num - 1)] = new Drobina(Cislit, Znamen);
	
}
void СhangeDrob(Drobina ***MassUkazatelei, int num)
{
	int Cislit;
	int Znamen;
	cout << "Введите числитель 'пробел' знаменатель, нажмите Enter" << endl;
	cin >> Cislit >> Znamen;
	system("cls");
	(*MassUkazatelei)[(num - 1)] = new Drobina(Cislit, Znamen);
}

void DelDvumerMassUkaz(Drobina **MassUkazatelei, int sizemass)
{
	for (int i = 0; i < sizemass; i++)
	{
		delete MassUkazatelei[i];
	}
	delete[] MassUkazatelei;
}
void PrintAllDrobi(Drobina **MassUkazatelei, int sizemass)
{
	for (int i = 0; i < sizemass; i++)
	{
		printf("%d/%d\t", *MassUkazatelei[i]);
		//cout << MassUkazatelei[i] << "\t";
	}
}
