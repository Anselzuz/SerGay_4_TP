#include "pch.h"
#include "TriangleCreator.h"

//Task 1
void TriangleCreator::TryCreate(double side1, double side2, double side3)
{
	//Из трех отрезков a, b, c можно составить треугольник, если выполняется следующее условие для всех его сторон:
	//сумма длин двух сторон треугольника строго больше длины третьей.
	if (side1 == 0 || side2 == 0 || side3 == 0)
	{
		fail();
		return;
	}
	else if (side1 > side2 + side3)
	{
		fail();
		return;
	}
	else if (side2 > side1 + side3)
	{
		fail();
		return;
	}
	else if (side3 > side1 + side2)
	{
		fail();
		return;
	}
	else
		success();
}