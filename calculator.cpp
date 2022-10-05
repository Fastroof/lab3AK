#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Double (double x)
{
	return Add (x, x);
}

int Calculator::Magic (double x)
{
	return x * x + 0.25;
}
