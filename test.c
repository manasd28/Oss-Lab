#include<stdio.h>
int main()
{
    int a,b;
    printf("Input the two integers a and b\n");
    scanf("%d %d", &a, &b);
    printf("The bitwise xor of the two numbers is %d\n", a^b);
    return 0;
}
