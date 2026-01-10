#include<stdio.h>
int main()
{
    int a, b, 
    rev = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a;
    while(a>0)
    {
        rev =(rev*10) + a%10;
        a=a/10;
    }
    if(rev==b)
    printf("palindrom");
    else
    printf("not palindrom");
    return 0;
}