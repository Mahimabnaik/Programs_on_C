#include<stdio.h>
#include<string.h>
#define size 100
int  main()
{
    char str[size],temp;
    int i,j,n;

    printf("enter string : ");
    gets(str);
    n=strlen(str);

    for(i=1;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
            else
            {
                continue;
            }
            
        }
        
    }
    printf("new tsring =%s \n",str);
    return 0;
}