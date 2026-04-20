#include <stdio.h>
#include <stdlib.h>

// Define a Point struct using typedef for cleaner syntax
typedef struct Point
{
    float x;
    float y;
}Point;

int main()
{
    // Create a Point variable and set its coordinates
    Point p;
    p.x=3.647464;
    p.y=2.57483648;

    // Print the coordinates
    printf("X asis:%.2f Y axis:%.2f",p.x,p.y);

    return 0;
}

