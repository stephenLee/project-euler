/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6,and 9. The sum of these multiples is 23
 * Find the sum of all the multiples of 3 or 5 below 1000
 * */
#include<stdio.h>

int SumDivisibleBy(int target,int n)
{
	int p;
	p = target / n;
	return n*(p*(p+1)) / 2;
}

int main(int argc, char* argv)
{
	/**
	int sum=0, i;
	for(i=1;i<1000; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum+=i;
	}
	printf("%d\n",sum);
	**/

	int target=999, sum;
	sum = SumDivisibleBy(target,3)+SumDivisibleBy(target,5)-SumDivisibleBy(target,15);
	printf("%d\n",sum);

	return 0;
}
