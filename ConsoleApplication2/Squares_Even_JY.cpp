// Squares_Even_JY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MIN_NUMBERS 745
#define MAX_NUMBERS 961
#define NULL 0
int i = 0;
int b;
int c;
int min_numbers = MIN_NUMBERS;

int main()
{
	while (1)
	{
		for (c = 1; c * c <= MAX_NUMBERS, c * c >= MIN_NUMBERS; c++)
		{
			if (c * c % 2)
			{

			}
			else
			{
				printf("%d*%d=%d\n", c, c, c*c);
			}
		}
		c++;
	}
	return 0;
}