// Function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
/*test power function*/

int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p*base;
	return p;
}

int main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));

	getchar();

    return 0;
}
/*power function*/


