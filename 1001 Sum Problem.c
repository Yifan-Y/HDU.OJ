//In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
//The input will consist of a series of integers n, one integer per line.
//For each case, output SUM(n) in one line, followed by a blank line. 
//You may assume the result will be in the range of 32-bit signed integer.
 
#include<stdio.h>
int main()
{
	int i,n,sum;
	while (scanf("%d",&n) != EOF)
	{
		sum=0;
		for(i=1; i <= n;i++)
		{
			sum += i;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
