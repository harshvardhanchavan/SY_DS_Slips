#include<stdio.h>
#include<stdlib.h>

int main()
{
        int a[10][10],i,j,n;
        printf("\nEnter No of vertices :: ");
        scanf("%d",&n);


        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                        {
                                printf("Enter the edge between V%d and V%d  :: ",i,j);
                                scanf("%d",&a[i][j]);
                        }

        printf("\nEnter Adjacency ::\n");
       
        for(i=1;i<=n;i++)
                printf("\tv%d",i);

        printf("\n");
        for(i=1;i<=n;i++)
        {
                printf("\nv%d",i);
                for(j=1;j<=n;j++)
                        printf("\t%d",a[i][j]);
        }
}