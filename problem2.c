#include<stdio.h>

void main()
{
        int is[20],js[20],i,j,a[30][30],m,n,k,l;

        scanf("%d""%d",&m,&n);
        k=0;
        l=0;
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }

        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(a[i][j] == 0)
                        {
                                is[k++]=i;
                                js[l++]=j;
                        }
                }
        }

        for(i=0;i<k;i++)
        {
                for(j=0;j<m;j++)
                        a[is[i]][j]=0;
        }

        for(i=0;i<l;i++)
        {
                for(j=0;j<n;j++)
                        a[j][js[i]]=0;
        }

        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",a[i][j]);
                }

                printf("\n");
        }
}
