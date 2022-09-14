//7. Write a program to print the first N even natural numbers in reverse order


#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=10;i>=n;i--)
    {
        printf("%d\n",i*2);
    }

    return 0;
