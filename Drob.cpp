#include "Drob.h"



Drob::Drob()
{
	Chislitel;
	Znamenatel;
}


Drob::~Drob()
{
}

void Drob::setChislitel(ui a)
{
	Chislitel = a;
}
int Drob::getChislitel()
{
	return Chislitel;
}
void Drob::setZnamenatel(ui a)
{
	Znamenatel = a;
}
int Drob::getZnamenatel()
{
	return Znamenatel;
}

void Drob::Scan()
{
	cout << "Введите 'Числитель пробел Знаменатель', нажмите Enter" << endl;
	cin >> Chislitel >> Znamenatel;
}

void Drob::Print()
{
	cout << endl << Chislitel << " / " << Znamenatel << endl;
}

void Drob::Sokratit()
{
	int x = (Chislitel < Znamenatel) ? Chislitel : Znamenatel; // Если числитель меньше знаменателя, то выбираем числитель  пример -  6 меньше 9, берем 6
	for (int i = x; i > 0; i--) // Поехали циклом по убыванию от значения х = 6
	{
		if (Chislitel%i == 0 && Znamenatel%i == 0) // С условием Числитель делится на i не равно 0 и знаменатель аналогично
		{
			// Делим с сприсваением Числитель и Знаменатель 
			Chislitel /= i; // Делится 3
			Znamenatel /= i; // Делится на 3, это НОД
		}
	}
}

void Drob::Umnogenie(Drob aa)
{
	Chislitel *= aa.getChislitel();
	Znamenatel *= aa.getZnamenatel();
	Sokratit();
}
void Drob::Delenie(Drob aa)
{
	Chislitel *= aa.getZnamenatel();
	Znamenatel *= aa.getChislitel();
	Sokratit();
}
