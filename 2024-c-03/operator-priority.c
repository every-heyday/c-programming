#include <stdio.h>

void main() {
    int a, b, c;
    a= 10; b = 20; c = 30;
    
    printf("a + b * c = %d\n", a + b * c); // 610
    printf("a = b + = 2 * c -> a = %d\n", a = b += 2 * c); // 80
    printf("a -> %d, b -> %d, c -> %d\n", a, b, c); // 80, 80, 30

    printf("a = (b > 2) ? b : c -> a = %d\n", a = (b > 2) ? b : c); // 80
        printf("a -> %d, b -> %d, c -> %d\n", a, b, c); // 80, 80, 30

    printf("a / b * c = %d\n", a / b * c); // 30
    printf("a * = b = c + 5 -> a = %d\n", a *= b = c + 5); // 2800
}