#include "Drobina.h"



Drobina::Drobina()
{
	Chislitel = 0;//rand() % 12 + 1;
	Znamenatel = 0;//rand() % 40 + 12;
}
Drobina::Drobina(int ch, int zn)
{
	Chislitel = ch;//rand() % 12 + 1;
	Znamenatel = zn;//rand() % 40 + 12;
}
Drobina::~Drobina()
{
}
void Drobina::AddDrobina(int ch, int zn)
{
	Chislitel = ch;//rand() % 12 + 1;
	Znamenatel = zn;//rand() % 40 + 12;
}
void Drobina::setChislitel(int a)
{
	Chislitel = a;
}
int  Drobina::getChislitel()
{
	return Chislitel;
}

void Drobina::setZnamenatel(int a)
{
	Znamenatel = a;
}

int Drobina::getZnamenatel()
{
	return Znamenatel;
}

void Drobina::Print()
{
	cout << endl << endl << Chislitel << "/" << Znamenatel << endl;
}

void Drobina::Sokratit()
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

void Drobina::Umnogenie(Drobina aa)
{
	Chislitel *= aa.getChislitel();
	Znamenatel *= aa.getZnamenatel();
	Sokratit();
}

void Drobina::Delenie(Drobina aa)
{
	Chislitel *= aa.getZnamenatel();
	Znamenatel *= aa.getChislitel();
	Sokratit();
}
