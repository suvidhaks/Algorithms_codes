/*
Implementation of bubble sort alg. through three different algorithms;
all three algorithms have concentrated on the order of sorting ;
either minimum element placed first or the maximum element placed at the last index;
in swap function;
coreman method suggests placing the minimum element at the first index of the array
by writting it into the first location of the array index;

time complexity : all three methods takes O(n^2) in all the three cases i,e best case, average case and worst case;
different procedures have also concentrated on the comparison gap between the memory locations of the array;
in bubblesort_1 and coremen method two consecutive locations are sorted;

*/


#include <stdio.h>

void bubblesort(int a[],int n);
void bubblesort1(int a[],int n);
void bubblesort_coreman(int a[], int n);
void read(int a[], int n);
void display(int a[], int n);
int main()
{
 int a[100], n;
 printf("enter n value");
 scanf("%d", &n);
 read(a,n);
 bubblesort(a,n);
 bubblesort1(a,n);
 bubblesort_coreman(a, n);
display(a,n);
    return 0;
}

void read(int a[], int n)
{
      int i,j;
      printf("enter elements");
     for(i=0;i<n;i++)
    {
      scanf("%d", &a[i]);  
    }
    return ;
}


void bubblesort(int a[], int n)
{
    int i,j, temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    return ;
}


void bubblesort1(int a[], int n)
{
    int i,j, temp;
    for(i=0;i<n-1;i++)  
    {
        for(j=0;j<n-i-1;j++) // in every iteration the max element is pushed at the end of the array loc;therefore exclude one iiteration after the completion of i iteration;
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j]; // first write operation is executed in higher byte location;
                a[j]=temp;
            }
        }
    }
    return ;
}


void bubblesort_coreman(int a[], int n)
{
    int i,j, temp;
    for(i=0;i<n-1;i++)  
    {
        for(j=n-1;j>=i+1;j--) // in every iteration the max element is pushed at the end of the array loc;therefore exclude one iiteration after the completion of i iteration;
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j]; // first write operation is executed in lower byte index;
                a[j]=temp;
            }
        }
    }
    return ;
}









void display(int a[], int n)
{
    int i;
    printf("sorted elements are:\n");
     for(i=0;i<n;i++)
    {
        printf("%d%c", a[i], i!=0 && (i%10==0)?'\n':' '); // just for the display of the output;
    }
    return ;
}
