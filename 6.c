//6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*2);
    }

    return 0;
}
