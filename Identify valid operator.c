#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int i=0,count=0;
printf("\n Enter expression:");
gets(s);

 while(i<strlen(s))
 {
 	count=0;
 
switch(s[i])
{
case'>':
        {
		if(s[i+1]=='=')
         {
         	printf("%c",s[i]);
         	i++;
         	printf("%c",s[i]);
         	printf("\n Greater than or equal");
		 }
       else if(s[i+1]=='>')
	    {
	    	printf("%c",s[i]);
	    	i++;
	    	printf("%c",s[i]);
	    	printf("\n Shift Right");
	    }
	    else if(s[i+1]==' '||isalnum(s[i+1]))
		{
		 printf("%c",s[i]);
		 printf("\nGreater than");
		 }
		 else
		 {
		 	count=1;
		 }
         break;
     }
case'<':
        if(s[i+1]=='=')
		{
			printf("%c",s[i]);
		  i++;
		  printf("%c",s[i]);
		 printf("\n Less than or equal");
		}
		else if(s[i+1]=='<')
	    {
	    	printf("%c",s[i]);
	    	i++;
	    	printf("%c",s[i]);
	    	printf("\n Shift Left");
	    }
		 else if(s[i+1]==' '||isalnum(s[i+1]))
		{
			printf("%c",s[i]);
		 printf("\nLess than");
		 }
		 else
		 {
		 	count=1;
		 }
		break;
case'=':
		if(s[i+1]=='=')
		{
			printf("%c",s[i]);
			i++;
			printf("%c",s[i]);
			printf("\nEqual to");
		}
		 else if(s[i+1]==' '||isalnum(s[i+1]))
		{
			printf("%c",s[i]);
		 printf("\nAssignment");	
		}
		else
		 {
		 	count=1;
		 }
		break;
case'!':
		if(s[i+1]=='=')
		{
			printf("%c",s[i]);
			i++;
			printf("%c",s[i]);
			printf("\nNot Equal");
		}
		 else if(s[i+1]==' '||isalnum(s[i+1]))
		{
			printf("%c",s[i]);
		 printf("\n Bit Not");
	   }
	   else
		 {
		 	count=1;
		 }
		break;
case'&':
		if(s[i+1]=='&')
		{
			printf("%c",s[i]);
			i++;
			printf("%c",s[i]);
			printf("\nLogical AND");
		}
		 else if(s[i+1]==' '||isalnum(s[i+1])) 
		{
			printf("%c",s[i]);
			printf("\n Bitwise AND");
		}
		else
		 {
		 	count=1;
		 }
		break;
case'|':
		if(s[i+1]=='|')
		{
		 printf("%c",s[i]);
		 i++;
		 printf("%c",s[i]);
		 printf("\nLogical OR");	
		}
    	 else if(s[i+1]==' '||isalnum(s[i+1]))
    	{
    		printf("%c",s[i]);
    	 printf("\nBitwise OR");	
		}
		else
		 {
		 	count=1;
		 }
		break;
case'+':
	    if(s[i+1]=='=')
	    {
	    	printf("%c",s[i]);
	    	i++;
	    	printf("%c",s[i]);
	    	printf("\n Shorthand Addition");
		}
		else if(s[i+1]=='+')
		{
			printf("%c",s[i]);
			i++;
			printf("%c",s[i]);
			printf("\n Increment");
		}
		 else if(s[i+1]==' '||isalnum(s[i+1]))
		{
		printf("%c",s[i]);
		printf("\n Addition");
		}
		else
		 {
		 	count=1;
		 }
		break;
case'-':
	if(s[i+1]=='=')
	    {
	    	printf("%c",s[i]);
	    	i++;
	    	printf("%c",s[i]);
	    	printf("\n Shorthand Subtraction");
		}
		else if(s[i+1]=='-')
		{
			printf("%c",s[i]);
			i++;
			printf("%c",s[i]);
			printf("\n Decrement");
		}
		 else if(s[i+1]==' '||isalnum(s[i+1]))
		{
		printf("%c",s[i]);
		printf("\nSubstraction");
		}
		else
		 {
		 	count=1;
		 }
		break;
case'*':
		if(s[i+1]=='=')
	    {
	    	printf("%c",s[i]);
	    	i++;
	    	printf("%c",s[i]);
	    	printf("\n Shorthand multiplication");
		}
		 else if(s[i+1]==' '||isalnum(s[i+1]))
		{
			printf("%c",s[i]);
		printf("\nMultiplication");
		}
		else
		 {
		 	count=1;
		 }
		break;
case'/':
	    if(s[i+1]=='=')
	    {
	    	printf("%c",s[i]);
	    	i++;
	    	printf("%c",s[i]);
	    	printf("\n Shorthand Division");
		}
		 else if(s[i+1]==' '||isalnum(s[i+1]))
		{
			printf("%c",s[i]);
		printf("\nDivision");
		}
		else
		 {
		 	count=1;
		 }
		break;
case'%':
	    printf("%c",s[i]);
		printf("Modulus");
		break;
case '^':
	    printf("%c",s[i]);
		printf("Power");
		break;
default:
	    printf("\n%c ",s[i]);
		printf("is Not a operator\n");
}
    if(count!=0)
    {
    	printf("\n %c%c ",s[i],s[i+1]);
		printf("is Not a operator\n");
		i++;
    	
	}
    i++;

}
}
