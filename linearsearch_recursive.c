/*
in this function linear search is performed with recursive calls
the argument i must be added to increment the array location;
if key is found return the i index of key loc;
else 
recursively call linearsearch(a,n,i,key);
a is the base address which acts as  a pointer;
n is the number of elements in the array;
i is the index initially set to zero ; in the function call increment the ith index;

*/


#include <stdio.h>
#define MAX 100
int linearsearch(int [], int, int, int);
void read(int [], int);
int main()
{
    int a[MAX], n, key, i=0;
    int lin;
    printf("\nenter n");
    scanf("%d", &n);
     read(a,n);
    printf("\nenter key");
    scanf("%d", &key);
   lin= linearsearch(a, n, i, key);
     printf("\nfunval=%d", lin);
    return 0;
}

int linearsearch(int a[], int n, int i, int key)
{
    
    if(i>=n)
    {
        return -1;
    }
    else if(i<=n-1 && a[i]==key)
    {
        
           return i;
    }
    
    else if(i<=n-1 && a[i]!=key)
      return linearsearch(a, n, i+1, key);
}


void read(int a[], int n)
{
    
    int i=0;
    printf("\nenter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}
