#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter a:"); //Hell :) Hello, Bartholomew
    scanf("%d", &a);
    
    printf("Enter b:");
    scanf("%d", &b);
    
    float x = (float) -b/a;
    
    printf("x = %.2f", x);
    
    return 0;
}
