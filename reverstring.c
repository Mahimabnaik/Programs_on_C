#include<stdio.h>
#define size 100

int main()
{
    char str[size],reverse[size];
    int i,j;

    printf("enter string :\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
      ;
        for(j=0;i>=0;j++)
        {
            reverse[j]=str[--i];
        }
        
    
    reverse[j]='\0';

    printf("original string: %s\n",str);
    printf("reverse string : %s\n",reverse);

    return 0;
}