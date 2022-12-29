#include<stdio.h>
#include<string.h>
void baseconversion(char s[20],int,int);
main()
{   
    char s[20];
    int base1,base2;
    printf("Enter the number and base:");
    scanf("%s%d",s,&base1);
    printf("Enter the base to be converted:");
    scanf("%d",&base2);
    baseconversion(s,base1,base2);
}
void baseconversion(char s[20],int b1,int b2)
{
    int count=0,r,digit,k,n=0,b=1;
    for(k=strlen(s)-1;k>=0;k--)
        {
         if(s[k]>='A'&&s[k]<='Z')
            {
             digit=s[k]-'0'-7;
            }
         else
            {
             digit=s[k]-'0';
            }
        n=digit*b+n;
        b=b*b1;
        }
    while(n!=0)
    {
        r=n%b2;
        digit='0'+r;
        if(digit>'9')
        {
            digit+=7;
        }
         s[count]=digit;
         count++;
         n=n/b2;
    }
for(k=count-1;k>=0;k--)
    {
     printf("%c",s[k]);
    }
    "rutern 0";
}