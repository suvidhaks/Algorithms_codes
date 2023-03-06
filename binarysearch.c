/* in this program the array elements that user inputs should be in sorted fashion.
ex: a[0]<a[1]<a[2]<a[3]....<a[n-1]
if one uses for loop and iterates through entire array to match the key the running time would be the value of n, so
to minimize the number of iterations mid is calculated along with the 3-way decision making if else loop
the no. of iterations in this program will be minimized to n/2 iterations.
*/

#include <stdio.h>
#define MAX 100
int binarysearch(int [], int , int);
void read(int [], int);
int main()
{
    int a[MAX];
    int i,n,key;
    printf("\nenter n and key value");
    scanf("%d%d", &n, &key);
    read(a,n);
   i= binarysearch(a,n,key);
   printf("\n%d", i);

    return 0;
}


int binarysearch(int a[], int n, int key)
{
    int low, high, mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            return mid;
        }
       else if(key<a[mid])
        {
            high=mid-1;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        
       
    }
    
   return -1; 
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




