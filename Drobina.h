#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Drobina
{
	int Chislitel;
	int Znamenatel;
public:
	Drobina();
	Drobina(int, int);
	~Drobina();
	void Change(int, int);
	void setChislitel(int);
	int  getChislitel();
	void setZnamenatel(int);
	int  getZnamenatel();
	void Sokratit();
	void Umnogenie(Drobina);
	void Delenie(Drobina);
	void Show();
	//bool Add(int, int)
};

