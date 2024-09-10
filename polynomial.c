#include<stdio.h>
struct poly
{
int coeff;
int expo;
};
void main()
{
int n,i;
printf("Enter the number of terms");
scanf("%d",&n);
struct poly A[n];
printf("Enter the terms in polynomial :\n");
printf("in descending order \n");
for(i=0;i<n;i++)
{
 printf("coefficent %d:", i+1);
 scanf("%d",&A[i].coeff);
 printf("exponent %d: ",i+1);
 scanf("%d",&A[i].expo);
 }
 printf("The polynomial is \n");
 for(i=0;i<n;i++)
 {
    if(i<n-1)
      printf("(%dx^%d)+",A[i].coeff,A[i].expo);
      else
      printf("(%dx^%d)",A[i].coeff,A[i].expo);
      }
      }


