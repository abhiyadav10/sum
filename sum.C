#include <stdio.h>

int main() {
    // Your code goes here
    int a,b;

    printf("Enter a two numbers\n");
    scanf("%d%d",&a,&b);

    if((a>=1 && a<=1000 )&&(b>=1 && b<=1000))
    {   
        printf("The sum of %d and %d is:%d",a,b,a+b);
    }
    else
    printf("Two numbers should be greater than equal to 1 and less than equal to 1000\n ");
    return 0;
}