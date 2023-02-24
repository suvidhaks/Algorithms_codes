/*
2 is the only even prime number ;
so, the outer for loop runs for all odd numbers, if input size=100;
the loop runs for 50;
the inner for loop also runs for 50
coz the divisors of all the odd numbers will be odd numbers itself
therefore for input size =n;
outer loop runs for n/2;innerloop also runs for n/2;
t(n)=(n/2)*(n/2);
t(n)=(n^2/4);
e.x: n=100
n*n=100*100=10000;
(100/4)*100=2500
the loop is reduced from 10000 to 2500 ;
though we ignore constants while defining function to measure the time complexity of alg. 
when we take value for n and calculate the no. of times the loops run
we can estimate the time taken;

for any i value lesser than its divisorscan be found within the sqrt(n)
 for(j=3;j<sqrt(i);j+=2)
with this above loop 
the complexity will be (n*sqrt(n))/4;
e.x: n=100
(100 * sqrt(100))/4 =250;
*/


#include <stdio.h>

int main()
{
   int i, j, n,flag,prime=2;
   scanf("%d", &n);
   for(i=3;i<n;i+=2)
   {
      
       flag=1;
       for(j=3;j<i;j+=2) /*  for(j=3;j<sqrt(i);j+=2)*/
       {
           if(i%j==0)
           {
               flag=0;
           }
       }
       if(flag)
       {
          if(prime==2) 
          {
            printf("%d\t", prime);
            prime=0;
          }

           printf("%d\t", i);    
       }
       
          
   }

    return 0;
}
