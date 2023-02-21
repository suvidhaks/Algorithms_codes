/*
this program computes the fibnocci series upto n=92
this algorithm takes polynomial time to compute the fib value of the nth term
*/

#include <stdio.h>
#define MAX 100
unsigned long long int fibnocci_polynomial(unsigned long long int [], int);
int main()
{
     int n;
    unsigned long long int a[MAX];
    unsigned long long int fib;
     printf("enter the number");
    scanf("%d", &n);
     printf("%ld\n", sizeof(fib));
    fib=fibnocci_polynomial(a,n);
    printf("\nfibn value=%lld", fib);
    
    return 0;
}

unsigned long long int fibnocci_polynomial(unsigned long long int a[], int n)
{
    int i;
    if(n==0)
    {
        return 0;
    }
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    
    return a[n];
}