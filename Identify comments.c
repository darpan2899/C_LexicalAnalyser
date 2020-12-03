#include<stdio.h>
#include<string.h>
void main()
{
      char text[100],scom[100],mcom[100];
      int i=0,j=0,cmtcount=1;
      

      printf("\nWrite a C Program to Identify Whether a Given Line is a Comment or Not.]n");
      printf("\n\nEnter Text :\n(Press Tab to exit):");
      scanf("%[^\t]",text);
      while(i<strlen(text))
	  {
	  if(text[i]=='/')
      {
      	    i++;
            if(text[i]=='/')
            {
            	  j=0;
            	  i++;
                  while(text[i]!='\n')
                  {
                  	scom[j]=text[i];
                  	i++;
                  	j++;
                  	
                     	if(i>strlen(text))
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
            else if(text[i]=='*')
            {
                        if(cmtcount==0)
                        {
                        	cmtcount=1;
						}
                        j=0;
                        i++;
                        while(text[i]!='*'&&text[i+1]!='/')
                        {
                            mcom[j]=text[i];
							i++;
							j++;  
							
							if(i>strlen(text))
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

     i++;
}
     if((cmtcount-1)>=0)
     {
     	printf("number of comments is %d \n",(cmtcount-1));
     	
	 }
	 else
	 {
	 	printf("number of comments is 0 \n");
	 }

}

