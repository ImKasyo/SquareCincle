#include "SquareCincle.h"
#include "Square.h"
#include "Cincle.h"
using namespace std;
#include <iostream>
SquareCincle::SquareCincle(double a, double b) : Square(a), Cincle(b)
{
}

void SquareCincle::Test()
{
	if (diametr <= a) {
		cout << "Cincle is in Square";
	}
	else {
		cout << "Cincle is ot in Square";
	}
}
