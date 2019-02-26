//WOLO BORIS KEVIN
#include <stdio.h>

#include <cs50.h>

int
main(void)

{
    long long i, g, m;
    int s, p, sum;


do

  {
i=get_long_long("Enter your credit card number please: ");

}

 while (i<0);


for (g=i, s=0; g>0; g/=100)

 s+= g%10;


for(m=i/10, p=0; m>0; m/=100)

 {

 if (2* (m%10)>9)

{

 p+=(2*(m%10))/10;

 p+=(2*(m%10))%10;

}

  else

p+=2 *(m%10);

 }

    sum=s+p;


 if (sum%10==0)


 {
 // 15digits

 if ((i >=340000000000000 && i<350000000000000) || (i>=370000000000000 && i<380000000000000))

  printf("This card is an American Express card\n");


  else if (i>=510000000000000 && i<560000000000000)

printf("This card is a Mastercard\n");



 else if ((i>=4000000000000 && i<5000000000000) || (i>=4000000000000000 && i<5000000000000000))

 printf ("This card is a Visa Card\n");

 else

 printf("This card is not valid \n");
 }

}