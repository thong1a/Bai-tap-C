// baitap1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdarg.h>
/*
double sum(int n, ...)
{
	double a = 0;
	va_list pt;
	va_start(pt, n);
	for (int i = 0; i < n; i++)
	{
		if(((int) va_arg(pt,int)==0)
			a+=va_arg(pt,double);
		else
			a += va_arg(pt, int);
			
	}
	return a;
}
int main()
{
	double s;
		s = sum(3, 4, 1, 2);
	printf("%f", s);
}*/

double total(int sum, ...)
{
	double flag = 0.0;
	va_list ptr;
	va_start(ptr, sum);
	int tam;
	for (int i = 0; i < sum; i++)
	{
		tam = va_arg(ptr, int);
		if (tam != 0)
		{
			flag += tam;

		}
		else
		{
			ptr = ptr - sizeof(ptr);
			flag += va_arg(ptr, double);
		}
	}
	va_end(ptr);
	return flag;
}
int main(void)
{
	printf("%f", total(4, 2.5, 3, 4, 5.2));
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
