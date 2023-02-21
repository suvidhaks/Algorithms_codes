/*
recursion program is used to compute fibnocci numbers;
recursion increases the space complexity but the programming is easy when the function fibnocci is called recursively;
ex: if n=7;
return fibnocci(n-2)+fibnocci(n-1)// this statement is computed as follows:
fibnocci() i will use shortname fib;
fib(7) is computed as fib(5)+fib(6)  ---(1) // it is pushed into the stack;
next fib(6) is given as argument to fib(n);
fib(6) is computed as fib(4) + fib(5);  ---(2)
now from the statement (1) the left argument fib(5) is passed as an arg to the function;
fib(5)=fib(3)+fib(4); ----(3) // all these will pushed into the stack 
from the return statement (2) the left funct i,e fib(4) will be passed as an arg to the function.
fib(4)=fib(2)+fib(3) ....(4) // pushed on the stack
from the return statement (3) the left funct i,e fib(3) will be passed as an arg to the function.
fib(3)=fib(1)+fib(2) ....(5) // pushed on the stack
from the return statement (4) the left funct i,e fib(2) will be passed as an arg to the function.
fib(2)=fib(0)+fib(1) ----(6) //pushed on the stack
now fib(1)=1;
fib(0)=0;
fib(2)=fib(0)+fib(1) can be evaluated as
fib(2)=0+1=1; 
fib(3)=fib(1)+fib(2)
      =1+1=2
fib(4)=fib(2)+fib(3)
       =1+2
       =3
fib(5)=fib(3)+fib(4)      
      =2+3
     =5
fib(6)= fib(4) + fib(5)
      =3+5
      =8
      
   fib(7)=fib(5)+fib(6)   
         =5+8
         =13
         
         clear the stack
  
  note that based on the size of unsigned long int thse many bits can be set
  ex: size(unsigned long int)=8B
  all [0-63] bits can be set to 1
  max decimal val=(2^64-1)
  
*/



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
