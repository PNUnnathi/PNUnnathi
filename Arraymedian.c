/*
Median of two sorted Arrays
Given two sorted arrays, a[] and b[], find the median of these sorted arrays when merged as another sorted array.
Eg1: Array 1: 10 100
Array 2: 50 60 70
Output: 60 (It is the median of the merged sorted array: 10 50 60 70 100)
Eg1: Array 1: 10 100 200
Array 2: 50 60 65
Output: 62.5 (It is the median of the merged sorted array: 10 50 60 65 100 200)
Input Format
First line: m indicating number of elements in array 1
Second line: m sorted numbers of first array separated by space
Third line: n indicating number of elements in array 2
Fourth line: n sorted numbers of second array separated by space
Output Format
Median element of the merged sorted array
Testcase 1
Input
2
10 100
3
50 60 70
Output
60.000000
*/

#include<stdio.h>

int main()
{
    int a[40],i,j,m,n,temp;
    float median;
    
    scanf("%d",&m);
    
    for(i=0;i<m;i++)
       scanf("%d",&a[i]);
    
    scanf("%d",&n);
    
    for(j=i;j<m+n;j++)
       scanf("%d",&a[j]);
    
    for(i=0;i<m+n;i++)
    {
      for(j=i;j<m+n;j++)
      {
          if(a[i]>a[j])
          {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
          }
      }
    
    }
    
    if((m+n)%2==0)
       median=(float)(a[(m+n)/2]+a[((m+n)/2)-1])/2;
    else
       median=(float)a[(m+n)/2];
    
    printf("%f",median);
    
    return 0;
}
