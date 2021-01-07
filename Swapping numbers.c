#include <stdio.h>
int main()
{
    int x = 50, y = 100;
    x = x + y; 
    y = x - y; 
    x = x - y; 
 
    printf("After Swapping: x = %d, y = %d", x, y);
    return 0;
}
