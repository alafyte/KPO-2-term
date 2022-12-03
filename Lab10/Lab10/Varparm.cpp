#include "Varparm.h"

namespace Varparm {
	int ivarparm(int n, ...)
	{
		int res_mul = 1;
		if (n == 0) return 0;

		int* func1_arg = &n;
		func1_arg += 1;	

		for (int i = 0; i < n; i++)
		{
			res_mul = res_mul * (*func1_arg);
			func1_arg = (func1_arg + 1);
		}
		return res_mul;
	}
	int svarparm(short s, ...) 
	{
		int max = 0;
		if (s == 0) return 0;

		int* func2_arg = (int*)&s;
		func2_arg += 1;

		for (int i = 0; i < s; i++) 
		{
			if (*(func2_arg) > max)
				max = *(func2_arg);
			
			func2_arg += 1;
		}
		return max;
	}
	double fvarparm(float f, ...)
	{
		if (f == FLT_MAX) return 0;

		double sum = (double)f;
		double* ptr = (double*)(&f + 1);
	
		for (int i = 0; *(ptr + i) != (double)FLT_MAX; i++) {
			sum += *(ptr + i);
		}
		return sum;
	}
	double dvarparm(double d, ...)
	{
		if (d == DBL_MAX) return 0;

		double sum = d;
		double* ptr = &d + 1;
		for (int i = 0; *(ptr + i) != DBL_MAX; i++) {
			sum += *(ptr + i);
		}
		return sum;
	};
}