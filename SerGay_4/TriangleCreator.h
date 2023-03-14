#pragma once

//Task 1
delegate void Creation();
ref class TriangleCreator
{
public:
	void TryCreate(double, double, double);
	event Creation^ success;
	event Creation^ fail;
};