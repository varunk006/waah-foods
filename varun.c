#include<stdio.h>
#include<conio.h>
main()
{
    int x[50],n,j,i,temp;
    printf("how many elements you want to enter: ");
    scanf("%d",&n);
 printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    printf("The sorted elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    getch();
}