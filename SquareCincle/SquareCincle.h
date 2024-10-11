#pragma once
#include "Square.h"
#include "Cincle.h"
class SquareCincle : protected Square, protected Cincle
{
public:
	SquareCincle(double a, double b);
	void Test();
};

