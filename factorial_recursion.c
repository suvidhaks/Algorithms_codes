/*
we compute the factorial of a whole number (+ve integers and zero); therefore unsigned long int 
has been used ;
if we analyse time complexity in the recursive each function is execute once with the constant multiplier
ex: n=14;
14*factorial(14-1); is recursively called until base condition is satisfied;
n is set to 0 coz the factorial of zero is 1;
therefore n==0 or n>=0 also suffices ;
so the equation is:
ax+b therefore this function call takes linear time;
note:
based on memory capacity one can increase the value for n;
in my  program max n value=14;
*/



#include <stdio.h>
#include<math.h>
unsigned long int factorial(unsigned long int);


int main()
{
   // unsigned long int fact;
   //fact= ;
    printf("%ld",factorial(pow(14,1)));

    return 0;
}

unsigned long int factorial(unsigned long int n)
{
   // int n;
    if (n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}