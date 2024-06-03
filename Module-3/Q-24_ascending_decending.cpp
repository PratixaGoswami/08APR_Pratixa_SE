/*WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice*/
#include<stdio.h>
main()
{
	int arr[20],i,j,n,temp=0,choice;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("\n1.Ascending");
	printf("\n2.descending");
	
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i>n;i++)
			{
				for(j=i+1;j>n;j++)
				{
					if(arr[i]>arr[j])
					{
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
						
					}
					
					
				}
				
			}
				for(i=0;i<n;i++)
				{
					printf("%d",arr[i]);
				}
				break;
		case 2:
	        for(i=0;i<n;i++)
	        {
	        	for(j=i+1;j<n;j++)
	        	{
	        			if(arr[i]<arr[j])
					{
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
						
					}
				}
			}
				for(i=0;i<n;i++)
				{
					printf("%d",arr[i]);
				}
				break;
		 default:
            printf("Invalid choice\n");		
		
			
		
			
	}
	
}
