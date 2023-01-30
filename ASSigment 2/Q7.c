#include<stdio.h>

int main()
{

    int x = 2;
    char y ;

   y = (x & 1)? "odd" : "Even" ;
    printf("x = %c", y );

    return 0;
}
