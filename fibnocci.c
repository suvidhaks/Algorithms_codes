#include <stdio.h>
unsigned long int fibnocci(unsigned int);
int main()
{
    unsigned int n;
    unsigned long int fib;
     printf("enter the number");
    scanf("%d", &n);
   // printf("%ld\n", sizeof(unsigned long int));
    fib=fibnocci(n);
    printf("\nfibn value=%ld", fib);
    
    return 0;
}

unsigned long int fibnocci( unsigned int n)
{
    
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    
    return fibnocci(n-2) + fibnocci(n-1);
    
}