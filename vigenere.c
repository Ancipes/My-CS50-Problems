#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main (int argc,string argv[])
{
    if(argc!=2)
    {
        printf("Error\n");
        return 1;
    }

string v=argv[1];
 for (int q= 0, w= strlen(v); q< w; q++)
    {
        if (!isalpha(v[q]))
        {
            printf(" Error-You entered a non-alphanumeric key\n");

            return 1;
        }
    }
    string s=get_string("plaintext: ");
printf("ciphertext: ");
for (int i = 0, n = strlen(s), z=0; i < n; i++)
{

    if(isalpha (s[i]))
    {
    while(z>strlen(v)-1)
    {
        z=0;
    }
if((int)s[i]>='A'&&(int) s[i]<='Z')
{
    int k=(int)s[i]-65;
    if((int)v[z]>='A'&&(int) v[z]<='Z')
    {
    int p=(int)v[z]-65;
    k=(k+p)%26;
    k=k+65;
    printf("%c",(char)k);
}
else  if((int)v[z]>='a'&&(int) v[z]<='z')
    {
    int p=(int)v[z]-97;
    k=(k+p)%26;
    k=k+65;
    printf("%c",(char)k);
}
}
else if((int) s[i]>='a'&&(int)s[i]<='z')
{
    int j=(int)s[i]-97;
    if((int)v[z]>='a'&&(int) v[z]<='z')
    {
    int p=(int)v[z]-97;
    j=(j+ p)%26;
    j=j+97;
    printf("%c",(char)j);
}
else  if((int)v[z]>='A'&&(int) v[z]<='Z')
    {
    int p=(int)v[z]-65;
    j=(j+ p)%26;
    j=j+97;
    printf("%c",(char)j);
    }
}
z++;
}
else
{
    printf("%c",(char)s[i]);
}
}
printf("\n");
return 0;
}
