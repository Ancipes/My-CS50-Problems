# include <stdio.h>
#include <cs50.h>
int main(void)
{
    long long i=0;
    long long checksum=0;
    long long n=0;
    long long m=0;
    long long l=0;
    long long s=0;
    long long counter=0;
    long long a=0;
    long long t=0;
    long long x=0;
    long long c=get_long_long("Enter Credit Card Number:");
    t=c;
    while(c>0)
    {
         a=c%10;
        i++;
        if(i%2==0)
        {
            n=a*2;
            while(n>=10)
            {
              int  d=n%10;
                s=s+d;
                n=n/10;
            }
            s=s+n;
        }
        else
        {
            l=a;
            m=m+a;
        }
        c=c/10;
        counter++;
    }
    checksum=s+m;
    long long fc=(counter+2)-(counter);
    for(x=counter;x>fc;x--)
    {
        t=t/10;

    }
    if(checksum%10!=0)
    {
        printf("INVALID\n");
    }
    else if(counter>=15&&(t==34||t==37))
    {
        printf("AMEX\n");
    }
    else if(counter>=16&&(t==51||t==52||t==53||t==54||t==55))
    {
        printf("MASTERCARD\n");
    }
    else if(counter==13||(counter==16&&a==4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

}