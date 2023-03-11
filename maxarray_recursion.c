/*

int max_array(int a[], int n);
max_value=max_array(a+1, n-1); // push all the recursive calls of the function in the stack; until n=1;
       return max(a[0], max_value);
//note: think recursion as stack push all the elements into the stack once the fun returns the value ; start popping each fun call;
 supppose n=5
 a[]={3, 4, 2, 7, 6};
 a[0]=3
 a[1]=4
 a[2]=2
 a[3]=7
 a[4]=6      

1st: fun() call for int max_array(int a[], int n); // pop  after returning value 7; so now the stack is empty; therefore ; return maxvalue=7
n=5, a=base address of a[0];
maxvalue= {3}
return {3,7}

2nd : fun() call for int max_array(int a[], int n); // pop  after returning value 7;
n=4, a+1=base address of a[0]+1=a[1];
maxvalue= {4}
return {max(4,7)} =7;

3rd : fun() call for int max_array(int a[], int n); // pop  after returning value 7;
every call n is decremented;
n=3, a+1=base address of a[1]+1=a[2];
maxvalue= {2};
return  {max(2,7)} =7 ;

4th : fun() call for int max_array(int a[], int n); // pop  after returning value 7;
every call n is decremented;
n=2, a+1=base address of a[2]+1=a[3];
maxvalue= {7}
return {max(7,6)} ; 6 is the value returned by the previous function call which is supplied to this fnction call;

5th : fun() call for int max_array(int a[], int n); // pushed 1st into stack; after it returns value 6 pop the funcall and return the pointer to 4th fun call
every call n is decremented;
n=1, a+1=base address of a[3]+1=a[4];
if(n==1)
 return a[0]; here a[0] means the last location a[4]; coz in every recursive fun() call; only the base address (B.A) is passed ; so as a+1 is incremented the next loc becomes B.A
maxvalue=a[4]=6;
maxvalue= {6}
return {max(a[0],max_value)} ; max(6,6)
return value =6;


Note: In recursion; the only concern will be the stack memory;
therefore,the depth of the stack will be of array size; i,e if array_size=n;
then depth of the stack will be n.

*/

//---------------------------------------------------------------------------------------------------*****--------------------------



#include <stdio.h>
#define LIMIT 20
#define max(a,b) (a>b)?a:b

int max_array(int [], int);
void read(int a[], int n);

int main()
{
    int a[LIMIT];
    int n;
    printf("\nenter n value");
    scanf("%d", &n);
    read(a,n);
    printf("\n%d", max_array(a,n));

    return 0;
}


int max_array(int a[], int n)
{
    int max_value;
    if(n==0)
      return -9999;
    if(n==1)
      return a[0];
    else if(n>=2)
    {
       max_value=max_array(a+1, n-1); // push all the recursive calls of the function in the stack; until n=1;
       return max(a[0], max_value);
    }
      
}


void read(int a[], int n)
{
    int i;
    printf("\nenter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    return ;
}
