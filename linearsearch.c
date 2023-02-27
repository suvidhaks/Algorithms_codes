/*
this program takes time complexity O(n);
if the key is found at the las loc in an array 
the entire array has to be traversed to find the key;
say suppose the number of items in the array are n;
and if the key is found at the loc [n-1];
then time complexity requires O(n);
therefore; we say the that linear search algorithm takes linear time 
*/

#include <stdio.h>
#define MAX 100

void read(int a[], int n);
int linearsearch(int [], int, int);

int main()
{
    int a[MAX];
    int i, n,key;
    printf("enter n value");
    scanf("%d", &n);
    read(a,n);
    printf("\nenter key value");
    scanf("%d", &key);
    i= linearsearch(a, n, key);
    printf("\n%d", i);
    return 0;
}


int linearsearch(int a[], int n, int x)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}


void read(int a[], int n)
{
    int i;
    printf("\n enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    return ;
}



int linearsearch_O(int a[], int n, int x) // this piece of code works for big O(n) even if the key is found at first location still the code searches the key for entire n elements of an array; this is inefficient 
{
    int i,flag=-1;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag= i;
        }
    }
    
    return flag;
}




