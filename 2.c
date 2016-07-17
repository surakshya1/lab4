/*
TITLE: Write a C program to implement binary search.. 
Author: Surakshya thapa.
Reference:  Data structures using C and C++
*/

#include<stdio.h>
 #include<conio.h>
 
 #define MAX 100
 
 int BinarySearch(int,int);
 int a;
 char num[MAX];
 
 int main()
 {
 	int count,i,j;
 	
 	printf("Enter the range of the element.\n");
 	scanf("%d",&count);
 	
 	printf("Enter the sorted elements\n");
 	for(i=0;i<count;i++)
 	{
 		scanf("%d",&num[i]);
 	}
 	
 	printf("Enter the element you want to search\n");
 	scanf("%d",&a);
 	
 	j=BinarySearch(0,count);
 	if(j==-1)
 	{
 		printf("The element you searched %d is not in the array of elements\n",a);
 	}
 	else
 	{
 		printf("%d is avialable in the array.\n",num[j]);
 	}
 }
 
 int BinarySearch(int low,int high)
 {
 	int mid;
 	mid=(low+high)/2;
 		
 	if(low>high)
 	{
 		return (-1);
 	}
 	else if(a==num[mid])
 	{
 		return (mid); 
 	}
 	else if(a<num[mid])
 	{
 		BinarySearch(low,mid-1);
 	}
 	else if(a>num[mid])
 	{
 		BinarySearch(mid+1,high);
 	}
 }
