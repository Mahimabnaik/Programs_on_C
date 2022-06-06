#include<stdio.h>

#define size 100

int main()
{
    char str1[size],str2[size],str3[size];
    int i,j;
    printf("enter string 1:");
    gets(str1);
    printf("enter string 2:");
    gets(str2);
    printf("the given strings are: %s and %s\n",str1,str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    for(j=0;str2[j]!='\0';j++)
    {
        str3[i++]=str2[j];
    }
    str3[i]!='\0';

    printf("resultant string : %s\n",str3);
    return 0;
}