#include "stdafx.h"
#include "f1.h"

int factorial(int n)
{   
	if (n == 1 || n == 0)
		return 1;
	return n*factorial(n-1);
}

float FAC::convert(float deg)
{
	float r;
	r = (deg*3.14)/180.0;
	return r;
}
