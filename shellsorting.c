/* shellsort() is a sorting alg. with less number of iterations unlike bubble sort wich requires iteration of (n-1)(n-1)
in shellsort alg. 
given : input A[1..N]
compute the middle number since array starts from 0 index
set low=0;
high=N-1;
mid=(low+high)/2; 
in the function void shellsort(int [], int);
the first outer loop runs for n/2 elements every iterartion till it becomes zero
e.g if N=10 ;
(10/2=5); (5/2=2) ; (2/2=1); (1/2=0); (zero means there are no more elements to compare)
so first outer loop runs for every n/2 elements until it becomes zero
 for(mid=n/2;mid>0;mid/=2)  ---------------->in first iteration n is divided into two elements n/2 and n/2 with equal no. ofelements on both sides
 in second iteration n/2 is divided by 2: it becomes n/4 so the total no. of comparisions will be more it will be n=n-n/4 comparisons
 e.g: n=10, 10/2=5; (left 5 elements are compared with right five elements including mid) ; (5/2=2) mid=2; when mid=2, the total no. of comparisons will be
 n=n-mid including mid i,e  n=8-2=6; when mid=1 i,e 2/2=1 each element of i is checked with all the previous elemets of j; e.g i-mid will give the location of left
 tree;
 for(i=mid;i<n;i++)  --------------> value of i is set to mid this loop iterates for the rightmost elements after mid
 for(j=i-mid;j>=0 && v[j]>v[j+mid];j-=mid) -------------->  this  loop iterates for the left most elements  before mid
 for every one iteration of i loop
 j also iterates only once for the first iteration of the outermost for loop i,e n=n/2.
 for N=5;
 e.g: a[0], a[1], a[2], a[3], a[4]
 mid=(0+4)/2=2;
 for(i=mid;i<n;i++)
 mid=2; i is set to mid i,e i=2; n=5; 
  for(j=i-mid;j>=0 && v[j]>v[j+mid];j-=mid)
  now, j=[2-2]=0;
  v[j] gives the location of left tree and v[j+mid] gives the location of right tree.
  
  j=0; now condition is checked if (a[j]>a[j+mid]) which means for every one element 
  in the left side of mid is checked with exactly one element of the rightside of mid
  first time when the loop starts a[0] is compared with a[mid] if a[0]>a[mid] it is swapped 
  similary
  a[1] is compared with a[3]
  a[2] is compared with a[4]
  if the number of elements are odd low=0 is compared with a[mid] && high=n-1 is also compared with a[mid] during the first iteration i,e when mid=n/2;

bubble sorting is implemented in the function void sort(int [], int); 
one can compare both the algorithms in terms of no.of iterations

*/



#include <stdio.h>
#define LIMIT 100
void read(int a[], int n);
void shellsort(int [], int);
void sort(int [], int);
void display(int a[], int n);

int main()
{
    int a[LIMIT], n;
    printf("enter value of n");
    scanf("%d", &n);
     read(a, n);
     //sort(a,n);
     shellsort(a,n);
     display(a,n);
    return 0;
}

void read(int a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}


void sort(int a[], int n)
{
    
    int i, j, temp=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return ;
}



void shellsort(int v[], int n)
{
    int mid, i, j,  temp;
    
    for(mid=n/2;mid>0;mid/=2)
    {
        for(i=mid;i<n;i++)
        {
            
            for(j=i-mid;j>=0 && v[j]>v[j+mid];j-=mid)
            {
                      temp=v[j];
                      v[j]=v[j+mid];
                      v[j+mid]=temp;
            }
            
        }
        
        
    }
    return ;
}


void display(int a[], int n)
{
    
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return ;
}
