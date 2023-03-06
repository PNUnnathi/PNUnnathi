/*Square root of a number

Given an integer X, find its square root. If X is not a perfect square, then return floor(√x).
Example: 
Input: 25 Output: 5
Input: 37 Output: 6 (square toot of 37 lies between 6 and 7, therefore 6)

Input Format

'N' indicating the integer to which square root needs to be computed

Output Format

Computed square root

Testcase 1
Input

101
Output

10*/

#include<stdio.h>

int sqroot(int num)
{
        int i;
        if(num==1)
                return 1;
        for(i=2;i<=num/2;i++)
        {
                if(i*i<=num)
                {
                        if(num/i==num)
                        return i;
                }

                else
                        return(i-1);
        }
}
void main()
{
        int num,root;

        scanf("%d",&num);

        root = sqroot(num);

        printf("Square root of %d is %d",num,root);
}
