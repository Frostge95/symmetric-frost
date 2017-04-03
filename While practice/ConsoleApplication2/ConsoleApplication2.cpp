// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0,20, .... 3000*/
int main()
{
	float fahren, cels;
	int lower, upper, step;
	lower = 0;
	upper = 3000;
	step = 20;

	fahren = lower;
	while (fahren <= upper)
	{
		cels = (5.0/9.0)* (fahren - 32.0) ;
		printf("%3.0f \t %6.2f \n", fahren, cels);
		fahren = fahren + step;
	}
	getchar();
	return 0;
}

