// Write a program to find out the max number from given array using function

#include<stdio.h>
int maxnumber(int arr[],int n)
{
	int i,max=0;
   for(i=0;i<n;i++)
   {
   	if(arr[i]>max)
   	max=arr[i];
   }
   printf("Maximum number in the array :%d",max);
	
	
}

main()

{
	int arr[10],n,i,max,l;
	printf("Enter Number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    maxnumber(arr,n);
	
	
}
