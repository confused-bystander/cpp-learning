#include "myMath.h"

int multiply(int x, int y)
{
	return x * y;
}

double divide(int x, int y)
{
	return 1.0 * x / y;
}

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int gcd(int x, int y)
{
	if (x == 0)
		return y;
	return gcd(y % x, x);
}