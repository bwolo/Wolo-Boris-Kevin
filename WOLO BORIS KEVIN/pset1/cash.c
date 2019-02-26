//WOLO BORIS KEVIN
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int i=1;
     int sum;
     sum=get_int("sum: ");
     int j=0;

      while(sum>=a)
    {
    sum=sum-a;
    j++;
    }
      while(sum>=b)
    {
     sum=sum-b;
     j++;
    }
      while(sum>=c)
    {
    sum=sum-c;
    j++;
    }
      while(sum>=d)
    {
    sum=sum-d;
    j++;
    }
      while(sum>=e)
    {
    sum=sum-e;
    j++;
    }
      while(sum>=f)
    {
    sum=sum-f;
     j++;
    }
    while(sum>=g)
    {
        sum=sum-g;
        j++;
    }
    while(sum>=h)
    {
        sum=sum-h;
         j++;
    }
    while(sum>=i)
    {
        sum=sum-h;
        j++;
    }
    printf("%i coin(s)\n",j);
}