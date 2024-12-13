#include <stdio.h>

int main() {
    float a = 4.0,b=3.0,c=-2.0,x=2,y;
    y = a * x * x + b * x + c;
    printf("The result for x=%.2f is: %.2f\n", x, y);

    return 0;
}