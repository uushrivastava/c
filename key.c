//Wap to find i and j in ana array for any key such that a[j^2] + a[i^2] == key

#include<stdio.h>
void main()
{
    int i,n,key,t1,t2,flag=0,j;
    printf("Enter The Size Of Array : ");
    scanf("%d",&n);
    int a[n];

    printf("Enter The Elements One By One\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter The Key : ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        t1=a[i];
        for(j=0;j<n;j++)
        {
            t2=a[j];
            if((t1*t1)+(t2*t2)==key)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
    {
        printf("\nMatch Found!!");
        printf("\nI Value : %d",i);
        printf("\nJ Value : %d",j);
    }
}
