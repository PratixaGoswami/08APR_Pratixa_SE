// WAP to show Vowel or Consonant using switch case 

#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Charcter:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':	
		case'o':
		case'O':
		case'u':
		case'U':	
		 
		 printf("%c is a vowel.\n",ch);
		 break;
			
	
	default:
			if((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z'))
			{
				printf("%c is a consonant.\n",ch);
				
			}
			else
			{
				printf("%c is not valid alphabet charcter.\n",ch);
			}
		

	break;
}
}
