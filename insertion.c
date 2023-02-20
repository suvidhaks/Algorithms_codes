/*
this program sorts every consecutive location by keeping track of two pointers one is j and other is i
j is current pointer and i is previous pointer;
in the while loop the condition is i>=0;
reason is say if j is point to loc 2 then sort then sort the subarray {0,1}
i,e {1,2},{0,1} say for larger value of j sort the subarray from  the loc i= j-1 until i becomes 0;
sorting happens w.r.to two consecutive locations; every time the key value is set to j location which is 
compared with previous locations of i
note: when j is incremented , i should be set to the previous loc of j
therfore soon after the outfer forloop with  j variable ; the i value is set to i=j-1
the value of key is the value of a[j] or the value of the current pointer
(here pointer means just a cursor or a stick) 
note the insertion sort works on 3 steps:
1. j is pointed to i+1 coz my i loc starts from 0; i=0, j=i+1; i points to its immediate previous loc;
2. say j=1, i=0 the subarray that must be sorted when j=1 is i=0; only one element needs to be sorted;
when j=2, the remaining two indexes i,e i={0,1} which forms the sub array needs to be sorted when j=2  w.r.t the key element which is set to key=a[j];
now, this key element needs to be compared with each loc of i i,e a[1] and a[0]; will see one by one 
a[0], a[1], a[2]; 
j=2; key=a[j];
while(i>=0 && key <a[i])
{
a[i+1]=a[i];
i--;
}
a[i+1]=key;
each loc of i is checked with key value if the i loc value is greater than key it is exchanged with the immediate next loc of i i,e a[i+1]
and i is decremented again the condition is checked in while loop; there are two possibilities either i will be decremented till i=-1; then loop comes out and
at a[i+1] the key is placed i,e at a[0]=key;
or say a[0], a[1], a[2];
key=a[2]; (j=2);
a[1]>key;
a[2]=a[1]; i--; (i is decremented)
a[0] <key; (comes out of while loop)
now key is placed in a[i+1]; (i value is 0; so i+1=1)
a[1]=key;
in this way key is placed in appropriate location;

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
           // a[i]=key;  acts as current pointer in the next iteration; (this statement can be avoided and the key can be placed in appropriate loc) with this we can reduce one memory acccess
            i--;  // now key is set to the current pointer and i-- points to previous location 
        }
        a[i+1]=key;
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




