/*
this program sorts every consecutive location by keeping track of two pointers one is j and other i
j is current pointer and i is previous pointer;
in the while loop the condition is i>=0;
reason is say if j is point to loc 2 then sort then sort the subarray {0,1}
i,e {1,2},{0,1} say for larger value of j sort the subarray from  the loc j-1 until i becomes 0;
sorting happens w.r.to two consecutive locations; every time the key value is set to current location which is 
compared with previous location
note: when j is incremented , i should be set to the previous loc 
therfore soon after the j loop; the i value is set to i=j-1
the value of key is the value of a[j] or the value of the current pointer
(here pointer means just a cursor or a stick) 

*/

#include <stdio.h>
#define MAX 100
void read(int [], int);
void insertion_sort(int [], int);
void display(int[], int);
int main()
{
    int a[MAX];
    int  n;
    printf("enter n value");
    scanf("%d", &n);
    insertion_sort(a,n);
    return 0;
}

void read(int a[],int n)
{
    int i;
     for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}


void insertion_sort(int a[], int n)
{
    
     int i,  j, key;
   read(a,n);
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && key<a[i])
        {
            a[i+1]=a[i]; //swap the two consecutive location values;
            a[i]=key;  //acts as current pointer in the next iteration;
            i--;  // now key is set to the current pointer and i-- points to previous location 
        }
    }
    display(a,n);
    return ;
}


void display(int a[], int n)
{
    int i;
     for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    return ;
}




