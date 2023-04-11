/*
Depth of stack is n

*/


#include <stdio.h>
#define mini(a,b) ((a<b)?a:b)
int minimum(int[], int);
void read(int [], int);

int main()
{
    int min1;
    int a[100], n;
    printf("enter n value");
    scanf("%d", &n);
    read(a,n);
    min1=minimum(a,n);
    printf("minimum element=%d",min1);

    return 0;
}

void read(int a[], int n)
{
    
    int i;
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}


int minimum(int a[], int n)
{
    
    if(n==0)
      return  -9999;
      else if(n==1)
       return a[0];
    else if(n>=2)
    {
        int min;
        min=minimum(a+1,n-1);
        return mini(a[0],min);
    }
}




