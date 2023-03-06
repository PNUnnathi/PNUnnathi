/*MinMax in an array

Use divide and Conquer approach to find the maximum and minimum element present in an array.

Input Format

First line: 'N' indicating number of elements
Second line: N numbers separated by space

Output Format

Min element separated by space with maximum element

Testcase 1
Input

5
50 40 10 90 30
Output

10 90*/

#include<stdio.h>

void merge(int a[], int st, int mid, int en)
{
        int i,j,k;
        int n1=mid-st+1;
        int n2=en-mid;
        int left[n1],right[n2];

        for(i=0;i<n1;i++)
                left[i] = a[st+i];

        for(j=0;j<n2;j++)
                right[j] = a[mid+1+j];

        i=0;j=0;k=st;

        while(i<n1 && j<n2)
        {
                if(left[i]<=right[j])
                {
                        a[k++]=left[i];
                        i++;
                }
                else
                {
                        a[k++]=right[j];
                        j++;
                }
        }

        while(i<n1)
        {
                a[k++]=left[i];
                i++;
        }

        while(j<n2)
        {
                a[k++]=right[j];
                j++;
        }
}



void mergesort(int a[], int st, int en)
{
        int mid;

        if(st<en)
        {
                mid = (st+(en-1))/2;

                mergesort(a,st,mid);
                mergesort(a,mid+1,en);

                merge(a,st,mid,en);
        }
}
int main()
{
        int a[10],i,n;

        scanf("%d",&n);


        for(i=0;i<n;i++)
                scanf("%d",&a[i]);

        mergesort(a,0,n);

        for(i=0;i<n;i++)
                printf("%d\t",a[i]);

        printf("%d\t","%d",a[0],a[n-1]);
        printf("\n");

        return 0;
}

