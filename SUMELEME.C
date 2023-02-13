#include<stdio.h>
int main()
{
   //let's assume the maximum array size as
   //intialize sum as 0. Otherwise, it will
   int arr[100], size,i,sum = 0;

   //Get size input from user
   printf("Enter array size\n");
   scanf("%d",&size);

   //Get all elements using for 1oop and stc
   printf("Enter array elements\n");
   for(i=0; i< size; i++)
	 scanf("%d",&arr[i]);

   //add all elements to the variable sum.
   for(i = 0; i < size; i++)
	 sum = sum + arr[i]; // same as sum

   //print the result
   printf("Sum of the array = %d\n",sum);

    return 0;
}