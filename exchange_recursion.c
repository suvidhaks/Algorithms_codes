#include <stdio.h>
#define LIMIT 20
int a[LIMIT];
int *start =&a[0];
int *last ;
int n;
int exchange(int *p, int *q);
void read(int [], int);
void display(int [], int);
int main()
{
   
    int n;
    printf("enter n value\n");
    scanf("%d", &n);
    read(a,n);
    last =a+n; //compute last address of an array[n];
    exchange(a, a+1);
    display(a,n);
    return 0;
}

int exchange(int *p, int *q)
{
    int temp;
    if(q>=last) // when p points to last loc; there are no more elements to compare; 
      return 0;
      
    if(*p>*q)
    {
        *p=*p + *q;
        *q=*p - *q;
        *p=*p - *q;
    }
    
    p++;
    q++;
    exchange(p,q);
}


void read(int a[],int n)
{
    int i;
    printf("\nenter array values");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}


void display(int a[], int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    return ;
}
