/*
the following code uses repeated square method to find the modular exponent
Note: this code works only for the values of y which are in the powers of 2 for y is even and if y is odd te value should be even vale of y+1;
ex: y=16; y/2=8;
2^8 mod 100=56;
2^4 mod 100= 16; 2^2 mod 100= 4; 2^1 mod 100= 2; 2^0=1 return from function();
finally functions returns 56^2 mod 100=36;
if y= 17; odd = 2^16.2
y/2=16;
repeat above steps 
*/

#include <stdio.h>
#include<math.h>
int modularexp(int x, int y, int n);
int main()
{
  
  int z, x, y, n;
  printf("enter the values");
  scanf("%d%d%d", &x,&y,&n);
   z=modularexp( x,  y,  n);    
   printf("\n%d", z);
    return 0;
}


int modularexp(int x, int y, int n)
{
    
    int z, ans;
    ans=y;
    if(y==0)
    {
        return 1;
    }
    z=modularexp( x,  y/2,  n);
    if(ans%2==0)
    {
        return (z*z % n);
    }
    else
    {
        return (x*z*z % n);
    }
}



   
