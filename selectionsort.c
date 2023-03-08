#include <stdio.h>
#define MAX 30
void read(int [], int);
void selectionsort(int [], int);
void display(int a[], int n);

int main()
{
    int a[MAX];
    int n;
    printf("\nenter n value");
    scanf("%d", &n);
    read(a,n);
    selectionsort(a, n);
    display(a,n);
    

    return 0;
}


void selectionsort(int a[], int n)
{
  int i, j;
  int smallest;
  int temp;
  for(i=0;i<n-1;i++)
  {
      smallest=i;
      for(j=i+1;j<n;j++)
      {
          if(a[j]<a[smallest])
              smallest=j;
      }
      if(smallest>i)
      {
          temp=a[smallest];
          a[smallest]=a[i];
           a[i]=temp;
      }
  }
   return ; 
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


void display(int a[], int n)
{
    int i;
    printf("\nsorted array elements");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    return ;
}

