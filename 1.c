/*
TITLE: Write a C program to find the factorial of any given number using recursion. 
Author: Surakshya thapa.
Reference:  Data structures using C and C++
*/

#include<stdio.h>

int factorial(int);

int main()
{
	int n,fac;
	
	printf("Enter the number to get its factorial.\n");
	scanf("%d",&n);
	
	fac=factorial(n);	
	
	printf("The factorial of %d is %d.",n,fac);
}

int factorial(int a)
{
	int y=a-1;
	if(a==0)
	{
		return 1;
	}
	else
	{
		return (a*factorial(y));
	}
}

