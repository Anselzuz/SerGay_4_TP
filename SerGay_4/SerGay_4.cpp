#include "pch.h"
#include "TriangleCreator.h"
#include <iostream>
using namespace std;
using namespace System;

void SuccessMessage()
{
	cout << "Треугольник можно построить!" << endl;
}

void FailMessage()
{
	cout << "Треугольник построить нельзя(" << endl;
}

//Task 2
//Замена определенных символов на пробелы
string ChangeSymbsOnSpace(string str, char symb)
{
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == symb)
			str[i] = ' ';
	}

	return str;
}

//Вывод строки, в которой символы не равны заданому
string ExcludeStr(string str, char symb)
{
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == symb)
			str.erase(i, 1);
	}

	return str;
}

string ProcessingString(string str, char symb, string (*processor_p)(string str, char symb))
{
	return processor_p(str, symb);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	//Task 1
	TriangleCreator tCreator;
	tCreator.success += gcnew Creation(SuccessMessage);
	tCreator.fail += gcnew Creation(FailMessage);
	cout << "--Task 1--" << endl;
	tCreator.TryCreate(1, 3, 1);
	tCreator.TryCreate(1, 3, 0);
	tCreator.TryCreate(2, 2, 2);

	//Task 2
	cout << endl << "--Task2--" << endl << ProcessingString("123", '2', ChangeSymbsOnSpace) << endl
		 << ProcessingString("123", '2', ExcludeStr) << endl;
}
