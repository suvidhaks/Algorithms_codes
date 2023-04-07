#include <stdio.h>
#define max 100

void read(int a[max], int n);
void mergesort(int [], int, int);
void merge(int[], int, int ,int);
void display(int [], int);

int main()
{
   int a[max];
   int n;
   printf("enter n value");
   scanf("%d", &n);
   read(a,n);
   int p=0, r=n-1;
   mergesort(a,p,r);
   display(a,n);
    return 0;
}

void read(int a[max], int n)
{
    int i;
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
   return ;
}


void mergesort(int a[], int p, int r)
{
    
   if(p>=r)
     return ;
   else
   {  
   int q;
   q=(p+r)/2;
   mergesort(a,p,q);
   mergesort(a,q+1,r);
   merge(a,p,q,r);
   }
   
    
}



void merge(int a[], int p, int q, int r)
{
    int n1, n2, len;
    int p1;
    p1=p;
  
    n1=q-p+1;
    n2=r-q;
   // printf("\n n1=%d",n1);
   // printf("\n n2=%d",n2);
    int b[n1], c[n2];
  
    int i,j, mid, k;
    mid=q;
    k=p;
    i=j=0;

    while(i<n1) //copy into left subarray;
    {
         b[i]=a[p1++];
         i++;
    }
      printf("\n n1=%d", n1);
   
    while(j<n2) //copy into right subarray;
    {
        c[j++]=a[++mid];
        
    }
  
    printf("\n n2=%d", n2);

    b[n1]=c[n2]=999999;// b[i] : is left subarray; c[j] is right subarray
    int i1, j1;
    printf("\t%d\t%d\t%d", k,p,r );
     i1=j1=0;
     for(i1=0;i1<=n1;i1++)
     {
        printf("b[i1]=%d ", b[i1]);
     }
      for(j1=0;j1<=n2;j1++)
     {
        printf("c[j1]=%d ", c[j1]);
     }
     
    printf("\n........................\n");
      i1=j1=0;
  for(k=p;k<=r;k++) //sorting
   {
    if(b[i1]<=c[j1])
    {
           a[k]=b[i1];
           i1++;
    }
    else 
    {
        if(b[i1]>c[j1])
        {
          a[k]=c[j1];
          j1++;
        }
    }
   } 
    return ;
}



void display(int a[], int n )
{
    int i;
    printf("elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return ;
}



