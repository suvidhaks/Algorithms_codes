/*
using polynomial recursion, we compute the sum of an array elements;

depth of the stack=logn;
for every recursive all the subarray is divided until we get atomic values then  the corresponding array location is
copied as the return value to the stack call; therefore, only two arguments are required in a function call();
one argument is array location and another is number of elements in an array;
if n=even; then array is divides as:
(a,n/2)
(a[n/2], (n+1)/2); // if n = even {equal no.of elements on both left and right tree}
since n/2 is taken in the right tree the no.of elements in right tree is +1 than left tree; if n=odd;
*/


#include <stdio.h>
#define max 100
void read(int [], int );
int sum(int[], int);
int main()
{
    int a[max],i,n;
    printf("\n enter n");
    scanf("%d", &n);
    read(a,n);
    int  sumfun;
    sumfun=sum(a, n);
    printf("\nsum=%d", sumfun);
    return 0;
}


void read(int a[], int n)
{
    int i;
    printf("\nenter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}



int sum(int a[], int n)
{
    if(n<=1)
     return a[0];
      int s, s1;
      s=sum(a,n/2);
      s1=sum(&a[n/2], (n+1)/2);
      return (s+s1);
    
}