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
