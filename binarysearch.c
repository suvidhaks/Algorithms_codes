/* in this program the array elements that user inputs should be in sorted fashion.
ex: a[0]<a[1]<a[2]<a[3]....<a[n-1]
if one uses for loop and iterates through entire array to match the key the running time would be the value of n, so
to minimize the number of iterations mid is calculated along with the 3-way decision making if else loop
the no. of iterations in this program will be minimized to n/2 iterations.
*/


#include <stdio.h>
#define limit 100

int binarysearch(int [],int,int);
int main()
{
  
 int a[limit], key,i,bin,n;
 int j=1;
 printf("enter n value");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
     a[i]=j*10;
     
     printf("%d%c",a[i],   (j%10==0)?'\n':' ');
     j++;
 }
 
  printf("\nenter key value");
 scanf("%d", &key);
 
 bin=binarysearch(a,n,key);
   printf("\n key found at pos=%d", bin);
    return 0;
}

int binarysearch(int a[], int n,int key)
{
    int i=0;
    int low=0,high, mid;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key<a[mid])
        {
            high=mid-1;    
        }
         else if(key>a[mid])
        {
            low=mid+1;    
        }
        else
          return mid;
    }
    
    return -1;
}