#include "main.h"
/**
 * BSTsqrt - calculate the square root of a given number
 * @start: index the half problem start
 * @end: large value the half problem not exceed
 * @m: the varaible we want to compute
 * Return: the square root of n
 */

int BSTsqrt(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (BSTsqrt(start, mid - 1, m));
		if (mid * mid < m)
			return (BSTsqrt(mid + 1, end, m));
	}
	return (-1);
}
