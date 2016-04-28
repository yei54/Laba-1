#pragma once
#include <iostream>
#include "conio.h"
using namespace std;
typedef unsigned int ui;
class Drob
{
	int Chislitel;
	int Znamenatel;
public:
	Drob();
	~Drob();
	void setChislitel(ui);
	int  getChislitel();
	void setZnamenatel(ui);
	int  getZnamenatel();
	void Scan();
	void Print();
	void Sokratit();
	void Umnogenie(Drob);
	void Delenie(Drob);
};

