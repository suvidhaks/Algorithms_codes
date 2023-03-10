/*
 swap(a, a+n-1);
 ex: n=4
 index: 0  1 2 3
 firat pass : swap(a,a+n-1)
 swap(0,3);
 reverse(a+1, n-2);
 second pass: n=2; 2 elements are sorted in first pass ; so n=2;
swap(a,a+n-1);
the base adress a is a[1];
a[1]+1=a[2];

*/


#include <stdio.h>
#include<string.h>
#define MAX 20

void reverse(int [], int);
void display(int a[], int n);
void read(int a[], int n);
void swap(int *p, int *q);

int main()
{
   int a[MAX];
   int n;
   printf("\nenter n value");
   scanf("%d",&n);
   read(a,n);
   reverse(a,n);
   display(a,n);
    return 0;
}

void reverse(int a[], int n)
{
    if(n==0 || n==1) // if even no. of elements; then no elements is left to be swapped so zero;incase of odd; 1 element is not swapped i,e mid element
    {
        return ;
    }
    swap(a, a+n-1); // everytime i is incremented to 1; a+1 will be the base array; n-1 indicates the index;
    reverse(a+1, n-2); //every fun call two elements are sorted; here n indicates the no. of elements  to be sorted
}


void swap(int *p, int *q)
{
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;
    return;
}

void read(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}


void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    return ;
}

