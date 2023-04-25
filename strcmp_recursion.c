#include <stdio.h>
#include <string.h>
int stringcmp(char str1[], char str2[], int i, int n);

int main()
{
int n,i=0,j;
char str1 []= "GOOd", str2 []= "GOOa";
n= strlen (str1);
//n=n-1;
//j = strcmp (str1 , str2);
j=stringcmp(str1, str2,  i, n);
printf ( "%d %d",  j, n);
return 0;
}

int stringcmp(char str1[], char str2[], int i, int n)
{
    if(n==0)
      return 0;
     else if(str1[i]>str2[i]) 
       return (str1[i]-str2[i]);
    else if(str1[i]<str2[i]) 
       return (str1[i]-str2[i]);   
       
    else
      stringcmp(str1,str2,i+1,n-1);
      
}