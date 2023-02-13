#include<stdio.h>
int main()
{
float principle, time, rate, SI;

   /* Input principle rate and time */
 printf("Enter principle (amount): ");
 scanf("%f", &principle);

 printf("Enter time: ");
 scanf("%f", &time);

 printf("Enter rate: ");
 scanf("%f", &rate);

 /* calculate simple interest*/
 SI = (principle * time * rate) / 100;

 /* Prinrt the resultant value of SI */
 printf("simple Interest = %f", SI);

 return 0;
}f