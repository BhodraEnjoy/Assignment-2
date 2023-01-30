#include<stdio.h>

int main()
{
    int x = 10, y = 15, temp;

    temp = x;
    x  = y;
    y = temp;

     printf("swap values of two int variables x = %d , y = %d", x,y);
     return 0;
}
