// WAP to find factorial using recursion 
// WAP to find factorial using recursion 
#include<stdio.h>
int factorial(int n){
	 
	 if(n==0)
	  return(1);
	 else
	 return(n*factorial(n-1));

}
main()
{
	int n,f;
	printf("Enter number:");
	scanf("%d",&n);
    f=factorial(n);
    printf("Factorial is:%d",f);
}
