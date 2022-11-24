/* 1
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string\n");
    gets(str);
    int i;
    for(i=0;str[i];i++);
    printf("lenght of string %d",i);
    return 0;

}*/
/* 2
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string ");
    gets(str);
    char b;
    printf("enter the one character ");
    scanf("%c",&b);
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==b)
            count++;
    }
    printf("\n %d",count);
    return 0;

}*/
/* 3
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string");
    gets(str);
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            count++;
        else
        {
             if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
            count++;
        }
    }
    printf("total vowel count %d",count);
    return 0;
}*/

/* 4
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string ");
    fgets(str,50,stdin);
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        str[i]=str[i]-32;
    }
    printf("\n %s",str);
    return 0;
}*/
/* 5
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the your string ");
    gets(str);
    int i;
    for(i=0;str[i];i++)
    {
      if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("\n lower case\n");
    printf("%s",str);
    return 0;
}*/
/* 6
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    printf("enter the string ");
    gets(str);
    int i,l;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("\n reverse string\n");
    printf("%s",str);
    return 0;

}*/
/* 7
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string");
    gets(str);
    int i,alcount=0,dicount=0,spcount=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            alcount++;
        else
        {
            if(str[i]>='0'&&str[i]<='9')
                dicount++;
            else
                spcount++;
        }
    }
    if(alcount!=0)
        printf("alphabets %d",alcount);
        if(dicount!=0)
            printf("\n digit %d",dicount);
            if(spcount!=0)
            printf("\n special %d ",spcount);
    return 0;
}*/
/* 8
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string");
    gets(str);
    char sto[50];
    int i;
    for(i=0;str[i];i++)
        sto[i]=str[i];
    sto[i]='\0';
    printf("\n copy the string \n ");
    printf("%s",sto);
    return 0;
}*/
/* 9
#include<stdio.h>
int main()
{
    char str[50],ch;
    printf("enter the your string ");
    gets(str);
    int i,j;
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
            if(str[i]>str[j])
            {
                ch=str[i];
                str[i]=str[j];
                str[j]=ch;
            }
        }
    }
    printf("\n ascending order \n");
    printf("%s ",str);
    return 0;
}*/

#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the your string ");
    gets(str);
    int i,freq[150]={0};
    for(i=0;str[i];i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<150;i++)
    {
        if(freq[i]!=0)
            printf("%c occurs elements %d \n",i,freq[i]);
    }
    return 0;
}
