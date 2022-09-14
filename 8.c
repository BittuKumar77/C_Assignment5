//8. Write a program to print squares of the first N natural numbers


#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}
