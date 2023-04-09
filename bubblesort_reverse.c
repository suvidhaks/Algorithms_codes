/*
implementation of bubblesort algorithm ; with subarray sorting approach;
for i=1 to n-1
for j=n to i+1
if a[j-1]>a[j]
temp=a[j-1]
a[j-1]=a[j]
a[j]=temp

the inner for loop j computes for (n-i) times;
the outer loop runs for i=1 to n-1 times;
if we simplify it further it is sum of natural numbers=n(n+1)/2;
in outer for loop n=n-1;
n(n-1)/2= O(n2) 
big -oh of (n2);if we ignore the constant factors and n factor with <2 degree;

*/


#include <stdio.h>
#define max 100


void read(int [], int n);
void display(int [], int n);
void bubblesort(int a[],int n);

int main()
{
    int a[max], n;
    printf("enter n");
    scanf("%d", &n);
    read(a,n);
   bubblesort(a,n);
    display(a,n);
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

void bubblesort(int a[],int n)
{
    int i, j, temp;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>=i+1;j--)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    return;
}

void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d%c", a[i], (i!=0 && i%10==0)?'\n' : ' ');
    }
    return ;
}

