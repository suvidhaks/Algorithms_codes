

#include <stdio.h>
#define  MAX 20
void read(int [], int);
int main()
{
  int a[MAX];
  int prev, j, i,n;
  int max=0;
  printf("enter n value");
  scanf("%d", &n);
  read(a,n);
  while(max<3)
  {
  for(i=0;i<n;i++)
  {
     prev=a[i];
     j=i+1;
     while(j<n)
     {
         if(prev>a[j])
         {
             j++;
         }
         else if(prev<a[j])
         {
             break;
         }
     }
     if(j>=n)
     {   
         a[i]=0;
         break;
     }
      
  }
  max++;
}
  printf("\nprev=%d", prev);
    return 0;
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