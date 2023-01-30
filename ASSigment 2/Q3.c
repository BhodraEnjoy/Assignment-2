#include<stdio.h>

int main()
{

    int x =10 ,y = 15;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("swap values of two int variables x = %d , y = %d", x,y);
    return 0;

}
