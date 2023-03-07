#include <stdio.h>
#define MAX 30
void read(int [], int);
int binarysearch(int [], int, int, int);
int main()
{
    int a[MAX];
    int n, key;
    int bin;
    printf("\nenter n value");
    scanf("%d", &n);
   
    read(a,n);
     printf("\nenter key value");
    scanf("%d", &key);
    int low=0;
    int high=n-1;
   bin= binarysearch(a,low,high,key);
   printf("\nbin=%d", bin);
    

    return 0;
}


int binarysearch(int a[], int low, int high, int key)
{
    int mid;
    if(low>high)
    {
        return -1;
    }
    else if(low<=high)
    {
        
        mid=(low+high)/2;
        
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            return binarysearch(a,low,mid-1,key);
        }
        else if (a[mid]<key)
        {
            return binarysearch(a,mid+1,high,key);
        }
        
    }
    
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