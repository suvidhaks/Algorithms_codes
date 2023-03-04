/*
this program takes time complexity O(n);
if the key is found at the las loc in an array 
the entire array has to be traversed to find the key;
say suppose the number of items in the array are n;
and if the key is found at the loc [n-1];
then time complexity requires O(n);
therefore; we say the that linear search algorithm takes linear time 

int sentinal_linearsearch(int a[], int n, int x) ;
in this function; the last element at pos[n-1] is saved in the variable last;
and key is placed in a[n-1];
i=0;
while(a[i]!=key)
 i++;
 restore last value at a[n-1]=last;
 now if i<n-1 assuming that a[n-1]=key then n-1  loc must be displayed else the index i at which key is found must be displayed otherwise -1;

.........................................****************************........................................................................

analyse time complexity: linearsearch(a,n,key);
case 1: key not found: flag=-1;
initailly flag is set to -1 which takes t0 time coz this happens only once ;
i is incremented to (n) times which takes t1 time ;
t1.(n) ; // n  times coz initially i =0;
inside for loop i<n;
since i is incremented till (n) times;
(n+1) comparisons are made; it takes time say t1 again the reason being both the tests are made in the for loop;
t11.(n+1);
if(a[i]==key);
n comparisons are made which takes time say t2;
t2.n;
assigning answer to flag takes between 0 to n// suppose no key is found then i value is not set to the flag ; suppose key is found at n;
then flag=n;
return flag// takes t3 time which also executes only once;
therefore  time complexity is given below:
[t0 + t1.(n) + t11.(n+1) + t2.(n) + t21.0 + t3]  ------(1); //case 1 : if key is not found;
simplify the equation (1)

t1.n + t11.n +t1 + t2.n +t2 +t3 + t0; 

(t1+t11+t2). n + (t0+t1+t3); ------lower bound // t21 is not set to any value so no time is taken for this step to execute;

[t0 + t1.(n) + t11.(n+1) + t2.(n) + t21.n + t3];  //case 2 : if key is  found at n location;

(t1+t11+t2+t21).n + (t0+t11+t3) ------ upper bound //
if you analyse lower bound and upper bound both are in the form of equation
cn+d----------which is linear equation
therefore we say that linear search takes linear time....
f(n)=theta(n);
c1.n<f(n)<=c2.n;

*/



#include <stdio.h>
#define MAX 100

void read(int a[], int n);
int linearsearch(int [], int, int);
int Better_linearsearch(int [], int, int);
int sentinal_linearsearch(int a[], int n, int x);

int main()
{
    int a[MAX];
    int i, n,key, flag;
    int senti;
    printf("enter n value");
    scanf("%d", &n);
    read(a,n);
    printf("\nenter key value");
    scanf("%d", &key);
    flag=linearsearch(a, n, key);
    i= Better_linearsearch(a, n, key);
    senti= sentinal_linearsearch(a, n, key);
    printf("\nlinearsearch=%d", flag);
    printf("\nbetterlinearsearch=%d", i);
    printf("\nsentinallinearsearch=%d", senti);
   
    return 0;
}


int Better_linearsearch(int a[], int n, int x)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}



int sentinal_linearsearch(int a[], int n, int x)
{
    int i=0, last;
    last=a[n-1];
    a[n-1]=x;
    
    while(a[i]!=x)
    {
        i++;
    }
    
    a[n-1]=last;
   return ((i<n-1)||(a[n-1]==x))?i:-1;
      
}


int linearsearch(int a[], int n, int key)
{
     int i;
     int flag=-1;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=i;
        }
    }
    return flag;
}



void read(int a[], int n)
{
    int i;
    printf("\n enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    return ;
}


