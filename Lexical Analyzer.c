#include<stdio.h>
#include<string.h>
void main()
{
	char a[1000],b[1000], ch ,s[10000],scom[100],mcom[100],lit[100],keyw[20][10]={"int","float","printf","scanf","gets","puts","break","long","char","for","if","switch","else","while","double","main","void","else if","return","do"};
	int i=0,j=0,k,l,count=0,flag=0,cmtcount=1;
	FILE *fp,*fp1;
	fp = fopen("file2.txt" , "r");
	fp1 = fopen("file2.txt" , "r");
	
	i=0;
	while((ch=fgetc(fp))!=EOF)
	{
		s[i]=ch;
		printf("%c",s[i]);
		i++;
	}
	i=0;
	while(i<strlen(s))
	  {
	  if(s[i]=='/')
      {
      	    i++;
            if(s[i]=='/')
            {
            	  j=0;
            	  i++;
                  while(s[i]!='\n')
                  {
                  	scom[j]=s[i];
                  	i++;
                  	j++;
                  	
                     	if(i>strlen(s))
							{
								printf("no comments here\n");
								break;
							}
				  }
				  scom[j]='\0';
				  puts(scom);
				  printf("is a single line comment\n");
				  cmtcount++;
            }
            else if(s[i]=='*')
            {
                        if(cmtcount==0)
                        {
                        	cmtcount=1;
						}
                        j=0;
                        i++;
                        while(s[i]!='*'&&s[i+1]!='/')
                        {
                            mcom[j]=s[i];
							i++;
							j++;  
							
							if(i>strlen(s))
							{
								printf("no comments here\n");
								cmtcount=0;
								break;
							}
                        }
                        mcom[j]='\0';
                        if(cmtcount!=0)
                        {
					     puts(mcom);
                         printf("is a multi line comment\n");
                         cmtcount++;
                        }
                  
                  
            }
            else
            {
                
            }
            
 }
 
         if(s[i]=='#')
        {
                 while(s[i]!='>')
                 {
                             printf("%c",s[i]);
                             i++;
                             
                          	if(i>strlen(s))
							{
								break;
							}
                 }
                 printf("%c is a header file\n",s[i]); 
       }
        if(s[i]=='"')
         {
             do
             {
                         i++;
                         printf("%c",s[i]);
                         	if(i>strlen(s))
							{
								break;
							}
             }
             while(s[i]!='"');
             printf("\b is a literal\n"); 
            
         }
     if(!isalnum(s[i]))
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
	    if(s[i]!=' ')
		{
		 printf("is a special character\n");
     	}
}
    if(count!=0)
    {
    	printf("\n %c%c ",s[i],s[i+1]);
		printf("is Not a operator\n");
		i++;
    	
	}
    

	  }
         i++;
}
         
    
      
      while(fscanf(fp1,"%s",a)!=EOF)
         {
         	flag=0;
         	
         	 //printf("\n %s.",a);
      	    if((a[0]=='/'&&a[1]=='*')||(a[0]=='/'&&a[1]=='/'))
      	    {
      	    	while((a[strlen(a)-2]!='*'&&a[strlen(a)-1]!='/'))
      	    	{
      	    		fscanf(fp1,"%s",a);
				  }
      	    	
			  }
			  
		 
      for(k=0;k<20;k++)      
      {
      	
            for(l=0;l<strlen(a);l++)
            {
            	  if(a[l]==keyw[k][l])
            	  {
                  b[l]=a[l];
                  }
            
                  if(strcmp(b,keyw[k])==0)
                  {
                    
				  	flag=1;
				  }
                
            }
      }
      
      for(i=0;i<strlen(a);i++)
		{
	    	if(a[i]=='"')
            {
             do
             {
               i++;
                         
            	if(i>strlen(a))
				{
					fscanf(fp1,"%s",a);
					i=0;
					
				}
             } while(a[i]!='"');
             }
		}
      if(flag==1)
      {
            printf("\n %s is Keyword.",b);
            
      }
      else
      {
            if((a[0]=='_')||(isalpha(a[0])!=0))
            {
                  for(k=1;a[k]!='\0';k++)
                  {
                        if((isalnum(a[k])==0)&&(a[k]!='_'))
                        {
                              flag=1;
                        }
                  }
            }
            else
            {
                  flag=1;
            }
            
            if(flag==0)
           {
            printf("\n%s is an Identifier.",a);
           }
      }
      
      
     

    
}
	
	
}

