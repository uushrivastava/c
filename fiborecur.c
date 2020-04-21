//Fibonacci series in recursive way
#include<stdio.h>
int a,b,c;
void main()
{
    int n;
    printf("Enter The Limit Of The Series : ");
    scanf("%d",&n);

    a=0;
    b=1;
    printf("%d\t",a);
    printf("%d\t",b);

    fibo(n);
}
int fibo(int n)
{
    if(n<=1)
        return 1;

    else
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
        fibo(n-1);
    }
}
