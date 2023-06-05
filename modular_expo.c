/*
the following code uses repeated square method to find the modular exponent
ex: y=16; y/2=8;
2^8 mod 100=56;
2^4 mod 100= 16; 2^2 mod 100= 4; 2^1 mod 100= 2; 2^0=1 return from function();
finally functions returns 56^2 mod 100=36;
if y= 17; odd = 2^16.2
y/2=16;
repeat above steps 
*/


#include <stdio.h>

int  modularexpo(int,int,int);

int main()
{
    int z;
    z= modularexpo(2,17,100);
    printf("%d", z);
    return 0;
}

int  modularexpo(int x,int y,int N)
{
    int z;
    if(y==0)
     return 1;
    else if(y%2==0)
    {
        z=modularexpo(x,y/2,N);
        return ((z*z) % N);
    }
    else
    {
         z=modularexpo(x,y/2,N);
        return (2*(z*z) % N);
    }
    
}
